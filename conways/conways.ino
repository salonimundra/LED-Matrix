
#define XSIZE 10
#define YSIZE 8
int DataPin = 11;
int LatchPin = 10;
int ClockPin = 13;
int clock = 9;
int Reset = 8;
int a;
byte world[10][12][2];
long density = 50; // The density of the population on the the screen
byte bank[] = {
  B00000001,B00000010,B00000100,B00001000,B00010000,B00100000,B01000000,B10000000}; // a pool of bytes
// set up
byte leds_1[10] = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte leds_2[10] = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
void setup(){
  pinMode(DataPin,OUTPUT);
  pinMode(ClockPin,OUTPUT);
  pinMode(LatchPin,OUTPUT);
  //simple stuff here
  pinMode(clock,OUTPUT);
  pinMode(Reset,OUTPUT);
  //reseting the 4017 IC
  digitalWrite(Reset,HIGH);
  delayMicroseconds(5);
  digitalWrite(Reset,LOW);
  randomSeed(analogRead(5));// a random seed for the random start pattern
  // random papulation of the screen
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 12; j++) {
      if (random(100) < density) {
        world[i][j][0] = 1;
        leds_1[i]+=bank[j];
        leds_2[i] = leds_1[i];
      }
      else {
        world[i][j][0] = 0;
      }
      world[i][j][1] = 0;
    }
  }
}


void loop(){
  display_pattern_1(50);
  // Birth and death cycle
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 12; y++) {
      // Default is for cell to stay the same
      world[x][y][1] = world[x][y][0];
      int count = neighbours(x, y);
      if (count == 3 && world[x][y][0] == 0) {
        // A new cell is born
        world[x][y][1] = 1;
        leds_2[x] += bank[y];
      }
      if ((count < 2 || count > 3) && world[x][y][0] == 1) {
        // Cell dies
        world[x][y][1] = 0;
        leds_2[x] -= bank[y];
      }
    }
  }

  // Copy next generation into place
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 12; y++) {
      world[x][y][0] = world[x][y][1];
      leds_1[x] = leds_2[x];
    }
  }
}

// This function is for the 4 laws in conway's game of life
int neighbours(int x, int y) {
  return world[(x + 1) % XSIZE][y][0] +
    world[x][(y + 1) % YSIZE][0] +
    world[(x + XSIZE - 1) % XSIZE][y][0] +
    world[x][(y + YSIZE - 1) % YSIZE][0] +
    world[(x + 1) % XSIZE][(y + 1) % YSIZE][0] +
    world[(x + XSIZE - 1) % XSIZE][(y + 1) % YSIZE][0] +
    world[(x + XSIZE - 1) % XSIZE][(y + YSIZE - 1) % YSIZE][0] +
    world[(x + 1) % XSIZE][(y + YSIZE - 1) % YSIZE][0];
}


void display_pattern_1(int loops){
  for(int t=0;t<loops;t++){
    for(a=0;a<10;a++){
      digitalWrite(LatchPin, 0);
      shiftOut(DataPin, ClockPin,MSBFIRST,leds_1[a]);
      digitalWrite(LatchPin, 1);
      delayMicroseconds(800);
      digitalWrite(LatchPin, 0);
      shiftOut(DataPin, ClockPin,MSBFIRST,0);
      digitalWrite(LatchPin, 1);
      digitalWrite(clock,HIGH);
      digitalWrite(clock,LOW);
    }
  }
}




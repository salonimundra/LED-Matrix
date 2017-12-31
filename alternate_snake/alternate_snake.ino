byte S[][10]= {{B00000000,B00111100,B01000010,B01000010,B01000010,B01111110,B01000010,B01000010,B01000010,B00000000},
{B00000000,B01111100,B01000010,B01000010,B01111100,B01000010,B01000010,B01000010,B01111100,B00000000},
{B00000000,B00111110,B01000000,B01000000,B01000000,B01000000,B01000000,B01000000,B00111110,B00000000},
{B00000000,B01111100,B01000010,B01000010,B01000010,B01000010,B01000010,B01000010,B01111100,B00000000},
{B00000000,B01111110,B01000000,B01000000,B01111100,B01000000,B01000000,B01000000,B01111110,B00000000},
{B00000000,B01111110,B01000000,B01000000,B01111100,B01000000,B01000000,B01000000,B01000000,B00000000},
{B00000000,B00111100,B01000010,B01000010,B01000000,B01000111,B01000010,B01000010,B00111100,B00000000},
{B00000000,B01000010,B01000010,B01000010,B01111110,B01000010,B01000010,B01000010,B01000010,B00000000},
{B00000000,B00111000,B00010000,B00010000,B00010000,B00010000,B00010000,B00010000,B00111000,B00000000},
{B00000000,B00011100,B00001000,B00001000,B00001000,B00001000,B01001000,B01001000,B00110000,B00000000},
{B00000000,B01000100,B01001000,B01010000,B01100000,B01010000,B01001000,B01000100,B01000010,B00000000},
{B00000000,B01000000,B01000000,B01000000,B01000000,B01000000,B01000000,B01000000,B01111110,B00000000},
{B00000000,B01000100,B10101010,B10010010,B10010010,B10000010,B10000010,B10000010,B10000010,B00000000},
{B00000000,B01000010,B01100010,B01010010,B01001010,B01001010,B01001010,B01000110,B01000010,B00000000},
{B00000000,B00111100,B01000010,B01000010,B01000010,B01000010,B01000010,B01000010,B00111100,B00000000},
{B00000000,B00111100,B01000010,B01000010,B01000010,B01111100,B01000000,B01000000,B01000000,B00000000},
{B00000000,B00111100,B01000010,B01000010,B01000010,B01000010,B01000010,B01000110,B00111110,B00000001},
{B00000000,B00111100,B01000010,B01000010,B01000010,B01111100,B01000100,B01000010,B01000010,B00000000},
{B00000000,B00111100,B01000010,B01000000,B01000000,B00111100,B00000010,B01000010,B00111100,B00000000},
{B00000000,B11111110,B00010000,B00010000,B00010000,B00010000,B00010000,B00010000,B00010000,B00000000},
{B00000000,B01000010,B01000010,B01000010,B01000010,B01000010,B01000010,B01000010,B00111100,B00000000},
{B00000000,B01000010,B01000010,B01000010,B01000010,B01000010,B01000010,B00100100,B00011000,B00000000},
{B00000000,B10000010,B10000010,B10000010,B10000010,B10010010,B10010010,B10101010,B01000100,B00000000},
{B00000000,B01000010,B01000010,B00100100,B00011000,B00011000,B00100100,B01000010,B01000010,B00000000},
{B00000000,B10000010,B01000100,B00101000,B00010000,B00010000,B00010000,B00010000,B00010000,B00000000},
{B00000000,B01111110,B00000010,B00000100,B00001000,B00010000,B00100000,B01000000,B01111110,B00000000},
{B00000000,B00000000,B00000000,B00000000,B00111000,B01000100,B01000101,B01000101,B00111010,B00000000},
{B00000000,B00000000,B00100000,B00100000,B00100000,B00111100,B00100010,B00100010,B00111100,B00000000},
{B00000000,B00000000,B00000000,B00000000,B00111100,B01000000,B01000000,B01000000,B00111100,B00000000},
{B00000000,B00000000,B00000100,B00000100,B00000100,B00111100,B01000100,B01000100,B00111100,B00000000},
{B00000000,B00000000,B00000000,B00111000,B01000100,B01000100,B01111000,B01000000,B00111100,B00000000},
{B00000000,B00011000,B00100100,B00100000,B00100000,B01110000,B00100000,B00100000,B00100000,B00000000},
{B00000000,B00011100,B00100010,B00100010,B00011110,B00000010,B00000010,B00010010,B00001100,B00000000},
{B00000000,B01000000,B01000000,B01000000,B01000000,B01111000,B01000100,B01000100,B01000100,B00000000},
{B00000000,B00000000,B00010000,B00000000,B00010000,B00010000,B00010000,B00010000,B00010000,B00000000},
{B00000000,B00000000,B00010000,B00000000,B00010000,B00010000,B00010000,B01010000,B00110000,B00000000},
{B00000000,B00000000,B00000000,B01001000,B01010000,B01100000,B01100000,B01010000,B01001000,B00000000},
{B00000000,B01000000,B01000000,B01000000,B01000000,B01000000,B01000000,B01000000,B01000000,B00000000},
{B00000000,B00000000,B00000000,B00110100,B01001010,B01001010,B01001010,B01001010,B01001010,B00000000},
{B00000000,B00000000,B00000000,B01111000,B01000100,B01000100,B01000100,B01000100,B01000100,B00000000},
{B00000000,B00000000,B00000000,B00000000,B00011100,B00100010,B00100010,B00100010,B00011100,B00000000},
{B00000000,B00000000,B00000000,B00011100,B00100010,B00100010,B00111100,B00100000,B00100000,B00100000},
{B00000000,B00000000,B00000000,B00111000,B01000100,B01000100,B00111100,B00000100,B00000100,B00000100},
{B00000000,B00000000,B00000000,B00111000,B01000000,B01000000,B01000000,B01000000,B01000000,B00000000},
{B00000000,B00000000,B00111000,B01000100,B01000000,B00111000,B00000100,B01000100,B00111000,B00000000},
{B00000000,B00100000,B00100000,B00100000,B01111000,B00100000,B00100000,B00100010,B00011100,B00000000},
{B00000000,B00000000,B00000000,B00000000,B01000100,B01000100,B01000100,B01000100,B00111000,B00000000},
{B00000000,B00000000,B00000000,B01000100,B01000100,B01000100,B01000100,B00101000,B00010000,B00000000},
{B00000000,B00000000,B00000000,B00000000,B01000100,B01000100,B01010100,B01010100,B00101000,B00000000},
{B00000000,B00000000,B00000000,B00000000,B00000000,B00100100,B00011000,B00011000,B00100100,B00000000},
{B00000000,B00000000,B01000100,B01000100,B00111100,B00000100,B00000100,B00000100,B00111000,B00000000},
{B00000000,B00000000,B00000000,B00000000,B01111100,B00001000,B00010000,B00100000,B01111100,B00000000},
{B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000},
{B00000000,B00111100,B01000110,B01001010,B01001010,B01001010,B01010010,B01100010,B00111100,B00000000},
{B00000000,B00001000,B00011000,B00001000,B00001000,B00001000,B00001000,B00001000,B00011100,B00000000},
{B00000000,B00111100,B01000010,B00000100,B00001000,B00010000,B00100000,B01000000,B01111110,B00000000},
{B00000000,B01111110,B00000010,B00000010,B00011100,B00000010,B00000010,B01000010,B00111100,B00000000},
{B00000000,B00000100,B00001100,B00010100,B00100100,B01000100,B01111110,B00000100,B00000100,B00000000},
{B00000000,B01111110,B01000000,B01000000,B00111100,B00000010,B00000010,B00000010,B01111100,B00000000},
{B00000000,B00111100,B01000000,B01000000,B01111100,B01000010,B01000010,B01000010,B00111100,B00000000},
{B00000000,B01111110,B00000010,B00000100,B00001000,B00010000,B00010000,B00010000,B00010000,B00000000},
{B00000000,B00111100,B01000010,B01000010,B00111100,B01000010,B01000010,B01000010,B00111100,B00000000},
{B00000000,B00111100,B01000010,B01000010,B01000010,B00111110,B00000010,B00000010,B00111100,B00000000},
{B00000000,B00000000,B01000010,B00100100,B00011000,B00011000,B00100100,B01000010,B00000000,B00000000}};
struct snakes
{
  int x;
  int y;
};

int latchPin = 10;
int clockPin = 13;
int dataPin = 11;
int clck = 9;
int reset = 8;
int upb=4;
int downb=6;
int leftb=7;
int rightb=12;
int x,y;
int foodx,foody;
int score=0;

int latchPinPORTB = latchPin - 8;
int clockPinPORTB = clockPin - 8;
int dataPinPORTB = dataPin - 8;

int i = 0;

long scrolling_word[10];

int array_turn=0;

byte your_text[25][10];
int co=0;
char SM[25];
snakes body[13*11];
int snakex=5,snakey=9;
boolean up=false,down=false,left=false,right=false;
boolean ustate=false,dstate=false,lstate=false,rstate=false;
boolean matrix[12][10];
uint16_t displaymatrix[10];
int len=1;

void setup()
{
  Serial.begin(9600);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(latchPin,OUTPUT);
  pinMode(clck,OUTPUT);
  pinMode(reset,OUTPUT);  
  pinMode(upb,INPUT);
  pinMode(downb,INPUT);
  pinMode(leftb,INPUT);
  pinMode(rightb,INPUT);
  
  digitalWrite(reset,HIGH);
  digitalWrite(reset,LOW);
  randomSeed(analogRead(0));
  //setupSPI();
  
}

void loop()
{
  
  Serial.println("In Loop");
  resetmatrix();
  digitalWrite(reset,HIGH);
  digitalWrite(reset,LOW);
  snakex=5,snakey=9;
  body[0].x=snakex;
  body[0].y=snakey;
  len=1;
  spawnfood();
  
  left=right=up=down=false;
  
  ustate=false,dstate=false,lstate=false,rstate=false;

  Serial.println("Loop 2");
  while (!(up=digitalRead(upb)) && !(down=digitalRead(downb)) && !(left=digitalRead(leftb)) && !(right=digitalRead(rightb)))  
  {
    refreshmatrix();
    disp();
  }
  
  Serial.println("start");
  while (true) 
  {
    refreshmatrix();
    disp();
    
    if (selfeaten()){
      Serial.println("Final Score: ");
       Serial.println(score);
      delay(100);
      game_over();
      //delay(1000);
       score=0;
       break;
    }
    
    ustate=digitalRead(upb);
    dstate=digitalRead(downb);
    lstate=digitalRead(leftb);
    rstate=digitalRead(rightb);

    //Serial.println("Inside");
    if (ustate || dstate || lstate || rstate)
    {
      if ((ustate && !down) || (dstate && !up) || (lstate && !right) || (rstate && !left))
      {
        up=ustate;
        down=dstate;
        left=lstate;
        right=rstate;
      }
    }
    
    snakey+=up;
    snakey-=down;
    snakex+=right;  
    snakex-=left;
  
    snakex=(12+snakex)%12;
    snakey=(10+snakey)%10;
    
    if (snakex==foodx && snakey==foody) 
    {
      score++;
      Serial.println(score);
      spawnfood();
    }
    else  removelast();
    addnew();
    
    resetmatrix();
  }
}

void spawnfood()
{
  do
  {
    foodx=random(12);
    foody=random(10);
  } while (eaten(foodx,foody));
}void game_over(){
 
  SM[0]='S';
  SM[1]='C';
  SM[2]='O';
  SM[3]='R';
  SM[4]='E';
 // SM[5]=' ';
  int i=5;
 
  String myString="";
  myString+=score;
  char te[10];
  itoa(score,te,10);
  Serial.println("String Score: ");
  Serial.println(te);
  int n=score;
  int cx=0;
  while (n)
  {
    n=n/10;
    cx++;
  }
 
  //int n=myString.len();
  for(int j=0;j<cx;j++){
    Serial.println(te[j]);
    SM[i]=te[j];
    i++;
  }
  co=5+cx;
  ParseText();
  delay(100);
  display_word(1,your_text,co,15);
}
void shftOut(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder, uint16_t val)
{
  uint8_t i;

  for (i=0;i<16;i++)
  {
    if (bitOrder==LSBFIRST) digitalWrite(dataPin,!!(val & (1<<i)));
    else  digitalWrite(dataPin,!!(val & (1<<(15-i))));

    digitalWrite(clockPin,HIGH);
    digitalWrite(clockPin,LOW);
  }
}
void display_word(int loops,byte word_print[][10],int num_patterns,int delay_length)
{
  for (int x=0;x<num_patterns;x++)
  {
    for (int z=0;z<12;z++)
    {
      for (int t=0;t<delay_length;t++)
      {
        for (int y=0;y<10;y++)
        {
          byte temp=word_print[x][y];
          byte temp_2=word_print[x+1][y];
          digitalWrite(latchPin,LOW);
          if (x==num_patterns-1)  shftOut(dataPin,clockPin, MSBFIRST,temp<<z);
          else  shftOut(dataPin,clockPin, MSBFIRST,((temp<<z)|(temp_2>>(12-z))));
          digitalWrite(latchPin,HIGH);
          delayMicroseconds(800);
          digitalWrite(latchPin,LOW);
          shftOut(dataPin,clockPin,MSBFIRST,0);
          digitalWrite(latchPin,HIGH);
          digitalWrite(clck,HIGH);
          digitalWrite(clck,LOW);
        }
      }
    }
  }
}

void ParseText(){
  //int j=0;
  for(int i=0;i<co;i++){
    if(SM[i]>='A' && SM[i]<='Z'){
      int x=SM[i]-'A';
      //ind[i]=x;
      for(int j=0;j<10;j++){
        your_text[i][j]=S[x][j];
      }
      
    }
    else if(SM[i]>='a' && SM[i]<='z'){
      int x=26+SM[i]-'a';
      for(int j=0;j<10;j++){
        your_text[i][j]=S[x][j];
      }
    }
    else if(SM[i]==' '){
      int x=52;
      for(int j=0;j<10;j++){
        your_text[i][j]=S[x][j];
      }
    }
    else if(SM[i]>='0' && SM[i]<='9'){
      int x=53+SM[i]-'0';
     for(int j=0;j<10;j++){
        your_text[i][j]=S[x][j];
      }
    }
  }
  
}
boolean eaten(int tx, int ty)
{
  for (int i=0;i<len;i++)
  {
    if (body[i].x==tx && body[i].y==ty) return true;
  }
  return false;
}

boolean selfeaten()
{
  for (int i=0;i<len-1;i++)  
  {
    if (body[i].x==snakex && body[i].y==snakey) return true;
  }
  return false;
}
void resetmatrix()
{
  for (int x=0;x<12;x++)
  {
    for (int y=0;y<10;y++)  
    {
      matrix[x][y]=false;
      displaymatrix[y]=0;
    }
  }
}

void refreshmatrix()
{
  int i=0;
  
  for (;i<len;i++) matrix[body[i].x][body[i].y]=true;
  
  matrix[foodx][foody]=true;
}


void disp()
{
  //digitalWrite(reset,HIGH);
  //digitalWrite(reset,LOW);
  for (int i=0;i<12;i++)  
  {
    for (int j=0;j<10;j++)  
    {
      if (matrix[i][j])
      displaymatrix[j]|=(1<<i);
    }
  }
  
  for (int j=0;j<25;j++)
  {
    for (int i=0;i<10;i++)
    {
      digitalWrite(latchPin,LOW);
      shftOut(dataPin,clockPin,MSBFIRST,displaymatrix[i]);
      digitalWrite(latchPin,HIGH);
  
      delayMicroseconds(10);
  
      digitalWrite(latchPin,LOW);
      shftOut(dataPin,clockPin,MSBFIRST,0);
      digitalWrite(latchPin,HIGH);
      
      digitalWrite(clck,HIGH);
      digitalWrite(clck,LOW);
    }
  }
}

void addnew()
{
  body[len].y=snakey;
  body[len].x=snakex;
  
  len++;
}

void removelast()
{
  int i=-1;
  
  for (i=1;i<len;i++)  
  {
    body[i-1].x=body[i].x;
    body[i-1].y=body[i].y;
  }

  len--;
}

/*
1
0
 0 1
*/

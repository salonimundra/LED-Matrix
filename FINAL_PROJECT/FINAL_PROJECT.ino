
int8_t answer,ans;
int counter,flag=0,co;
long previous;
char aux_str[100],Basic_str[100],SMS[100],SM[50];

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

int latchPin = 10;

int clockPin = 13;

int dataPin = 11;

int clock = 9;

int Reset = 8;

int latchPinPORTB = latchPin - 8;

int clockPinPORTB = clockPin - 8;

int dataPinPORTB = dataPin - 8;

int i = 0;

long scrolling_word[50];

int array_turn=0;


byte your_text[50][10];
//int ind[200];



void setup(){

  //Serial.begin(9600);

  
//pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);   
  Serial.println("Starting...");
  power_on();
  
  while (sendATcommand("AT+CREG?", "+CREG: 0,1", 2000) == 0);
    sendATcommand("AT+CMGF=1", "OK", 20000);
    
    for(int i=1;i<5;i++)
    {
      snprintf(aux_str, sizeof(aux_str), "AT+CMGD=%d",i);
      sendATcommand(aux_str, "OK", 2000);
    }

    
    pinMode(dataPin,OUTPUT);

  pinMode(clockPin,OUTPUT);

  pinMode(latchPin,OUTPUT);

  pinMode(clock,OUTPUT);

  pinMode(Reset,OUTPUT);

  digitalWrite(Reset,HIGH);

  digitalWrite(Reset,LOW);
  setupSPI();

}

 void loop() {
        while( Serial.available() > 0) 
      Serial.read();    
        memset(SM, '\0', 50);
    delay(100);
    snprintf(aux_str, sizeof(aux_str), "AT+CMGR=1");
          ans=sendATcommand(aux_str, "+CMGR", 2000);
          co=0;
          counter = 0;
          answer = 0;
          memset(SMS, '\0', 100); 
          memset(SM, '\0', 50);// Initialize the string
          previous = millis();
  
          if(ans==1)
          {
            do
            {
                    if(Serial.available() != 0)
                    {    
                          SMS[counter] = Serial.read();
                          counter++;
                      if(strstr(SMS, "OK") != NULL)    
                              answer = 1;
                    }
                }while((answer == 0) && ((millis() - previous) < 2000));    
        
                SMS[counter-3] = '\0';  
                for(int i=1;i<5;i++)
                {
                    snprintf(aux_str, sizeof(aux_str), "AT+CMGD=%d",i);
                    sendATcommand(aux_str, "OK", 2000);
                }
        }
        
        //if (SMS[0]=='=') memset(SMS, '\0', 100);
        int cnt=0;
        int index=0;
        while (index<100 && cnt<2)
        {
          if (SMS[index]=='\n') cnt++;
          index++;
        }
        //SM=SMS+index;
        Serial.print(SMS+index);
        //int j=0;
        for(int i=index;SMS[i]!='\0';i++){
        SM[co]=SMS[i];
        co++;
        }
        Serial.println("Print message: ");
        for(int i=0;i<co;i++)
        Serial.print(SM[i]);
        Serial.println();

  delay(100);
        
       
       if(co!=0){
       ParseText();
        delay(1000);
        for(int i=0;i<3;i++)
      display_word(1,your_text,co,15);// calls for the display_pattern function and says that int loop = 15(if you do more loop the pattern whould scrole slower).
        memset(SM, '\0', 50);
        //delay(100);
        co=0;
       }
       delay(100);
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
/*void Convert(){
  for(int i=0;i<counter;i++){
    your_text
  }
}*/

void display_word(int loops,byte word_print[][10],int num_patterns,int delay_langth){// this function displays your symbols

  i = 0;// resets the counter fot the 4017

  for(int g=0;g<10;g++)//resets the the long int where your word goes

    scrolling_word[g] = 0;

  for(int x=0;x<num_patterns;x++){//main loop, goes over your symbols


   for(int r=0;r<10;r++)//puts the buildes the first symbol

      scrolling_word[r] |= word_print[x][r]; 

    for (int z=0;z<10;z++){//the sctolling action

        for(int p=0;p<10;p++)

          scrolling_word[p] = scrolling_word[p] << 1;

// end of the scrolling funcion

      for(int t=0;t<delay_langth;t++){// delay function, it just loops over the same display

        for(int y=0;y<10;y++){// scaning the display

          if(i == 10){// counting up to 6 with the 4017

            digitalWrite(Reset,HIGH);

            digitalWrite(Reset,LOW);

            i = 0;

          }

          latchOff();

          spi_transfer(make_word(0x01000000,y));// sending the data

          spi_transfer(make_word(0x00010000,y));

          spi_transfer(make_word(0x00000100,y));

          latchOn();

          delayMicroseconds(800);//waiting a bit

          latchOff();

          spi_transfer(0);// clearing the data

          spi_transfer(0);

          spi_transfer(0);

          latchOn();

          digitalWrite(clock,HIGH);//counting up with the 4017

          digitalWrite(clock,LOW);

          i++;

        }

      }

    }

  }

  finish_scroll(delay_langth);

}



void finish_scroll(int delay_scroll){// this function is the same as the funcion above, it just finishing scrolling

  for (int n=0;n<12;n++){

        for(int h=0;h<10;h++)

          scrolling_word[h] = scrolling_word[h] << 1;

      for(int w=0;w<delay_scroll;w++){

        for(int k=0;k<10;k++){

          if(i == 10){

            digitalWrite(Reset,HIGH);

            digitalWrite(Reset,LOW);

            i = 0;

          }

          latchOff();

          spi_transfer(make_word(0x01000000,k));

          spi_transfer(make_word(0x00010000,k));

          spi_transfer(make_word(0x00000100,k));

          latchOn();

          delayMicroseconds(800);

          latchOff();

          spi_transfer(0);

          spi_transfer(0);

          spi_transfer(0);

          latchOn();

          digitalWrite(clock,HIGH);

          digitalWrite(clock,LOW);

          i++;

        }

      }

    }

}



byte make_word (long posistion,byte turn){

  byte dummy_word = 0;

  for(int q=0;q<8;q++){

    if(scrolling_word[turn] & (posistion<<q))

      dummy_word |= 0x01<<q;

  }

  return dummy_word;

}   





 

  

  



void latchOn(){

  bitSet(PORTB,latchPinPORTB);

}



void latchOff(){

  bitClear(PORTB,latchPinPORTB);

}





void setupSPI(){

  byte clr;

  SPCR |= ( (1<<SPE) | (1<<MSTR) ); // enable SPI as master

  //SPCR |= ( (1<<SPR1) | (1<<SPR0) ); // set prescaler bits

  SPCR &= ~( (1<<SPR1) | (1<<SPR0) ); // clear prescaler bits

  clr=SPSR; // clear SPI status reg

  clr=SPDR; // clear SPI data reg

  SPSR |= (1<<SPI2X); // set prescaler bits

  //SPSR &= ~(1<<SPI2X); // clear prescaler bits



  delay(40);

}

byte spi_transfer(byte data)

{

  SPDR = data;        // Start the transmission

  while (!(SPSR & (1<<SPIF)))     // Wait the end of the transmission

  {

  };

  return SPDR;        // return the received byte, we don't need that

}
void power_on()
{
  uint8_t answer=0;
  answer = sendATcommand("AT", "OK", 2000);
  if (answer == 0)
  {
    while(answer == 0)
      answer = sendATcommand("AT", "OK", 2000);    
  }
}

int8_t sendATcommand(const char* ATcommand, const char* expected_answer, unsigned int timeout)
{
  uint8_t x=0,  answer=0;
  char response[100];
  unsigned long previous;
  memset(response, '\0', 100);    // Initialize the string
  delay(100);
  while( Serial.available() > 0) 
        Serial.read();    // Clean the input buffer

  Serial.println(ATcommand);    // Send the AT command 

  x = 0;
  previous = millis();

      do
  {
          if(Serial.available() != 0)
    {    
                response[x] = Serial.read();
                x++;
                // check if the desired answer  is in the response of the module
                if (strstr(response, expected_answer) != NULL)    
                        answer = 1;
          }
        } while((answer == 0) && ((millis() - previous) < timeout));    

  return answer;
}









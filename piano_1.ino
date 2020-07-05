int but1 = 2;
int but2 = 3;
int but3 = 4;
int but4 = 5;
int but5 = 6;
int but6 = 7;
int but7 = 8;
int but8 = 9;
int but9 = 10;
int but10 = 11;

int buzzer = 13;

 void setup()
{
  //button pins as input
  pinMode(but1,INPUT);
  pinMode(but2,INPUT);
  pinMode(but3,INPUT);
  pinMode(but4,INPUT);
  pinMode(but5,INPUT);
  pinMode(but6,INPUT);
  pinMode(but7,INPUT);
  pinMode(but8,INPUT);
  pinMode(but9,INPUT);
  pinMode(but10,INPUT);
  //buzzer pin as output
  pinMode(buzzer,OUTPUT);
  
}

void loop()
{
   //read the value from buttons
  int b1 = digitalRead(but1);
  int b2 = digitalRead(but2);
  int b3 = digitalRead(but3);
  int b4 = digitalRead(but4);
  int b5 = digitalRead(but5);
  int b6 = digitalRead(but6);
  int b7 = digitalRead(but7);
  int b8 = digitalRead(but8);
  int b9 = digitalRead(but9);
  int b10 = digitalRead(but10);
  
  if( b1 == 1 ){
     tone(buzzer,100,20);
  }
    if( b2 == 1 ){
     tone(buzzer,200,50);
  }
    if( b3 == 1 ){
     tone(buzzer,300,100);
  }
    if( b4 == 1 ){
     tone(buzzer,400,100);
  }
    if( b5 == 1 ){
     tone(buzzer,500,100);
  }
    if( b6 == 1 ){
     tone(buzzer,600,100);
  }
    if( b7 == 1 ){
     tone(buzzer,700,100);
  }
    if( b8 == 1 ){
     tone(buzzer,800,100);
  }
    if( b9 == 1 ){
     tone(buzzer,900,100);
  }
    if( b10 == 1 ){
     tone(buzzer,1000,100);
  }
  

  delay(10);
}
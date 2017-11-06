//#include "LiquidCrystal.h"
//CS 362 Taylor Lab 7
//Rohit Padmarao and Heng Li
//rpadma4 and hli212


//const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
//LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int led = 11, button = 8;
int buttonVal, buttonCnt;

void setup() {
  // put your setup code here, to run once:
  //lcd.begin(16,2);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
  buttonCnt = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal = digitalRead(button);
  if(buttonVal == HIGH) {
    buttonCnt++;
    delay(250);
  }

  Serial.write(buttonCnt);
  while(Serial.available()>0){
    if(Serial.read()%2 == 0){
      digitalWrite(led, LOW);
    }
    else {
      digitalWrite(led, HIGH);
    }
  }
}

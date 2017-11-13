//Heng Li
//hli212

// include the library code:
#include <LiquidCrystal.h>


LiquidCrystal lcd(12,11,7,6,5,4);
int interruptPin = 3;
int comeback = 2;
int count = 0;
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(interruptPin,INPUT_PULLUP);
  pinMode(comeback,INPUT);
  attachInterrupt(digitalPinToInterrupt(3),start_again,CHANGE);
  attachInterrupt(digitalPinToInterrupt(2),stop_setTo0,CHANGE);
  
}
int button_val = 0;
int first = 0;
void loop()
{
  if(button_val != 1)
  {
  lcd.setCursor(0,0);
  lcd.print("We have been wai");
  lcd.setCursor(0,1);
  lcd.print("ting ");
  lcd.setCursor(6,1);
  lcd.print(count);
  lcd.setCursor(9,1);
  if(first == 0)
  {
    button_val = digitalRead(comeback);
    first = 1;
  }
  else
  {
    if(button_val)
    {
  
      lcd.print("Seconds");
    }
  }
  
   //lcd.print(count);
   count++;
  }
  else
  {
    lcd.setCursor(0,0);
    lcd.print("Interrupting");
  }
  delay(1000);
  lcd.clear();

}

void stop_setTo0()
{
  lcd.clear();
  count = 0;
  button_val = 1;
}

void start_again()
{
  button_val = 0;
}




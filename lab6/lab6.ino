//Heng Li
//hli212

// include the library code:
#include <Time.h>
#include <TimeLib.h>
#include <LiquidCrystal.h>


LiquidCrystal lcd(12,11,5,4,3,2);
int firstTime = 0;
int input_month;
int input_day;
int input_year;
int input_hour;
int input_min;
int input_sec;
int correct_date =1;
int correct_time = 1;
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  Serial.begin(9600);
    int clear_buffer;
      Serial.println("Enter mm/dd/yyyy:");
      while(Serial.available() == 0){}
      input_month = Serial.parseInt();
      input_day = Serial.parseInt();
      input_year = Serial.parseInt();

      if(!(input_month >= 1 && input_month <= 12) && correct_date == 1)
      {
        correct_date = 0;
        Serial.println("Month is wrong");
        Serial.println(input_month);
      }
      else if(!(input_day >0 && input_day <= 31 ) && correct_date == 1)
      {
        correct_date = 0;
        Serial.println("Day is wrong");
      }

      while(Serial.available())
      {
        clear_buffer = Serial.parseInt();
      }

      Serial.println("Enter hh/mm/ss:");
      while(Serial.available() == 0){}
      input_hour = Serial.parseInt();
      input_min = Serial.parseInt();
      input_sec = Serial.parseInt();
      if(!(input_hour >= 1 && input_hour< 24) && correct_time == 1)
      {
        correct_time = 0;
        Serial.println("Hour is wrong");
        Serial.println(input_hour);
      }
      else if(!(input_min >= 0 && input_min <= 59)  && correct_time == 1)
      {
        correct_time = 0;
        Serial.println("Min is wrong");
      }
      else if(!(input_sec >= 0 && input_sec <= 59)  && correct_time == 1)
      {
        correct_time = 0;
        Serial.println("Sec is wrong");
      }
      if(correct_time == 1 && correct_date == 1)
      {
       setTime(input_hour,input_min,input_sec,input_day,input_month,input_year);
      }

      
  
}

void loop()
{
  // when wrong time won't display anything
    if(correct_time == 0 || correct_date == 0)
    {
      return;
    }
    lcd.setCursor(0,0);
    lcd.print("Date: ");
    lcd.setCursor(6,0);
    lcd.print( month());
    lcd.setCursor(8,0);
    lcd.print("/");
    lcd.setCursor(9,0);
    lcd.print( day());
    lcd.setCursor(11,0);
    lcd.print("/");
    lcd.setCursor(12,0);
    lcd.print( year());
  
    lcd.setCursor(0,1);
    lcd.print("Time: ");
    lcd.setCursor(6,1);
    lcd.print( hour());
    lcd.setCursor(8,1);
    lcd.print("/");
    lcd.setCursor(9,1);
    lcd.print( minute());
    lcd.setCursor(11,1);
    lcd.print("/");
    lcd.setCursor(12,1);
    lcd.print( second());

  // delay at the end of the full loop:
  delay(1000);
  lcd.clear();
  


}
`


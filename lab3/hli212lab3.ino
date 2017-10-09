//Heng Li
//hli212

// include the library code:
#include <LiquidCrystal.h>


LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  
}

void loop()
{
  // scroll 13 positions (string length) to the left
  // to move it offscreen left:
  
  String quote = "abcdefghijklmnopqrstuvwx";
  int n = quote.length();
  /*
  for (int positionCounter = 31; positionCounter >= 0; positionCounter--) {
    // scroll one position left:
    lcd.setCursor(0,0);
    lcd.print("Heng Li");
    
    lcd.setCursor(positionCounter,1);
    lcd.print(quote);
    String quote2 = &quote[n -1- positionCounter];
    lcd.setCursor(0,1);
    lcd.print(quote2);
    delay(500);
    lcd.clear();
    // wait a bit:
    
  }
  */

  for(int i = 15; i >= 0;i--)
  {
    lcd.setCursor(0,0);
    lcd.print("Heng Li");
    
    lcd.setCursor(i,1);
    lcd.print(quote);
    delay(200);
    lcd.clear();
  }

  for(int i = 1 ; i < n; i++)
  {
    lcd.setCursor(0,0);
    lcd.print("Heng Li");
    
    String quote1 = &quote[i];
    lcd.setCursor(0,1);
    lcd.print(quote1);
    delay(200);
    lcd.clear();
  }

  // delay at the end of the full loop:
  //delay(1000);


}





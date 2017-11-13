
#include <Wire.h>
#include "SSD1306.h"


SSD1306 display(0x3c, D3, D5);


void setup() 
{
  // put your setup code here, to run once:
  dislay.init();
  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_16);
  display.setTextAlignment(TEXT_ALIGN_LEFT);

}

void loop() {
  // put your main code here, to run repeatedly:
  display.clear();
  display.drawString(0,16,"Hello, World!");
  display.display();
  delay(3000);

}

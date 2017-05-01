
#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
  Serial.begin(9600);
  lcd.begin(20, 2);
  lcd.cursor();

}

void loop() 
{
  char s;
  if(Serial.available())
 {
   lcd.clear();
   delay(100);
  while(Serial.available())
      {
         s = Serial.read();
        lcd.print(s);
  
      }
  
 }

}


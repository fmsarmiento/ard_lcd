#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	// initialize the LCD
	lcd.begin();

	// Turn on the blacklight and print a message.
	lcd.backlight();
	lcd.print("c=====3");
  delay(2000);
  lcd.clear(); // clears LCD
  lcd.print("Tite");
  lcd.clear();
  int i = 0;
  String output = "moving tite";
  for (int i = 0; i<=10 ; i++) {
    lcd.print(output);
    delay(1000);
    output = " "+output;
    lcd.clear();
  }
  lcd.print("Tanginamo rap");
  delay(2000);
  lcd.clear();
}

void loop()
{
	// Do nothing here...
}

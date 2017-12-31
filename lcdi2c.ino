#include <LiquidCrystal_I2C.h>
// Set the LCD address to 0x27 for a 16 chars and 2 line display 0x3F
LiquidCrystal_I2C lcd(0x3F, 16, 2);

//display pin 
//SCL Pin for nano v3 A4
//SDA Pin for nano v3 A5
//SCL Pin for Uno R3 
//SDA Pin for Uno R3 
//SCL Pin for Lely Pad v3 A4
//SDA Pin for Lely Pad v3 A5

void setup()
{
  // initialize the LCD
  lcd.begin();
  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.print("Hi! IoTwebplanet.com");
  Serial.begin(9600); //Begin serial communication

}
void loop()
{
lcd.clear();
lcd.print("HAPPY NEW YEAR");
delay(1000);
lcd.clear();  
lcd.print("HAPPY BDY TO YOU");
delay(1000);
lcd.clear();  
}

#include <LiquidCrystal_I2C.h>
#include <Button.h>

/*
 * Button Library required to download
 * https://github.com/tigoe/Button
 * I2C Library required
 * https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library.git 
 * 
 */

// Set the LCD address to 0x27 for a 16 chars and 2 line display 0x3F
LiquidCrystal_I2C lcd(0x3F, 16, 2);

//I2C LCD connection
//SCL Pin for nano v3 A4
//SCL Pin for nano v3 A5

//SCL Pin for Uno R3 
//SCL Pin for nano R3 

//Male button on   pin 2   and GND
//female button on pin 3   and GND
//

Button female = Button(3,BUTTON_PULLUP_INTERNAL);
Button male = Button(2,BUTTON_PULLUP_INTERNAL);
void setup()
{
	// initialize the LCD
	lcd.begin();
  
	// Turn on the blacklight and print a message.
	lcd.backlight();
	lcd.print("Hi! IoTwebplanet.com");
}

void loop()
{
	
 
 if(male.isPressed()){
         lcd.clear();
        lcd.print("Hello, Male!");
        delay(1000);
  }

  if(female.isPressed()){
         lcd.clear();
        lcd.print("Hello, FeMale!");
        delay(1000);
  }
  
  

}

 int read;
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(39, 16, 2);
void setup() {
  pinMode(A0, INPUT);
lcd.init(); 
lcd.backlight();
lcd.print("loading force ....");
  delay(1000);
  lcd.clear();
}


void loop()
{
  read = analogRead(A0);
lcd.print("reading =");
lcd.setCursor(10,0);
lcd.print(read);
lcd.print("     ");
}
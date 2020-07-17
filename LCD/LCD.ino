#include <LiquidCrystal.h>
//#include "AnalogToDigit.h"

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Vol odczytane");
  lcd.setCursor(0, 1);
  lcd.print("0.00V");
  
  //lcd.blink(); // prostokatny, migajacy kursor
}

double reading;

void loop() {
  reading = analogRead(A0) * 5.0 / 1024.0;
  lcd.setCursor(0, 1);
  lcd.print(reading);
  delay(250);

  
  /* Kursory i wyswietlanie i gaszenie wyswietlacza
  lcd.noDisplay();
  delay(500);

  lcd.display();
  delay(500);
  */

  
  /*
  lcd.noCursor();
  delay(250);
  lcd.cursor();
  delay(250);
  */
}

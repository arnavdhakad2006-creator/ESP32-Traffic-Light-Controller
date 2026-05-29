#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define RED 15
#define YELLOW 2
#define GREEN 4

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {

  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  lcd.init();
  lcd.backlight();
}

void loop() {

  // RED SIGNAL
  digitalWrite(RED, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);

  for(int i = 5; i >= 1; i--) {

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("SIGNAL: RED");

    lcd.setCursor(0,1);
    lcd.print("TIME: ");
    lcd.print(i);

    delay(1000);
  }

  // YELLOW SIGNAL
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(GREEN, LOW);

  for(int i = 2; i >= 1; i--) {

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("SIGNAL:YELLOW");

    lcd.setCursor(0,1);
    lcd.print("TIME: ");
    lcd.print(i);

    delay(1000);
  }

  // GREEN SIGNAL
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);

  for(int i = 5; i >= 1; i--) {

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("SIGNAL:GREEN");

    lcd.setCursor(0,1);
    lcd.print("TIME: ");
    lcd.print(i);

    delay(1000);
  }
}
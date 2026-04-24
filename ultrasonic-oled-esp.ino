#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

#define TRIG D5
#define ECHO D6

U8G2_SH1106_128X64_NONAME_F_HW_I2C display(U8G2_R0, U8X8_PIN_NONE);

long duration;
float distance;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  display.begin();
  display.setFont(u8g2_font_logisoso16_tf);
}

void loop() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH);

  distance = duration * 0.034 / 2;

  display.clearBuffer();
  
  display.setCursor(0, 25);
  display.print("Jarak:");

  display.setCursor(0, 55);
  display.print(distance);
  display.print(" cm");

  display.sendBuffer();

  delay(500);
}

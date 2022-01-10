/* Use at your own risk.
   I am not accepting responsibility for anything.
   Copyright Ron Lyttle 2021.
   I have to copyright because of some of the World's fools.
   But I don't have to charge you for use/distribution.
   If you modify it, put it under your own name then.
   Read the readme.txt for hints on how to set up screens.
   This .ino is for the TMS/DMS/CMS/RdrCur Switches.
*/

#include <Keyboard.h>

int row1 = 6;
int row2 = 7;
int row3 = 8;
int row4 = 9;
int col1 = 5;
int col2 = 4;
int col3 = 3;
int col4 = 2;
int buttonrepeattime = 250;
unsigned long time1 = 0;
unsigned long time2 = 0;
unsigned long time3 = 0;
unsigned long time4 = 0;
unsigned long time5 = 0;
unsigned long time6 = 0;
unsigned long time7 = 0;
unsigned long time8 = 0;
unsigned long time9 = 0;
unsigned long time10 = 0;
unsigned long time11 = 0;
unsigned long time12 = 0;
unsigned long time13 = 0;
unsigned long time14 = 0;
unsigned long time15 = 0;
unsigned long time16 = 0;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  Keyboard.begin();
}

void loop()
{
  digitalWrite(col1, LOW);
  if (digitalRead (row1) == LOW && millis() - time1 > buttonrepeattime)
  {
    time1 = millis();
    Keyboard.press (133);
    Keyboard.press (216);
    delay(20);
    Keyboard.releaseAll();
    delay(300);
    Keyboard.press (133);
    Keyboard.press (164);
    delay(20);
    Keyboard.releaseAll();
  }
  if (digitalRead (row2) == LOW && millis() - time2 > buttonrepeattime)
  {
    time2 = millis();
    Keyboard.press (134);
    Keyboard.press (212);
    delay(20);
    Keyboard.releaseAll();
  }
  if (digitalRead (row3) == LOW && millis() - time3 > buttonrepeattime)
  {
    time3 = millis();
    Keyboard.press (132);
    Keyboard.press (212);
    delay(20);
    Keyboard.releaseAll();
  }
  if (digitalRead (row4) == LOW && millis() - time4 > buttonrepeattime)
  {
    time4 = millis();
    Keyboard.press (133);
    Keyboard.press (212);
    delay(20);
    Keyboard.releaseAll();
  }
  digitalWrite(col1, HIGH);

  digitalWrite(col2, LOW);
  if (digitalRead (row1) == LOW && millis() - time5 > buttonrepeattime)
  {
    time5 = millis();
    Keyboard.press (133);
    Keyboard.press (218);
    delay(20);
    Keyboard.releaseAll();
    delay(300);
    Keyboard.press (133);
    Keyboard.press (164);
    delay(20);
    Keyboard.releaseAll();
  }
  if (digitalRead (row2) == LOW && millis() - time6 > buttonrepeattime)
  {
    time6 = millis();
    Keyboard.press (134);
    Keyboard.press (210);
    delay(20);
    Keyboard.releaseAll();
  }
  if (digitalRead (row3) == LOW && millis() - time7 > buttonrepeattime)
  {
    time7 = millis();
    Keyboard.press (132);
    Keyboard.press (210);
    delay(20);
    Keyboard.releaseAll();
  }
  if (digitalRead (row4) == LOW && millis() - time8 > buttonrepeattime)
  {
    time8 = millis();
    Keyboard.press (133);
    Keyboard.press (210);
    delay(20);
    Keyboard.releaseAll();
  }
  digitalWrite(col2, HIGH);

  digitalWrite(col3, LOW);
  if (digitalRead (row1) == LOW && millis() - time9 > buttonrepeattime)
  {
    time9 = millis();
    Keyboard.press (133);
    Keyboard.press (217);
    delay(20);
    Keyboard.releaseAll();
    delay(300);
    Keyboard.press (133);
    Keyboard.press (164);
    delay(20);
    Keyboard.releaseAll();
  }
  if (digitalRead (row2) == LOW && millis() - time10 > buttonrepeattime)
  {
    time10 = millis();
    Keyboard.press (134);
    Keyboard.press (213);
    delay(20);
    Keyboard.releaseAll();
  }
  if (digitalRead (row3) == LOW && millis() - time11 > buttonrepeattime)
  {
    time11 = millis();
    Keyboard.press (132);
    Keyboard.press (213);
    delay(20);
    Keyboard.releaseAll();
  }
  if (digitalRead (row4) == LOW && millis() - time12 > buttonrepeattime)
  {
    time12 = millis();
    Keyboard.press (129);
    Keyboard.press (213);
    delay(20);
    Keyboard.releaseAll();
  }
  digitalWrite(col3, HIGH);

  digitalWrite(col4, LOW);
  if (digitalRead (row1) == LOW && millis() - time13 > buttonrepeattime)
  {
    time13 = millis();
    Keyboard.press (133);
    Keyboard.press (215);
    delay(20);
    Keyboard.releaseAll();
    delay(300);
    Keyboard.press (133);
    Keyboard.press (164);
    delay(20);
    Keyboard.releaseAll();
  }
  if (digitalRead (row2) == LOW && millis() - time14 > buttonrepeattime)
  {
    time14 = millis();
    Keyboard.press (134);
    Keyboard.press (214);
    delay(20);
    Keyboard.releaseAll();
  }
  if (digitalRead (row3) == LOW && millis() - time15 > buttonrepeattime)
  {
    time15 = millis();
    Keyboard.press (132);
    Keyboard.press (214);
    delay(20);
    Keyboard.releaseAll();
  }
  if (digitalRead (row4) == LOW && millis() - time16 > buttonrepeattime)
  {
    time16 = millis();
    Keyboard.press (133);
    Keyboard.press (214);
    delay(20);
    Keyboard.releaseAll();
  }
  digitalWrite(col4, HIGH);
}


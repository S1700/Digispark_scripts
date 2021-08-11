#include <DigiKeyboard.h>
const int delayKey = 300;
const int delayLong = 3000;

void setup() {
  pinMode(1, OUTPUT);

  //Win + D
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  delay(delayKey);

  //Win + R
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  delay(delayKey);

  DigiKeyboard.println("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(delayKey);

  DigiKeyboard.println("@echo off");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(delayKey);

  DigiKeyboard.println("cls");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.sendKeyStroke(KEY_F11);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(delayKey);

  Writing("  COMPUTER ACCESS SUCCESS!");
  delay(delayLong);
  Writing("  VIEWING FILES...");
  delay(delayLong);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.println("cls");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(delayKey);

  DigiKeyboard.println("tree");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(delayLong);

  DigiKeyboard.sendKeyStroke(KEY_C, MOD_CONTROL_LEFT);
  delay(delayKey);

  DigiKeyboard.println("cls");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(delayKey);

  Writing("  BEWARE OF UNKNOWN USB DEVICES!");
  delay(delayLong);
  Writing("  PC TAKEOVER SUCCESS");
  delay(delayLong);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.println("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(delayKey);

  DigiKeyboard.sendKeyStroke(KEY_L, MOD_GUI_LEFT);

  digitalWrite(1, HIGH);
}

void loop() {
}

void Writing(String txt) {
  int len = txt.length();
  for (int i = 0; i < len; i++) {
    DigiKeyboard.print(txt.substring(i, i + 1));
    delay(35);
  }
}
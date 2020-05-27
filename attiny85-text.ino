//This DigiKeyboard Script will print a specified text
//Work with Windows XP(?)/Vista(?)/7/8/8.1/10 etc.

#include "DigiKeyboard.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboard.delay(500);
  DigiKeyboard.print("text");
  //DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}

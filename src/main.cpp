#include <Arduino.h>
#include <Keyboard.h>

void setup() {

// TODO determine the OS

  Keyboard.begin();
  delay(1000);
  Keyboard.press(CTRL);
  Keyboard.press(LEFT_ALT);
  Keyboard.press('t');


  // Keyboard.begin();
  // delay(1000);
  // Keyboard.press(KEY_LEFT_GUI);
  // Keyboard.press('r');
  // Keyboard.releaseAll();
  // delay(150);
  // Keyboard.print("notepad.exe");
  // delay(150);
  // Keyboard.end();
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}
#include <Arduino.h>
#include <Keyboard.h>
#include <iostream>

void setup() {

// TODO determine the OS

  Keyboard.begin();
  delay(1000);
  // delay(1000);
  // Keyboard.press(CTRL);
  // Keyboard.press(LEFT_ALT);
  // Keyboard.press('t');


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
  std::vector<int> vec;
  vec.push_back(7);
  vec.push_back(4);
  vec.push_back(3);
  vec.push_back(8);
  vec.push_back(0);
  for (auto i = 0; i < vec.size(); ++i) {
    Keyboard.press('0' + i);
    delay(500);
    Keyboard.releaseAll();
    delay(500);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
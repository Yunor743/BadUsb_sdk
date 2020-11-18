#include <Arduino.h>
#include <Keyboard.h>
#include <iostream>
#include <string>
#include <vector>

void setup()
{
    // TODO determine the OS
    Serial.begin(9600);
    Keyboard.begin();
    delay(1000);
    std::vector<int> vec;
    vec.push_back(7);
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(8);
    vec.push_back(0);
    delay(2000);
    for (auto i = 0; i < vec.size(); ++i) {
        Serial.println(i);
    }
}

void loop()
{
    // compil // TODO
    // upload // sudo pio run -e leonardo -t upload
    // serial // sudo pio device monitor
}
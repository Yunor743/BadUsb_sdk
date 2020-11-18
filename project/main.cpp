

#include "Arduino.h"
#include "helloworld"

void setup()
{
    Serial.begin(9600);
    Serial.println(helloworld.c_str());
}

void loop()
{
    // Nothing to do
}

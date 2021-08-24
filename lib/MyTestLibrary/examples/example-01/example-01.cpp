#include <Arduino.h>
#include <MyTestLibrary.h>

void setup() {
    Serial.begin(115200);
}

void loop () {
    MyTestFunction2();
    delay(500);
}
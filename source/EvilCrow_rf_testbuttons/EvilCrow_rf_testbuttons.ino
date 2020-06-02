#include <IoAbstraction.h>
#include <IoAbstractionWire.h>
#include <Wire.h>

IoAbstractionRef ioExpander = ioFrom8574(0x23);

int KeyA = 0;
int KeyB = 0;
int KeyC = 0;
int KeyD = 0;

void setup() {
    Serial.begin(9600);
    Wire.begin();
 
  for (int x=0; x<=7; x++) {
  ioDevicePinMode(ioExpander, x, INPUT);
  }
}

void loop() {
    ioDeviceSync(ioExpander);

    KeyA = ioDeviceDigitalRead(ioExpander, 7);
    KeyB = ioDeviceDigitalRead(ioExpander, 6);
    KeyC = ioDeviceDigitalRead(ioExpander, 5);
    KeyD = ioDeviceDigitalRead(ioExpander, 4);

   if (KeyA == HIGH) {
    Serial.println("KEY A pressed");
   } else {
    Serial.println("No pressed");
   }
}

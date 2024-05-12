#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial2.begin(115200, SERIAL_8N1, 44, 43);  //G44->RXD, G43->TXD
  Serial.println("Stamp S3 Loopback Test");
}

void loop() {
  if (Serial.available() > 0) {
    int receivedByte = Serial.read();
    Serial2.write(receivedByte);
  }

  if (Serial2.available() > 0) {
    int receivedByte = Serial2.read();
    Serial.write(receivedByte);
  }
  delay(10);
}
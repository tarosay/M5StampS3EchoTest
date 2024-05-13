#include <Arduino.h>
//EspSoftwareSerial
//Implementation of the Arduino software serial library for the ESP8266 / ESP32 family
#include <SoftwareSerial.h>
#define SOFT_RXD 1
#define SOFT_TXD 3
SoftwareSerial SoftSerial;

void setup() {
  Serial.begin(115200);
  Serial2.begin(115200, SERIAL_8N1, 44, 43);  //G44->RXD, G43->TXD
  pinMode(SOFT_RXD, INPUT);
  pinMode(SOFT_TXD, OUTPUT);
  SoftSerial.begin(9600, SWSERIAL_8N1, SOFT_RXD, SOFT_TXD, false, 256);
  delay(500);
  Serial.println("Stamp S3 Loopback Test");
}

void loop() {
  if (Serial.available() > 0) {
    int receivedByte = Serial.read();
    Serial2.write(receivedByte);
    SoftSerial.write(receivedByte);
  }

  if (Serial2.available() > 0) {
    int receivedByte = Serial2.read();
    Serial.write(receivedByte);
  }

  if (SoftSerial.available() > 0) {
    int receivedByte = SoftSerial.read();
    Serial.write(receivedByte);
  }

  delay(10);
}
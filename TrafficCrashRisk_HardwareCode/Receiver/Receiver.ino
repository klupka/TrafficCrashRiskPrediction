/*
 * Author: Seth Klupka (dyw246).
 * Modified example: File > Examples > Heltec ESP32 Dev-Boards > LoRa > OLED_LoRa_Receiver.
 * Examples require 'Heltec ESP32 Dev-Boards' by Heltec Automation library installed.
 * Receiver code to handle incoming data from transmitter.
 * Programmed to one of the ESP32s.
 */
 
#include "heltec.h"
#include "images.h"

// LoRa frequency band for North America (915)
#define BAND    915E6

String rssi = "RSSI --";
String packSize = "--";
String packet ;

// Logo for boot screen.
void logo(){
  Heltec.display->clear();
  Heltec.display->drawXbm(0,5,logo_width,logo_height,logo_bits);
  Heltec.display->display();
}

// Displays message data to small on-board OLED screen.
void LoRaData(){
  Heltec.display->clear();
  Heltec.display->setTextAlignment(TEXT_ALIGN_LEFT);
  Heltec.display->setFont(ArialMT_Plain_10);
  Heltec.display->drawString(0, 0, "msg: " + packet);  
  Heltec.display->display();
}

// Read data and obtain signal strength.
void cbk(int packetSize) {
  packet ="";
  packSize = String(packetSize,DEC);
  
  // Read data into 'packet'.
  for (int i = 0; i < packetSize; i++) { packet += (char) LoRa.read(); }
  // Get current signal strength.
  rssi = "RSSI " + String(LoRa.packetRssi(), DEC);
  
  LoRaData();
}

// Setup for boot sequence and starting Serial2.
void setup() {
  
  //WIFI Kit series V1 not support Vext control
  Heltec.begin(true /*DisplayEnable Enable*/, true /*Heltec.Heltec.Heltec.LoRa Disable*/, true /*Serial Enable*/, true /*PABOOST Enable*/, BAND /*long BAND*/);
  Serial2.begin(9600);
  Heltec.display->init();
  Heltec.display->flipScreenVertically();  
  Heltec.display->setFont(ArialMT_Plain_10);
  logo();
  delay(1500);
  Heltec.display->clear();
  Heltec.display->drawString(0, 0, "Heltec.LoRa Initial success!");
  Heltec.display->drawString(0, 10, "Wait for incoming data...");
  Heltec.display->display();
  delay(1000);
  LoRa.receive();
}

// Main loop to get data and write to Serial2.
void loop() {
  int packetSize = LoRa.parsePacket();
  // If packet exists, then get data and write it to Serial2 for Arduino Mega 2560 to read.
  if (packetSize) { cbk(packetSize);
  
      // Board reads Serial2
      Serial2.print(packet);
      // Terminating character: '@'.   
      Serial2.print('@');  

      // Unsure if printing to Serial(1) is required.
      Serial.print(packet);
      // Terminating character: '@'.
      Serial.print('@');  
  }
  delay(10);
}

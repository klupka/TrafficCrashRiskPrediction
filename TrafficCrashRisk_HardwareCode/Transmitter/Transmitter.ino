/*
 * Author: Seth Klupka (dyw246).
 * Modified example: File > Examples > Heltec ESP32 Dev-Boards > LoRa > OLED_LoRa_Transmitter.
 * Examples require 'Heltec ESP32 Dev-Boards' by Heltec Automation library installed.
 * Transmitter code to handle incoming data from Raspberry Pi and sending that data to reciever.
 * Programmed to one of the ESP32s.
 */

#include "heltec.h"
#include "images.h"

// LoRa frequency band for North America (915)
#define BAND    915E6

String msg;
unsigned int counter = 0;
String rssi = "RSSI --";
String packSize = "--";
String packet ;

// Logo for boot screen.
void logo()
{
  Heltec.display->clear();
  Heltec.display->drawXbm(0,5,logo_width,logo_height,logo_bits);
  Heltec.display->display();
}

// Setup for boot sequence.
void setup()
{
  Heltec.begin(true, true, true, true, BAND);
  Heltec.display->init();
  Heltec.display->flipScreenVertically();  
  Heltec.display->setFont(ArialMT_Plain_10);
  logo();
  delay(1500);
  Heltec.display->clear();
  Heltec.display->drawString(0, 0, "Heltec.LoRa Initial success!");
  Heltec.display->display();
  delay(1000);
}

// Main loop that reads data in Serial (written from Raspberry Pi).
void loop()
{ 
  Heltec.display->clear();
  Heltec.display->setTextAlignment(TEXT_ALIGN_LEFT);
  Heltec.display->setFont(ArialMT_Plain_10);

  // Read available data in Serial port (from Raspberry Pi).
  readSerialPort();
  
  String OLEDmsg = "msg: " + msg;
  String OLEDcounter = "packet: " + String(counter);

  // If message, then print to on-board OLED screen.
  if(msg != "")
  {
    Heltec.display->drawString(0, 0, OLEDmsg);
  }
  // Else, print "msg: " to on-board OLED screen.
  else
    Heltec.display->drawString(0, 0, "msg: ");

  // Print counter to on-board OLED screen.
  Heltec.display->drawString(0, 50, OLEDcounter);
  // Display everything to on-board OLED screen.
  Heltec.display->display();
  
  LoRa.beginPacket();
  LoRa.setTxPower(20,RF_PACONFIG_PASELECT_PABOOST); 

  // Message sent to reciever.
  LoRa.print(msg);
  LoRa.endPacket();
  counter++;
  
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);  
}

// Read data in Serial port (from Raspberry Pi).
void readSerialPort() {
  if (Serial.available()) {
    msg = "";
    delay(10);
    // While data > 0 bytes, read data.
    while (Serial.available() > 0) {
      msg += (char)Serial.read();
    }
    Serial.flush();
   }
}

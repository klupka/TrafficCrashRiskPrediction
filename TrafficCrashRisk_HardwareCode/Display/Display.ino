/*
 * Modified exmple code from RGB matrix Panel > testshapes_32x64
 * Code for the RGB matrix panel.
 */
 
#include <RGBmatrixPanel.h>
#define CLK 11 // CLK was changed for compatibility with Arduino Mega 2560.
#define OE   9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3
RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false, 64);

size_t bytesReceived;
char messageBuffer[64];
bool messagedReceived;

void setup() {
  /*
   * Start both serial ports.                            
   */
  matrix.begin();
  Serial.begin(9600);
  Serial1.begin(9600);
  bool messagedReceived = false;
  matrix.setCursor(0, 0);    // next line
  matrix.setTextColor(matrix.Color333(7,7,7));
}

void loop()
{
  bytesReceived = Serial1.readBytesUntil('@', messageBuffer, 62);
  /*
   * If messaged recieved print message data.
   */
  if(bytesReceived > 0)
  {
    matrix.setTextColor(matrix.Color333(7,7,7));
    //Serial.print("messaged received: ");
    Serial.println(messageBuffer); 
    matrix.print(messageBuffer);

    delay(1800);
    matrix.fillRect(0, 0, matrix.width(), matrix.height(), matrix.Color333(0, 0, 0));
    matrix.setCursor(0, 0); 
  }
  /*
   * If no message recieved print "No data".
   */
  if(!bytesReceived)
  {
    matrix.setTextColor(matrix.Color333(7,0,0));
    matrix.print("No data");
    delay(1800);
    matrix.fillRect(0, 0, matrix.width(), matrix.height(), matrix.Color333(0, 0, 0));
    matrix.setCursor(0, 0); 
  }
 } 

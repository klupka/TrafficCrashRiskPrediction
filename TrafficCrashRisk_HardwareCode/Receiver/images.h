/*
 * Unmodified header file included in example.
 * Required for Receiver.ino
 */
#define logo_width 128
#define logo_height 53
const unsigned char logo_bits[] = {
   0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0xF0, 0x03, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xC0, 0x07, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x0F, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x1F, 0xF0, 0x1F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xE0, 0x1F, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xE0, 0x3F, 0xF8, 0x3F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x1F, 0xF8, 0x3F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xE0, 0x1F, 0xF8, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xF0, 0x1F, 0xF8, 0x1F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x1F, 0xFC, 0x1F, 
  0x80, 0xFF, 0x8F, 0x7F, 0xC0, 0xFF, 0x7F, 0xC0, 0xFF, 0x03, 0xC0, 0x3F, 
  0xF0, 0x1F, 0xFC, 0x1F, 0xE0, 0xFF, 0x87, 0x3F, 0xC0, 0xFF, 0x7F, 0xF0, 
  0xFF, 0x01, 0xF8, 0xFF, 0xF0, 0x0F, 0xFC, 0x1F, 0xE0, 0xFF, 0x87, 0x3F, 
  0xE0, 0xFF, 0x7F, 0xF8, 0xFF, 0x01, 0xFE, 0xFF, 0xF8, 0x0F, 0xFE, 0x0F, 
  0xF0, 0xFF, 0x87, 0x3F, 0xE0, 0xFF, 0x7F, 0xFC, 0xFF, 0x01, 0xFF, 0xFF, 
  0xF8, 0xFF, 0xFF, 0x0F, 0xF0, 0xFF, 0xC7, 0x3F, 0xE0, 0xFF, 0x3F, 0xFC, 
  0xFF, 0x81, 0xFF, 0xFF, 0xF8, 0xFF, 0xFF, 0x0F, 0xF0, 0xFF, 0xC3, 0x1F, 
  0xE0, 0xFF, 0x3F, 0xFC, 0xFF, 0xC0, 0xFF, 0x7F, 0xFC, 0xFF, 0xFF, 0x0F, 
  0xF8, 0xFF, 0xC3, 0x1F, 0xE0, 0xFF, 0x3F, 0xFC, 0xFF, 0xE0, 0xFF, 0x7F, 
  0xFC, 0xFF, 0xFF, 0x07, 0xF8, 0x03, 0xC0, 0x1F, 0x00, 0xFE, 0x01, 0xFE, 
  0x00, 0xF0, 0x3F, 0x70, 0xFC, 0xFF, 0xFF, 0x07, 0xF8, 0x03, 0xE0, 0x0F, 
  0x00, 0xFE, 0x00, 0xFE, 0x00, 0xF0, 0x1F, 0x60, 0xFC, 0xFF, 0xFF, 0x07, 
  0xF8, 0x03, 0xE0, 0x0F, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xF0, 0x07, 0x20, 
  0xFE, 0xFF, 0xFF, 0x07, 0xFC, 0xFF, 0xE1, 0x0F, 0x00, 0xFF, 0x00, 0xFF, 
  0x7F, 0xF8, 0x07, 0x00, 0xFE, 0x83, 0xFF, 0x03, 0xFC, 0xFF, 0xF1, 0x0F, 
  0x00, 0x7F, 0x00, 0xFF, 0x7F, 0xF8, 0x03, 0x00, 0xFE, 0x83, 0xFF, 0x03, 
  0xFC, 0xFF, 0xF0, 0x07, 0x00, 0x7F, 0x00, 0xFF, 0x7F, 0xFC, 0x03, 0x00, 
  0xFE, 0x81, 0xFF, 0x03, 0xFC, 0xFF, 0xF0, 0x07, 0x00, 0x7F, 0x00, 0xFF, 
  0x3F, 0xFC, 0x03, 0x00, 0xFF, 0xC1, 0xFF, 0x01, 0xFE, 0xFF, 0xF0, 0x07, 
  0x80, 0x3F, 0x80, 0xFF, 0x3F, 0xFC, 0x03, 0x00, 0xFF, 0xC1, 0xFF, 0x01, 
  0xFE, 0xFF, 0xF8, 0x07, 0x80, 0x3F, 0x80, 0xFF, 0x3F, 0xFC, 0x03, 0x10, 
  0xFF, 0xC1, 0xFF, 0x01, 0xFE, 0x00, 0xF8, 0x03, 0x80, 0x3F, 0x80, 0x3F, 
  0x00, 0xFC, 0x03, 0x0C, 0xFF, 0xC0, 0xFF, 0x01, 0xFF, 0x00, 0xF8, 0x03, 
  0xC0, 0x3F, 0x80, 0x3F, 0x00, 0xFC, 0x07, 0x0E, 0xFF, 0xE0, 0xFF, 0x00, 
  0x7F, 0x00, 0xF8, 0x03, 0xC0, 0x1F, 0xC0, 0x3F, 0x00, 0xFC, 0xFF, 0x0F, 
  0xFF, 0xE0, 0xFF, 0x00, 0xFF, 0x7F, 0xFC, 0xFF, 0xC1, 0x1F, 0xC0, 0xFF, 
  0x1F, 0xFC, 0xFF, 0x0F, 0x7F, 0xE0, 0xFF, 0x00, 0xFF, 0x3F, 0xFC, 0xFF, 
  0xC1, 0x1F, 0xC0, 0xFF, 0x0F, 0xF8, 0xFF, 0x07, 0x7E, 0xE0, 0xFF, 0x80, 
  0xFF, 0x3F, 0xFC, 0xFF, 0xE0, 0x1F, 0xC0, 0xFF, 0x0F, 0xF8, 0xFF, 0x07, 
  0x7C, 0xF0, 0x7F, 0x80, 0xFF, 0x3F, 0xFE, 0xFF, 0xE0, 0x0F, 0xE0, 0xFF, 
  0x0F, 0xF0, 0xFF, 0x07, 0xF8, 0xF0, 0x7F, 0x80, 0xFF, 0x1F, 0xFE, 0xFF, 
  0xE0, 0x0F, 0xE0, 0xFF, 0x0F, 0xE0, 0xFF, 0x07, 0xE0, 0xF0, 0x7F, 0x80, 
  0xFF, 0x1F, 0xFE, 0xFF, 0xE0, 0x0F, 0xE0, 0xFF, 0x07, 0x80, 0xFF, 0x03, 
  0x00, 0xF0, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x3C, 0x00, 0x00, 0xF8, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x3F, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xF8, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x1F, 0x00, 0x8F, 0xF7, 0xFF, 0x7C, 
  0xBC, 0xC7, 0xF3, 0xFF, 0xFC, 0xBC, 0x07, 0x00, 0x00, 0xFC, 0x1F, 0x00, 
  0x8F, 0x73, 0xFF, 0xFE, 0xBE, 0xC7, 0xFB, 0xFF, 0xFE, 0xBD, 0x03, 0x00, 
  0x00, 0xFC, 0x1F, 0x80, 0x8F, 0x73, 0xFF, 0xEF, 0xFE, 0xE7, 0xFB, 0x77, 
  0xEF, 0xFD, 0x03, 0x00, 0x00, 0xFC, 0x1F, 0x80, 0xDF, 0x7B, 0x9C, 0xE7, 
  0xFE, 0xF7, 0xE3, 0x71, 0xE7, 0xFD, 0x03, 0x00, 0x00, 0xFC, 0x0F, 0xC0, 
  0xDF, 0x79, 0x9E, 0xE3, 0xFE, 0xF3, 0xE3, 0x78, 0xE7, 0xFF, 0x03, 0x00, 
  0x00, 0xFC, 0x0F, 0xE0, 0xDF, 0x39, 0x8E, 0xF3, 0xFF, 0xFB, 0xE7, 0xF8, 
  0xE7, 0xFE, 0x01, 0x00, 0x00, 0xFC, 0x0F, 0xE0, 0xDF, 0x3F, 0x8E, 0x7F, 
  0xFF, 0xFF, 0xE7, 0x38, 0x7F, 0xEE, 0x01, 0x00, 0x00, 0xF8, 0x0F, 0x70, 
  0xDC, 0x1F, 0x0E, 0x3F, 0xFF, 0x9D, 0xF7, 0x38, 0x3F, 0xEF, 0x01, 0x00, 
  0x00, 0xF8, 0x0F, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x08, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x0F, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,};

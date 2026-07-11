// ATTINY program to control the vault LED.

#include <Adafruit_NeoPixel.h>

#define  LED_PIN          2  // pin 7 on the Tiny
#define  VAULT_STATUS_PIN 0  //  pin 5 on the Tiny

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(1, LED_PIN, NEO_GRB+NEO_KHZ800);

#define COLOR_RED     0xFF0000
#define COLOR_GREEN   0x00FF00

void setup()
{
  pixels.begin();
}

void loop()
{
  int vault_status;
  
  vault_status = digitalRead(VAULT_STATUS_PIN);
  if (vault_status == 0)
  {
    pixels.setPixelColor(0, COLOR_RED);
  }
  else
  {
    pixels.setPixelColor(0, COLOR_GREEN);
  }
 
}

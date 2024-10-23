#include <Adafruit_NeoPixel.h>
#include <Arduino.h>
#include <FastLED.h>
#include <math.h>
#include "music_reactive.h"

Adafruit_NeoPixel ws2812b(N_PIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);

int lastState = HIGH; // the previous state from the input pin
int currentState;
extern uint16_t dist;
extern struct CRGB leds[N_PIXELS];
void setup()
{
  analogRead(EXTERNAL);
  Serial.begin(9600);
  ws2812b.begin();    
  ws2812b.setBrightness(10);
  ws2812b.show();
  LEDS.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, N_PIXELS).setCorrection(TypicalLEDStrip);
  dist = random16(12345); 
}

void loop()
{
 vu13();
}


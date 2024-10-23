#ifndef __MUSIC_REACTIVE_H_
#define __MUSIC_REACTIVE_H_

#include<Arduino.h>
#include<stdint.h>
#include <math.h>

#define N_PIXELS 200 // Number of pixels in strand
#define N_PIXELS_HALF (N_PIXELS / 2)
#define MIC_PIN 34         // Microphone is attached to this analog pin
#define LED_PIN 14           // NeoPixel LED strand is connected to this pin
#define SAMPLE_WINDOW 10    // Sample window for average level
#define PEAK_HANG 24        // Time of pause before peak dot falls
#define PEAK_FALL 20        // Rate of falling peak dot
#define PEAK_FALL2 8        // Rate of falling peak dot
#define INPUT_FLOOR 10      // Lower range of analogRead input
#define INPUT_CEILING 300   // Max range of analogRead input, the lower the value the more sensitive (1023 = max)300 (150)
#define DC_OFFSET 0         // DC offset in mic signal - if unusure, leave 0
#define NOISE 10            // Noise/hum/interference in mic signal
#define SAMPLES 60          // Length of buffer for dynamic level adjustment
#define TOP (N_PIXELS + 2)  // Allow dot to go slightly off scale
#define SPEED .20           // Amount to increment RGB color by each cycle
#define TOP2 (N_PIXELS + 1) // Allow dot to go slightly off scale
#define LAST_PIXEL_OFFSET N_PIXELS - 1
#define PEAK_FALL_MILLIS 10 // Rate of peak falling dot
#define POT_PIN 4
#define BG 0
#define LAST_PIXEL_OFFSET N_PIXELS - 1
#define BRIGHTNESS 255
#define LED_TYPE WS2812B // Only use the LED_PIN for WS2812's
#define COLOR_ORDER GRB
#define COLOR_MIN 0
#define COLOR_MAX 255
#define DRAW_MAX 100
#define SEGMENTS 4           // Number of segments to carve amplitude bar into
#define COLOR_WAIT_CYCLES 10 // Loop cycles to wait between advancing pixel origin
#define qsubd(x, b) ((x > b) ? b : 0)
#define qsuba(x, b) ((x > b) ? x - b : 0) // Analog Unsigned subtraction macro. if result <0, then => 0. By Andrew Tuline.
#define ARRAY_SIZE(A) (sizeof(A) / sizeof((A)[0]))

void All2(void);
void vu(void);
void vu1(void);
void vu2(void);
void Vu3(void);
void Vu4(void);
void Vu5(void);
void Vu6(void);
void vu7(void);
void soundmems(void);
void ripple3(void);
void vu8(void);
int calculateIntensity(void);
void updateOrigin(int intensity);
void assignDrawValues(int intensity);
void writeSegmented(void);
void writeToStrip(uint32_t* draw);
void soundble(void);
uint32_t * segmentAndResize(uint32_t* draw);
void updateGlobals(void);
void vu9(void);
void soundble(void); 
void sndwave(void);
void vu10(void);
void soundtun(void);
void vu11(void);
void soundrip(void);
void rippled(void);
void drawLine(uint8_t from, uint8_t to, uint32_t c);
void setPixel(int Pixel, byte red, byte green, byte blue);
void setAll(byte red, byte green, byte blue);
void vu12(void);
void rippvu(void);
void vu13(void);
void soundripper(void);   
void soundripped(void);                                        
void jugglep(void);                                                                   
void nextPattern2(void);
void All2(void);
uint32_t Wheel(byte WheelPos);

#endif
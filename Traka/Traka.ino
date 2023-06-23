#include <FastLED.h>

#define LED_PIN      5       // Pin connected to the Data In of WS2812B
#define NUM_LEDS     120      // Number of LEDs in the strip
#define BRIGHTNESS   64     // Initial brightness value (0-255)
#define DELAY_MS     100      // Delay between brightness updates
#define WAVE_SPEED   0.2     // Speed of the wave (lower value = slower wave)

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  static unsigned long startTime = 0;
  unsigned long currentTime = millis();
  float wavePosition = (currentTime - startTime) * WAVE_SPEED;

  for (int i = 0; i < NUM_LEDS; i++) {
    float red = sin(wavePosition - i * 0.3) * 0.5 + 0.5; // Wave-like brightness modulation
    float green = sin(wavePosition - i * 0.3 + 2*(M_PI)/3) * 0.5 + 0.5;
    float blue = sin(wavePosition - i * 0.3 - 2*(M_PI)/3) * 0.5 + 0.5;
    if(red < 0.5){
      red = 0;
    }
    if(green < 0.5){
      green = 0;
    }
    if(blue < 0.5){
      blue = 0;
    }
    leds[i] = CRGB(red * 255, green * 255, blue * 255); // Set red color with variable brightness
  }

  FastLED.setBrightness(BRIGHTNESS); // Set LED strip brightness
  FastLED.show();
  delay(DELAY_MS);
}

#include <Arduino.h>
#include "setup.h"
#include "animate.h"

void setup()
{
  /**
   * Shift register pin modes: setup control pins
   */
  pinMode(DATA_PIN,  OUTPUT);
  pinMode(LATCH_PIN, OUTPUT);
  pinMode(CLOCK_PIN, OUTPUT);

  /**
   * Not necessary though
   */
  digitalWrite(DATA_PIN,  LOW);
  digitalWrite(LATCH_PIN, LOW);
  digitalWrite(CLOCK_PIN, LOW);
}

void loop()
{
  animate();
}


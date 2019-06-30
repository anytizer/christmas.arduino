#include <Arduino.h>
#include "setup.h"

/**
 * Send clock - data - clock signals per bit in the queue
 */
void clock_bit(bool state)
{
  /**
   * Get the clock ready
   */
  digitalWrite(CLOCK_PIN, LOW);

  /**
   * Data out as the state provided
   */
  digitalWrite(DATA_PIN, state);

  /**
   * Trigger the clock
   */
  digitalWrite(CLOCK_PIN, HIGH);
}


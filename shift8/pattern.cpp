#include "pattern.h"

/**
 * Visually design the animation patterns
 * {animation speed, number of repeats, {animation frames}}
 *
 * @todo Remove all the patterns with zero repeats
 * @todo Get rid of: Frame size to be equal to number of relays
 * 
 * Notes:
 * First bit in the frame is shifted in first.
 */

/**
 * Blinks all LEDs at once
 */
pattern pattern_blinker(unsigned long speed, unsigned long repeat)
{
  return { speed, repeat, {
      "xxxxxxxx",
      "........",
      "xxxxxxxx",
      "........",
      "xxxxxxxx",
      "........",
      "xxxxxxxx",
      "........",
    }};
}

/**
 * Turns on LEDs one by one
 */
pattern pattern_slider1(unsigned long speed, unsigned long repeat)
{
  return { speed, repeat, {
      "x.......",
      "xx......",
      "xxx.....",
      "xxxx....",
      "xxxxx...",
      "xxxxxx..",
      "xxxxxxx.",
      "xxxxxxxx",
    }};
}

/**
 * Turns off LEDs one by one
 */
pattern pattern_slider2(unsigned long speed, unsigned long repeat)
{
  return { speed, repeat, {
      "xxxxxxxx",
      ".xxxxxxx",
      "..xxxxxx",
      "...xxxxx",
      "....xxxx",
      ".....xxx",
      "......xx",
      ".......x",
    }};
}

/**
 * Turns on LEDs one by one
 */
pattern pattern_slider3(unsigned long speed, unsigned long repeat)
{
  return { speed, repeat, {
      ".......x",
      "......xx",
      ".....xxx",
      "....xxxx",
      "...xxxxx",
      "..xxxxxx",
      ".xxxxxxx",
      "xxxxxxxx",
    }};
}

/**
 * Turns off LEDs one by one
 */
pattern pattern_slider4(unsigned long speed, unsigned long repeat)
{
  return { speed, repeat, {
      "xxxxxxxx",
      "xxxxxxx.",
      "xxxxxx..",
      "xxxxx...",
      "xxxx....",
      "xxx.....",
      "xx......",
      "x.......",
    }};
}

/**
 * Starts from center, moves to outer surface and tears up
 */
pattern pattern_tearup(unsigned long speed, unsigned long repeat)
{
	return { speed, repeat, {
      "...xx...",
      "..xxxx..",
      "xxxxxxxx",
      "xxx..xxx",
      "xx....xx",
      "x......x",
      "........",
      "........",
    }};
}

/**
 * Like gate opening from center to outer sides
 */
pattern pattern_opener(unsigned long speed, unsigned long repeat)
{
  return { speed, repeat, {
      "x......x",
      "xx....xx",
      "xxx..xxx",
      "xxxxxxxx",
      "xxx..xxx",
      "xx....xx",
      "x......x",
      "........",
    }};
}

pattern pattern_spring1(unsigned long speed, unsigned long repeat)
{
  return { speed, repeat, {
      "x.......",
      ".......x",
      ".x......",
      "......x.",
      "..x.....",
      ".....x..",
      "...x....",
      "....x...",
    }};
}

/**
 * Spring - remaining pins
 */
pattern pattern_spring2(unsigned long speed, unsigned long repeat)
{
  return { speed, repeat, {
      ".......x",
      "x.......",
      "......x.",
      "..x.....",
      ".....x..",
      "...x....",
      "....x...",
      "........",
    }};
}

/**
 * Moves two LEDs from a side and returns
 */
pattern pattern_double_runner(unsigned long speed, unsigned long repeat)
{
  return { speed, repeat, {
      "xx......",
      "..xx....",
      "....xx..",
      "......xx",
      "......xx",
      "....xx..",
      "..xx....",
      "xx......",
    }};
}

/**
 * Runs from left to right
 */
pattern pattern_run_left_right(unsigned long speed, unsigned long repeat)
{
  return { speed, repeat, {
      "x.......",
      ".x......",
      "..x.....",
      "...x....",
      "....x...",
      ".....x..",
      "......x.",
      ".......x",
    }};
}

/**
 * Runs from right to left
 */
pattern pattern_run_right_left(unsigned long speed, unsigned long repeat)
{
  return { speed, repeat, {
      ".......x",
      "......x.",
      ".....x..",
      "....x...",
      "...x....",
      "..x.....",
      ".x......",
      "x.......",
    }};
}


pattern pattern_collision(unsigned long speed, unsigned long repeat)
{
  return { speed, repeat, {
      "x......x",
      ".x....x.",
      "..x..x..",
      "...xx...",
      "x......x",
      ".x....x.",
      "..x..x..",
      "...xx...",
    }};
}

pattern pattern_explosion(unsigned long speed, unsigned long repeat)
{
  return { speed, repeat, {
      "...xx...",
      "..x..x..",
      ".x....x.",
      "x......x",
      "...xx...",
      "..x..x..",
      ".x....x.",
      "x......x",
    }};
}

/**
 * Merges and explodes
 */
pattern pattern_chopstick(unsigned long speed, unsigned long repeat)
{
  return { speed, repeat, {
      "xx....xx",
      "........",
      "xx....xx",
      "........",
      "..xxxx..",
      "........",
      ".xx..xx.",
      "x......x",
    }};
}


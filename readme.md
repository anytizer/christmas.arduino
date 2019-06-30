# Shift 8

8-bit Shift Register LED animation for a light show; like Christmas.


## Circuit Diagram


## 74HC595N Connection

            *
     QB 1      16  VCC
     QC 2      15  QA
     QD 3      14  SERial Line Data In - Arduino DATA_PIN (output mode)
     QE 4      13  OE' - Ground
     QF 5      12  RCLK - Arduino LATCH_PIN (output mode)
     QG 6      11  SRCLK Storage Register Clock - Arduino CLOCK_PIN (output mode)
     QH 7      10  Serial Clear - High
    GND 8      09  QH' Data Out - to pin 14 of second shift register, or floating

Shift Register - [Data Sheet](http://www.ti.com/lit/ds/symlink/sn74hc595.pdf) - PDF

QA - QH: with 470 Ohm resistor to LED, or to Relay Module.


## setup.h

See: [setup.h](shift8/setup.h) to configure Arduino Pins.


## Pattern video

Play [video](#).


## Pattern suppliers

Visually design the animation frames per pattern.

  - See [pattern.h](shift8/pattern.h)
  - See [pattern.cpp](shift8/pattern.cpp) - list of available animation patterns


## Animation

See [animate()](shift8/animate.cpp) function.

#include <Arduino.h>
#include <Encoder.h>
#include "pololu.h"

#define Kp 0.00001
#define Ki 0.0001
#define Kd 0.0001

// motor driver pin assign
const int R_Y_PWM = 2;
const int R_Y_IN1 = 3;
const int R_Y_IN2 = 4;
// encoder pin assign
const int R_Y_ENC1 = 5;
const int R_Y_ENC2 = 6;

volatile long RcounterX = 0;
volatile long RcounterY = 0;

volatile long preRCounterX = -999;
volatile long preRCounterY = -999;

const float COUNT_PER_REV = 12;  //encoder count per rev
const float AM_GEAR_RATIO = 150; // pololu #3053
const float DEGREE_PER_COUNT = 360 / COUNT_PER_REV / AM_GEAR_RATIO;
const float ALLOWABLE_DEGREE = 1;

void setup() {
  // put your setup code here, to run once:
  // set moder address for I/O
}

void loop() {
  // put your main code here, to run repeatedly:
}

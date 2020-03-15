#include <Stepper.h>

const float STEP_PER_REV=32;
const float GEAR_RED=64;
const float STEPS_PER_OUT_REV=STEPS_PER_REV*GEAR_RED;

int numItems = ;
int StepsRequired;

Stepper stepper motor (STEPS_PER_REV,8,9,10,11);

void setup() {
  Serial.print("how many times should the stepper motor rotate");
  // put your setup code here, to run once:

}

void loop() {

  stp();
  // put your main code here, to run repeatedly:

}

void stp(){
  steppermotor.setSpeed(600);
  StepsRequired=STEPS_PER_OUT_REV/2;
  steppermotor.step(StepsRequired);
  delay (2000);

//  StepsRequired=STEPS_PER_REV_OUT_REV/2;
//  steppermotor.setSpeed(100);
//  steppermotor.step(StepsRequired);
//  delay (1000);
//
//  StepsRequired= -STEPS_PER_OUT_REV/2;
//  steppermotor.setSpeed(700);
//  steppermotor.step(StepsRequired);
//  delay(2000);
  }

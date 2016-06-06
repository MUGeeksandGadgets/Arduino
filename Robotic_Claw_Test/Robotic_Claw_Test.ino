/*
 * @author Patrick Shinn
 * @version 6/4/16
 * 
 * Robotic claw test program
 * Requires the Make Block Library to run
 * This can be downloaded at:
 * https://codeload.github.com/Makeblock-official/Makeblock-Libraries/zip/master
 */


#include "MeOrion.h"

MeDCMotor claw(M1); // attached claw at M1 motor slot

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  claw.run(255); // close claw
  delay(1000);
  claw.run(-255); // open claw
  delay(1000);

}

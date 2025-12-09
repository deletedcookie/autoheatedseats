// include the Servo library
#include <Servo.h>

Servo myServo;  // create a servo object

void setup() {
  myServo.attach(2);    // attaches the servo on pin 2 to the servo object
  myServo.write(60);    // reset position
  delay(5000);          // wait till car is on
  myServo.write(100);   // push button
  delay(200);
  myServo.write(60);    // reset position
}

void loop() {

}

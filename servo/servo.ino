#include <Servo.h>

Servo myservo;  // Servo object


void setup() {
  myservo.attach(9);  // Set servo pin
}

void loop() {
  myservo.write(0); // set deg to 0
  delay(500);        // delay 500
  myservo.write(90); // set deg to 90
  delay(500);        // delay 500
  myservo.write(180); // set deg to 180
  delay(500);        // delay 500
  myservo.write(0); // set deg to 0
  delay(500);        // delay 500
}

#include <Servo.h>

Servo tap_servo;

int tap_servo_pin = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  tap_servo.attach(6);
}

void loop() {
  // put your main code here, to run repeatedly:
  tap_servo.write(70);
  delay(1000);
  tap_servo.write(100);
  delay(1000);
  tap_servo.write(120);
  delay(1000);
  
}
#include <Servo.h>

Servo tap_servo;

int senor_a = 1;
int senor_b = 2;
int senor_c = 3;
int senor_d = 4;
int senor_e = 5;

int tap_servo_pin = 9;



void setup() {
  // put your setup code here, to run once:
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("START");
  Serial.println(digitalRead(A1));
  Serial.println(digitalRead(A2));
  Serial.println(digitalRead(A3));
  Serial.println(digitalRead(A4));
  Serial.println(digitalRead(A5));
}
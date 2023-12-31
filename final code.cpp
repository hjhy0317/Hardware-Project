#include <Servo.h>

#define black 0
#define white 1

Servo servo;

int motor_high = 11;
int motor_low = 10;
int motor_speed = 16;
int dir = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  servo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val_a = digitalRead(A1);
  int val_b = digitalRead(A2);
  int val_c = digitalRead(A3);
  int val_d = digitalRead(A4);
  int val_e = digitalRead(A5);


// black = 0  white = 1

  if (val_a == 1 && val_b == 1 && val_c == 1 && val_d == 1 && val_e == 1){
      analogWrite(motor_high, motor_speed);
      analogWrite(motor_low, LOW);
      if (dir = 0){
        servo.write(120);}
      else{
        servo.write(85);}
    }
  
  else if (val_a == 1 && val_b == 1 && val_c == 0 && val_d == 1 && val_e == 1){
      servo.write(100);//왼왼쪽
      analogWrite(motor_high, motor_speed);
      analogWrite(motor_low, LOW);
      dir = 0;
    }
    
  else if (val_a == 0 && val_b == 1 && val_c == 1 && val_d == 1 && val_e == 1){
      servo.write(120);//왼왼쪽
      analogWrite(motor_high, motor_speed);
      analogWrite(motor_low, LOW);
      dir = 0;
    }
    
  else if (val_a == 1 && val_b == 0 && val_c == 1 && val_d == 1 && val_e == 1){
      servo.write(120);//왼쪽
      analogWrite(motor_high, motor_speed);
      analogWrite(motor_low, LOW);
      dir = 0;
    }

  else if (val_a == 0 && val_b == 0 && val_c == 1 && val_d == 1 && val_e == 1){
      servo.write(120);//왼쪽
      analogWrite(motor_high, motor_speed);
      analogWrite(motor_low, LOW);
      dir = 0;
    }

  else if (val_a == 1 && val_b == 0 && val_c == 0 && val_d == 1 && val_e == 1){
      servo.write(120);//왼쪽
      analogWrite(motor_high, motor_speed);
      analogWrite(motor_low, LOW);
      dir = 0;
    }
        
  else if (val_a == 1 && val_b == 1 && val_c == 1 && val_d == 0 && val_e == 1){
      servo.write(70);//오른쪽
      analogWrite(motor_high, motor_speed);
      analogWrite(motor_low, LOW);
      dir = 1;
    }

  else if (val_a == 1 && val_b == 1 && val_c == 1 && val_d == 1 && val_e == 0){
      servo.write(70);//오오른쪽
      analogWrite(motor_high, motor_speed);
      analogWrite(motor_low, LOW);
      dir = 1;
    }

  else if (val_a == 1 && val_b == 1 && val_c == 1 && val_d == 0 && val_e == 0){
      servo.write(70);//오른쪽
      analogWrite(motor_high, motor_speed);
      analogWrite(motor_low, LOW);
      dir = 1;
    }

  else if (val_a == 1 && val_b == 1 && val_c == 0 && val_d == 0 && val_e == 1){
      servo.write(70);//오른쪽
      analogWrite(motor_high, motor_speed);
      analogWrite(motor_low, LOW);
      dir = 1;
    }

  else if (val_a == 0 && val_b == 0 && val_c == 0 && val_d == 0 && val_e == 0){
      servo.write(100);//직진
      analogWrite(motor_high, LOW);
      analogWrite(motor_low, LOW);//멈춤
    }

  else {
      servo.write(100);//직진
      analogWrite(motor_high, motor_speed);
      analogWrite(motor_low, LOW);
      if (dir = 0){
        servo.write(120);}
      else{
        servo.write(85 );}
    }
}
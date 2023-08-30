int in1 = 10;
int in2 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(10, HIGH);
   digitalWrite(11, LOW);
}
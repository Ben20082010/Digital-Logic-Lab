void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  idle();
}

void loop() {
  // put your main code here, to run repeatedly:
  fwd();
  delay(1000);
  idle();

}

void fwd() {
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(5,HIGH);
}

void back() {
  digitalWrite(2,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
}

void idle() {
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
}

void setup_hbridge() {
  idle();
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    idle();
}


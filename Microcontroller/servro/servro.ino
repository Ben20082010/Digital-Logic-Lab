const float frequency= 40;//in HZ
unsigned long x,angle;


void setup() {
  // put your setup code here, to run once:
  pinMode(A5,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    angle=Serial.parseInt();
    x=((2000*angle)/180)+500;
    //Serial.flush();
  }

  digitalWrite(A5,HIGH);
  Serial.println(x);
  delayMicroseconds(x);
  digitalWrite(A5,LOW);
  delay(1000);
}



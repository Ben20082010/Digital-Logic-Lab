//
//const int X0 = 2;
//const int X1 = 3;
//const int X2 = 4;
//const int X3 = 5;
//const int X4 = 6;
//const int X5 = 7;


const int X0 = 7;
const int X1 = 6;
const int X2 = 5;
const int X3 = 4;
const int X4 = 3;
const int X5 = 2;

const int Y0 = 8;
const int Y1 = 9;
const int Y2 = 10;
const int Y3 = 11;
const int Y4 = 13;

void setup() {
 Serial.begin(9600);
  
   pinMode(X0, OUTPUT);
   pinMode(X1, OUTPUT);
   pinMode(X2, OUTPUT);
   pinMode(X3, OUTPUT);
   pinMode(X4, OUTPUT);
   pinMode(X5, OUTPUT);


   pinMode(Y0, OUTPUT);
   pinMode(Y1, OUTPUT);
   pinMode(Y2, OUTPUT);
   pinMode(Y3, OUTPUT);
   pinMode(Y4, OUTPUT);
   
}

void loop() {

  for(int i=0; i<=63; i++){
    setX(i);
    delay(10);
  }
}

void setX(int num){
  digitalWrite(X0,num & 0b000001);
  digitalWrite(X1,num & 0b000010);
  digitalWrite(X2,num & 0b000100);
  digitalWrite(X3,num & 0b001000);
  digitalWrite(X4,num & 0b010000);
  digitalWrite(X5,num & 0b100000);
}


#include "sinLUT.h"

const int taylorK=2;const int X0 = 2;
const int X1 = 3;
const int X2 = 4;
const int X3 = 5;
const int X4 = 6;
const int X5 = 7;

//
//const int X0 = 7;
//const int X1 = 6;
//const int X2 = 5;
//const int X3 = 4;
//const int X4 = 3;
//const int X5 = 2;

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
   int sinx;
    int modSinx;

  for(int i=-128;i<128;i++){


    
    //if (i>=0){
      sinx=sinLUT(i)+32;
    //}

    //else {
      //sinx=sinLUT(i);
    //}
    fastWriteY(sinx);
    Serial.print(i);
    Serial.print(' ');
    Serial.println(sinx);
  }
}


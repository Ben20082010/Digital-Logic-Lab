#include "sinLUT.h"

const int X0 = 2;
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
const int Y4 = 12;
const int Y5 = 13;

int second=0;

void setup() {
  // put your setup code here, to run once:
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
   pinMode(Y5, OUTPUT);
}

void loop() {
  // circle:
  for(int i=-128;i<128;i++){
    float x=sinLUT(i)+32;
    float y=sinLUT(i+64)+32;
    fastWriteX(x);
    fastWriteY(y);
  }
  
  //12 point
  for(int i=0;i<=12;i++){
    float x=sinLUT(256/12*i-128)+32;
    float y=sinLUT(256/12*i+64-128)+32;

    for (int l=0;l<=14;i++){
      fastWriteX(x/64*(50+l));
      fastWriteY(y/64*(50+l));
    }
  }

  //update pointer
    float x=sinLUT(second/60*256-128)+32;
    float y=sinLUT(second/60*256-128+64)+32;
    for (int l=0;l=60;l++){
      fastWriteX(x/64*l);
      fastWriteY(y/64*l);
    }
      
}




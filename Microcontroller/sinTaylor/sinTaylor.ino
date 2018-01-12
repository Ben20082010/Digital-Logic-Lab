
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
const int Y4 = 13;

const int taylorK=2;


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

   setTaylorConst();
}

void loop() {
    double sinx;
    int modSinx;

  for(int i=0;i<256;i++){

    sinx=sinTaylor(i*3.14159/128);
    modSinx=32+sinx*31;
    setX(modSinx);
    Serial.println(sinx);
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

double taylorConst[taylorK+1];
void setTaylorConst(){
  taylorConst[0]=1;
  for (int i=1;i<=taylorK;i++){
    taylorConst[i]=-taylorConst[i-1]/((2*i)*(2*i+1));
  }
}

double sinTaylor(double x){
   if(x>3.14159){
    x=x-6.28319;
   }
  
  double temp[taylorK+1];
  temp[0]=x;
  double out=x;
  
  for(int n=1;n<=taylorK;n++){
    temp[n]=temp[n-1]*x*x;
    out=out+temp[n]*taylorConst[n];
  }

  return out;
}


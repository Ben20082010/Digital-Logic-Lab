#ifndef SINLUT_H
#define SINLUT_H

const uint8_t tab[128] = {0,1,2,2,3,4,5,5,6,7,8,8,9,10,10,11,12,13,13,14,15,15,16,17,17,18,18,19,20,20,21,21,22,22,23,23,24,24,25,25,26,26,27,27,27,28,28,28,29,29,29,29,30,30,30,30,30,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,30,30,30,30,30,29,29,29,29,28,28,28,27,27,27,26,26,25,25,24,24,23,23,22,22,21,21,20,20,19,18,18,17,17,16,15,15,14,13,13,12,11,10,10,9,8,8,7,6,5,5,4,3,2,2,1};

//Return sin(x). x is an integer where -128 = -pi and +128 = pi
int sinLUT(int x){
  int out;
  x = x & 0x00ff;	//Truncate bits 8 and up - these just represent multiples of 2pi
  if (x & 0x80)		//Is the angle in the range -pi to 0?
    out = -(int)tab[x&0x7f];	//Yes, lookup the answer and invert it
  else
    out = (int)tab[x];			//No, just lookup the answer
  return out;
}

inline void fastWriteX(byte x){	//Pins 8-13 are PORTB bits 5:0 so just write them
  PORTB = x;
}

inline void fastWriteY(byte x){ //Pins 7-2 are PORTD bits 7:2 so shift data left by two bits
  PORTD = x << 2;
}

#endif

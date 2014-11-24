
// Segments:     Pinout:
//      ____      1  a  f  2  3  b
//     / a /      |  |  |  |  |  |
//   f/___/b     ------------------ this side is upper
//   / g /       ------------------ identifier ARK SR420561K on the lower
// e/___/c        |  |  |  |  |  |
//    d	          e  d  h  c  g  4
//
// pin H corresponds to colon :
//
// pins 1 to 4 activate digits
//
// constructor takes pins A to H and 1 to 4:
//     fS(a,b,c,d,e,f,g,h,1,2,3,4)

#include "fourSeven.h"

fourSeven fS(3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,  2);

void setup()
{
  fS.ms = 5;  // time to update each segment
}

unsigned int t = 10;
unsigned int i;
unsigned int target_millisecs = 1000;
void loop()
{
  for(i = 0;   i < target_millisecs / fS.ms / 4;   i++)
    fS.show(t);
  t--;
}

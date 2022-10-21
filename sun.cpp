#include "graphics.h"
#include <iostream>
#include <math.h>
#define w 1200
#define h 900
using namespace std;

void sun(){
   int i, x=250, y=100, r=50;
   setfillstyle(SOLID_FILL, YELLOW);
   setcolor(YELLOW);
   fillellipse(x, y, r, r);
   double k=acos(-1)/180;
   setlinestyle(SOLID_LINE, 0, 3);
   for (i=0; i<20; i++){
     line(x, y, cos(i*18*k)*90+x, sin(i*18*k)*90+y);
   }
}

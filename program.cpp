#include "graphics.h"
#include "picture.hpp"
int main()
{ initwindow(800,600);
   setbkcolor(LIGHTCYAN);
   clearviewport();
  house();
  sun();
  getch();
  closegraph();
}
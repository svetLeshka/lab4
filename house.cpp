#include <stdio.h>
#include<math.h>
#include "graphics.h"

IMAGE *resize(IMAGE *img, int w, int h)
{
  int wp=imagewidth(img);
  int hp=imageheight(img);
  IMAGE *r=createimage(w,h);
  for(int x=0;x<w; ++x)
    for(int y=0;y<h; ++y)
    {
      imageputpixel(r,x,y,imagegetpixel(img,x*wp/w,y*hp/h));
    }
  return r;
}

void house() {
   IMAGE *wall = loadBMP("h.bmp");
   int arr[8] = {350, 400, 550, 200, 750, 400, 350, 400};
   setcolor(COLOR(136, 0, 21));
   setfillstyle(SOLID_FILL, COLOR(136, 0, 21));
   IMAGE *wallh = resize(wall, 300, 200);
   putimage(400, 400, wallh, COPY_PUT);
   fillpoly(4, arr);
   setfillstyle(SOLID_FILL, COLOR(123, 77, 51));
   setcolor( COLOR(123, 77, 51));
   bar(495, 445, 605, 555);
   setfillstyle(SOLID_FILL, COLOR(34, 138, 164));
   setcolor(COLOR(34, 138, 164));
   bar(500, 450, 600, 550);
   setcolor( COLOR(123, 77, 51));
   setlinestyle(SOLID_LINE, 0, 5);
   line(550, 445, 550, 555);
   line(495, 500, 605, 500);
}
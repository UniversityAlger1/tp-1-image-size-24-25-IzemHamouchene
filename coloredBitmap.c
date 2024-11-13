#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
  int a,b;
  float c;
  a = w;
  b = h;

  if (strcmp(unit, "ko") == 0) {
    c = (a*b* 8.0 * 3)/8/1024;
  } else if (strcmp(unit, "mo") == 0) {
    c = (a*b* 8.0 * 3)/8/1024/1024;
  } else {
    c = (a*b* 8.0 * 3)/8/1024/1024/1024;
  }
   return c;
}

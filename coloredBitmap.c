#include <string.h>
#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
  float c;
  if (strcmp(unit, "ko") == 0) {
    c = (w*h* 8.0 * 3.0)/8.0/1024;
  } else if (strcmp(unit, "mo") == 0) {
    c = (w*h* 8.0 * 3.0)/8.0/1024/1024;
  } else {
    c = (w*h* 8.0 * 3.0)/8.0/1024/1024/1024;
  }
   return c;
}

#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
  
  float c, bwCredit;
  
  if (strcmp(unit, "ko") == 0) {
    c = (h*w* 8.0 * 3)/8/1024;
    bwCredit = (h*w* 1)/8/1024;
  } else if (strcmp(unit, "mo") == 0) {
    c = (h*w* 8.0 * 3)/8/1024/1024;
    bwCredit = (h*w* 1)/8/1024/1024;
  } else {
    c = (h*w* 8.0 * 3)/8/1024/1024/1024;
    bwCredit = (h*w * 1)/8/1024/1024/1024;
  }
  
  float coloredPart = c * fps * durationMovie;
  float bwPart = bwCredit * fps * durationCredit;
   return coloredPart + bwPart;
}

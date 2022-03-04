/*
 * C Programming: A Modern Approach
 * Chapter 5, Project 8
 */

#include <stdio.h>

int main(void) {
  int hours, minutes;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  int elapsed = (hours * 60) + minutes;

  int d0 = 8 * 60;               //  8:00am
  int d1 = (9 * 60) + 43;        //  9:43am
  int d2 = (11 * 60) + 19;       // 11:19am
  int d3 = (12 * 60) + 47;       // 12:47pm
  int d4 = (12 + 2) * 60;        //  2:00pm
  int d5 = ((12 + 3) * 60) + 45; //  3:45pm
  int d6 = (12 + 7) * 60;        //  7:00pm
  int d7 = ((12 + 9) * 60) + 45; //  9:45pm

  int delta0 = d0 > elapsed ? d0 - elapsed : elapsed - d0;
  int delta7 = d7 > elapsed ? d7 - elapsed : elapsed - d7;

  printf("Closest departure time is ");

  if (delta0 < delta7 && delta0 < d1 - elapsed) {
    printf("8:00 a.m, arriving at 10:16 a.m.\n");
  } else if (elapsed - d1 < d2 - elapsed) {
    printf("9:43 a.m, arriving at 11:52 a.m.\n");
  } else if (elapsed - d2 < d3 - elapsed) {
    printf("11:19 a.m, arriving at 1:31 p.m.\n");
  } else if (elapsed - d3 < d4 - elapsed) {
    printf("12:47 p.m., arriving 3:00 p.m.\n");
  } else if (elapsed - d4 < d5 - elapsed) {
    printf("2:00 p.m., arriving 4:08 p.m.\n");
  } else if (elapsed - d5 < d6 - elapsed) {
    printf("3:45 p.m., arriving at 5:55 p.m.\n");
  } else if (elapsed - d6 < d7 - elapsed) {
    printf("7:00 p.m., arriving at 9:20 p.m.\n");
  } else {
    printf("9:45 p.m., arriving at 11:58 p.m.\n");
  }

  return 0;
}

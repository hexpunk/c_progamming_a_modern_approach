/*
 * C Programming: A Modern Approach
 * Chapter 5, Project 2
 */

#include <stdio.h>

int main(void) {
  int hours, minutes;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  if (hours > 12) {
    printf("Equivalent 12-hour time: %d:%d PM\n", hours - 12, minutes);
  } else {
    printf("Equivalent 12-hour time: %d:%d AM\n", hours, minutes);
  }

  return 0;
}

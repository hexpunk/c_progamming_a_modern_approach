/*
 * C Programming: A Modern Approach
 * Chapter 7, Project 9
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
  int hours, minutes;
  char am_or_pm;

  printf("Enter a 12-hour time: ");
  scanf("%d:%d %c", &hours, &minutes, &am_or_pm);

  am_or_pm = toupper(am_or_pm);

  if (am_or_pm == 'A' && hours == 12) {
    hours = 0;
  } else if (am_or_pm == 'P' && hours < 12) {
    hours += 12;
  }

  printf("Equivalent 24-hour time: %.2d:%d\n", hours, minutes);

  return 0;
}

/*
 * C Programming: A Modern Approach
 * Chapter 5, Project 9
 */

#include <stdio.h>

int main(void) {
  int year0, month0, day0;
  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month0, &day0, &year0);

  int year1, month1, day1;
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month1, &day1, &year1);

  int cmp = 0;
  if (year0 < year1) {
    cmp = -1;
  } else if (year1 < year0) {
    cmp = 1;
  } else if (month0 < month1) {
    cmp = -1;
  } else if (month1 < month0) {
    cmp = 1;
  } else if (day0 < day1) {
    cmp = -1;
  } else if (day1 < day0) {
    cmp = 1;
  }

  if (cmp == -1) {
    printf(
      "%d/%d/%d is earlier than %d/%d/%d\n",
      month0, day0, year0,
      month1, day1, year1
    );
  } else if (cmp == 1) {
    printf(
      "%d/%d/%d is earlier than %d/%d/%d\n",
      month1, day1, year1,
      month0, day0, year0
    );
  } else {
    printf(
      "%d/%d/%d is the same as %d/%d/%d\n",
      month0, day0, year0,
      month1, day1, year1
    );
  }

  return 0;
}

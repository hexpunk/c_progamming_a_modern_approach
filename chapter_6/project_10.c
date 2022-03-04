/*
 * C Programming: A Modern Approach
 * Chapter 6, Project 10
 */

#include <stdio.h>

int main(void) {
  int min_year = 0, min_month = 0, min_day = 0, cmp;

  int year, month, day;

  for (;;) {
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    if (year == 0 && month == 0 && day == 0) {
      break;
    }

    if (
      (min_year == 0 && min_month == 0 && min_day == 0) ||
      (year < min_year) ||
      (year == min_year && month < min_month) ||
      (year == min_year && month == min_month && day < min_day)
    ) {
      min_year = year;
      min_month = month;
      min_day = day;
    }
  }

  printf("%d/%d/%.2d is the earliest data\n", min_month, min_day, min_year);

  return 0;
}

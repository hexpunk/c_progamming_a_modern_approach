/*
 * C Programming: A Modern Approach
 * Chapter 7, Project 14
 */

#include <stdio.h>
#include <math.h>

int main(void) {
  double x, y = 1, x_div_y, avg;

  printf("Enter a positive number: ");
  scanf("%lf", &x);

  for (;;) {
    x_div_y = x / y;
    avg = (y + x_div_y) / 2;

    if (fabs(y - avg) < 0.00001 * y) {
      break;
    }

    y = avg;
  }

  printf("Sqaure root: %lf\n", y);

  return 0;
}

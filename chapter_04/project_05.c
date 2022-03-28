/*
 * C Programming: A Modern Approach
 * Chapter 4, Project 5
 */

#include <stdio.h>

int main(void) {
  int d, i0, i1, i2, i3, i4, j0, j1, j2, j3, j4;
  printf("Enter the first 11 digits of a UPC: ");
  scanf(
    "%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
    &d, &i0, &i1, &i2, &i3, &i4, &j0, &j1, &j2, &j3, &j4
  );

  int first_sum = d + i1 + i3 + j0 + j2 + j4;
  int second_sum = i0 + i2 + i4 + j1 + j3;
  int total = 3 * first_sum + second_sum;
  int check_digit = 9 - ((total - 1) % 10);

  printf("Check digit: %d\n", check_digit);

  return 0;
}

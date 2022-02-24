/*
 * C Programming: A Modern Approach
 * Chapter 4, Project 6
 */

#include <stdio.h>

int main(void) {
  int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11;
  printf("Enter the first 12 digits of an EAN: ");
  scanf(
    "%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
    &i0, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11
  );

  int first_sum = i1 + i3 + i5 + i7 + i9 + i11;
  int second_sum = i0 + i2 + i4 + i6 + i8 + i10;
  int total = 3 * first_sum + second_sum;
  int check_digit = 9 - ((total - 1) % 10);

  printf("Check digit: %d\n", check_digit);

  return 0;
}

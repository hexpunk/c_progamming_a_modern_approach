/*
 * C Programming: A Modern Approach
 * Chapter 5, Project 6
 */

#include <stdio.h>

int main(void) {
  int d, i0, i1, i2, i3, i4, j0, j1, j2, j3, j4, c;

  printf("Enter the first (single) digit: ");
  scanf("%1d", &d);

  printf("Enter first group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &i0, &i1, &i2, &i3, &i4);

  printf("Enter second group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &j0, &j1, &j2, &j3, &j4);

  printf("Enter the final (single) digit: ");
  scanf("%1d", &c);

  int first_sum = d + i1 + i3 + j0 + j2 + j4;
  int second_sum = i0 + i2 + i4 + j1 + j3;
  int total = 3 * first_sum + second_sum;
  int check_digit = 9 - ((total - 1) % 10);

  if (c == check_digit) {
    printf("VALID\n");
  } else {
    printf("NOT VALID\n");
  }

  return 0;
}

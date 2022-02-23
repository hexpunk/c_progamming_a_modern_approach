/*
 * C Programming: A Modern Approach
 * Chapter 3, Project 6
 */

#include <stdio.h>

int main(void) {
  int num1, denom1, num2, denom2;
  printf("Enter two fractions separated by a plus sign: ");
  scanf("%d / %d + %d / %d", &num1, &denom1, &num2, &denom2);

  int result_num = num1 * denom2 + num2 * denom1;
  int result_denom = denom1 * denom2;

  printf("The sum is %d/%d\n", result_num, result_denom);

  return 0;
}

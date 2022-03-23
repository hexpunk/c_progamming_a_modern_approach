/*
 * C Programming: A Modern Approach
 * Chapter 7, Project 6
 */

#include <stdio.h>

int main(void) {
  int num1, denom1, num2, denom2, result_num, result_denom;
  char operator;

  printf("Enter two fractions separated by a +, -, *, or /: ");
  scanf("%d / %d %c %d / %d", &num1, &denom1, &operator, &num2, &denom2);

  if (operator == '+') {
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_denom);
  } else if (operator == '-') {
    // Yeah, I got lazy with this instead of finding the least common denominator.
    // But, hey, the rest of the program allows for improper and complex fractions.
    // ¯\_(ツ)_/¯
    if (denom1 != denom2) {
      int initial_denom1 = denom1;

      num1 *= denom2;
      denom1 *= denom2;

      num2 *= initial_denom1;
      denom2 *= initial_denom1;
    }

    result_num = num1 - num2;
    result_denom = denom1;

    printf("The difference is %d/%d\n", result_num, result_denom);
  } else if (operator == '*') {
    result_num = num1 * num2;
    result_denom = denom1 * denom2;

    printf("The product is %d/%d\n", result_num, result_denom);
  } else if (operator == '/') {
    result_num = num1 * denom2;
    result_denom = num2 * denom1;

    printf("The quotient is %d/%d\n", result_num, result_denom);
  }

  return 0;
}

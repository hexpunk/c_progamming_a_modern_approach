/*
 * C Programming: A Modern Approach
 * Chapter 7, Project 15
 */

#include <stdio.h>

int main(void) {
  int n;

  printf("Enter a positive integer: ");
  scanf("%d", &n);
  printf("Factorial of %d:\n", n);

  // Largest value for short is 7! (16 bits on my system)
  short short_factorial = n;
  for (int i = short_factorial - 1; i > 1; i--) {
    short_factorial *= i;
  }
  printf("(short)\t\t%hd\n", short_factorial);

  // Largest value for int is 12! (32 bits on my system)
  int int_factorial = n;
  for (int i = int_factorial - 1; i > 1; i--) {
    int_factorial *= i;
  }
  printf("(int)\t\t%d\n", int_factorial);

  // Largest value for long is 20! (64 bits on my system)
  long long_factorial = n;
  for (int i = long_factorial - 1; i > 1; i--) {
    long_factorial *= i;
  }
  printf("(long)\t\t%ld\n", long_factorial);

  // Largest value for long is 20! (64 bits on my system)
  long long long_long_factorial = n;
  for (int i = long_long_factorial - 1; i > 1; i--) {
    long_long_factorial *= i;
  }
  printf("(long long)\t%lld\n", long_long_factorial);

  // Largest value before loss of precision is 13!
  // Largest value before infinity overflow is 34!
  float float_factorial = n;
  for (int i = float_factorial - 1; i > 1; i--) {
    float_factorial *= i;
  }
  printf("(float)\t\t%f\n", float_factorial);

  // Largest value before loss of precision is 22!
  // Largest value before infinity overflow is 170!
  double double_factorial = n;
  for (int i = double_factorial - 1; i > 1; i--) {
    double_factorial *= i;
  }
  printf("(double)\t%lf\n", double_factorial);

  // Largest value before loss of precision is 25!
  // Largest value before infinity overflow is 1754!
  long double long_double_factorial = n;
  for (int i = long_double_factorial - 1; i > 1; i--) {
    long_double_factorial *= i;
  }
  printf("(long double)\t%Lf\n", long_double_factorial);

  return 0;
}

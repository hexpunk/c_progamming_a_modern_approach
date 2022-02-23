/*
 * C Programming: A Modern Approach
 * Chapter 2, Project 5
 */

#include <stdio.h>

int main(void) {
  float x;
  printf("Enter a value for x: ");
  scanf("%f", &x);

  float x2 = x * x;
  float x3 = x2 * x;
  float x4 = x3 * x;
  float x5 = x4 * x;

  printf("%f\n", (3.0f * x5) + (2.0f * x4) - (5.0f * x3) - x2 + (7.0f * x) - 6.0f);

  return 0;
}

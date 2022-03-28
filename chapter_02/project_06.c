/*
 * C Programming: A Modern Approach
 * Chapter 2, Project 6
 */

#include <stdio.h>

int main(void) {
  float x;
  printf("Enter a value for x: ");
  scanf("%f", &x);

  printf("%f\n", ((((3.0f * x + 2.0f) * x - 5.0f) * x - 1.0f) * x + 7.0f) * x - 6.0f);

  return 0;
}

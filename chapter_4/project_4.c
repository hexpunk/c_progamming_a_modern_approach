/*
 * C Programming: A Modern Approach
 * Chapter 4, Project 4
 */

#include <stdio.h>

int main(void) {
  int i;
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &i);

  // printf("In octal, your number is: %.5o\n", i);

  int d0 = i % 8;

  i /= 8;
  int d1 = i % 8;

  i /= 8;
  int d2 = i % 8;

  i /= 8;
  int d3 = i % 8;

  i /= 8;
  int d4 = i % 8;

  printf("In octal, your number is: %d%d%d%d%d\n", d4, d3, d2, d1, d0);

  return 0;
}

/*
 * C Programming: A Modern Approach
 * Chapter 5, Project 1
 */

#include <stdio.h>

int main(void) {
  int i;
  printf("Enter a number: ");
  scanf("%d", &i);

  int digits;
  if (i < 10) {
    digits = 1;
  } else if (i < 100) {
    digits = 2;
  } else if (i < 1000) {
    digits = 3;
  } else {
    digits = 4;
  }

  printf("The number %d has %d digits\n", i, digits);

  return 0;
}

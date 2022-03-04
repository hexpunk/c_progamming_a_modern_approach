/*
 * C Programming: A Modern Approach
 * Chapter 6, Project 1
 */

#include <stdio.h>

int main(void) {
  float input, max = 0.0f;

  for (;;) {
    printf("Enter a number: ");
    scanf("%f", &input);

    if (input > 0) {
      if (input > max) {
        max = input;
      }
    } else {
      break;
    }
  }

  printf("The largest number entered was %f\n", max);

  return 0;
}

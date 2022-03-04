/*
 * C Programming: A Modern Approach
 * Chapter 6, Project 12
 */

#include <stdio.h>

int main(void) {
  // After the first loop that we're avoiding (1 + 1/1!), e will be 2
  float e = 2.0f;

  float limit;
  printf("Enter a small floating point number: ");
  scanf("%f", &limit);

  // Start with 2 to avoid an unnecessary loop iteration
  for (int i = 2;; i++) {
    // After the first loop that we're avoiding (1 * 1), factorial will be 1
    int factorial = 1;

    // Start with 2 to avoid an unnecessary loop iteration
    for (int j = 2; j <= i; j++) {
      factorial *= j;
    }

    float term = 1.0f / factorial;

    if (term < limit) {
      break;
    }

    e += term;
  }

  printf("e is approximately %f\n", e);

  return 0;
}

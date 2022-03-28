/*
 * C Programming: A Modern Approach
 * Chapter 6, Project 11
 */

#include <stdio.h>

int main(void) {
  // After the first loop that we're avoiding (1 + 1/1!), e will be 2:
  float e = 2.0f;

  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);

  // Start with 2 to avoid an unnecessary loop iteration
  for (int i = 2; i <= n; i++) {
    int factorial = 1;

    // Start with 2 to avoid an unnecessary loop iteration
    for (int j = 2; j <= i; j++) {
      factorial *= j;
    }

    e += 1.0f / factorial;
  }

  printf("e is approximately %f\n", e);

  return 0;
}

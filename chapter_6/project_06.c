/*
 * C Programming: A Modern Approach
 * Chapter 6, Project 6
 */

#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  int square = 0;
  for (int i = 1; square <= n; i++) {
    square = i * i;

    if (square % 2 == 0) {
      printf("%d\n", square);
    }
  }

  return 0;
}

/*
 * C Programming: A Modern Approach
 * Chapter 6, Project 5
 */

#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("The reversal is: ");
  while (n > 0) {
    printf("%d", n % 10);
    n /= 10;
  }

  printf("\n");

  return 0;
}

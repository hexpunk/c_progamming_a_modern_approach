/*
 * C Programming: A Modern Approach
 * Chapter 4, Project 2
 */

#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a three-digit number: ");
  scanf("%d", &n);

  printf("The reversal is: %d%d%d\n", n % 10, (n % 100) / 10, n / 100);

  return 0;
}

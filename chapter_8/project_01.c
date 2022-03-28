/*
 * C Programming: A Modern Approach
 * Chapter 8, Project 1
 */

#include <stdio.h>

int main(void) {
  int digit_seen[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    digit_seen[digit]++;
    n /= 10;
  }

  printf("Repeated digit(s):");
  for (int i = 0; i < 10; i++) {
    if (digit_seen[i] > 1) {
      printf(" %d", i);
    }
  }
  printf("\n");

  return 0;
}

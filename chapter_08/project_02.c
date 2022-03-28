/*
 * C Programming: A Modern Approach
 * Chapter 8, Project 2
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

  printf("Digit:\t\t 0 1 2 3 4 5 6 7 8 9\n");
  printf("Occurences:\t");
  for (int i = 0; i < 10; i++) {
    printf(" %d", digit_seen[i]);
  }
  printf("\n");

  return 0;
}

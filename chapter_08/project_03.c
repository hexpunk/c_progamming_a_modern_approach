/*
 * C Programming: A Modern Approach
 * Chapter 8, Project 3
 */

#include <stdbool.h>
#include <stdio.h>

int main(void) {
  for (;;) {
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    if (n <= 0) {
      break;
    }

    while (n > 0) {
      digit = n % 10;

      if (digit_seen[digit]) {
        break;
      }

      digit_seen[digit] = true;
      n /= 10;
    }

    if (n > 0) {
      printf("Repeated digit\n");
    } else {
      printf("No repeated digits\n");
    }
  }

  return 0;
}

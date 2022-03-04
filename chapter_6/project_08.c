/*
 * C Programming: A Modern Approach
 * Chapter 6, Project 8
 */

#include <stdio.h>

int main(void) {
  int days;
  printf("Enter number of days in month: ");
  scanf("%d", &days);

  int start;
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &start);

  // Zero-index the offset to avoid having to subract 1 from it in the loop
  start -= 1;

  printf("\n");

  // Add padding for the first week's offset
  for (int i = 0; i < start; i++) {
    printf("   ");
  }

  for (int i = 1; i <= days; i++) {
    printf("%2d ", i);

    if ((i + start) % 7 == 0) {
      printf("\n");
    }
  }

  printf("\n");

  return 0;
}

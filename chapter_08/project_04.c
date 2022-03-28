/*
 * C Programming: A Modern Approach
 * Chapter 8, Project 4
 */

#include <stdio.h>

#define SIZE_A ((int) (sizeof(a) / sizeof(a[0])))

int main(void) {
  int a[10];

  printf("Enter %d numbers: ", SIZE_A);
  for (int i = 0; i < SIZE_A; i++) {
    scanf("%d", &a[i]);
  }

  printf("In reverse order: ");
  for (int i = SIZE_A - 1; i >= 0; i--) {
    printf(" %d", a[i]);
  }
  printf("\n");

  return 0;
}

/*
 * C Programming: A Modern Approach
 * Chapter 5, Project 7
 */

#include <stdio.h>

int main(void) {
  int i0, i1, i2, i3;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &i0, &i1, &i2, &i3);

  int min, max, min0, min1, max0, max1;

  // if statement #1
  if (i0 < i1) {
    min0 = i0;
    max0 = i1;
  } else {
    min0 = i1;
    max0 = i0;
  }

  // if statement #2
  if (i2 < i3) {
    min1 = i2;
    max1 = i3;
  } else {
    min1 = i3;
    max1 = i2;
  }

  // if statement #3
  if (min0 < min1) {
    min = min0;
  } else {
    min = min1;
  }

  // if statement #4
  if (max0 > max1) {
    max = max0;
  } else {
    max = max1;
  }

  printf("Largest: %d\n", max);
  printf("Smallest: %d\n", min);

  return 0;
}

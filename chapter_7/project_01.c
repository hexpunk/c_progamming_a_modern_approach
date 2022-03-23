/*
 * C Programming: A Modern Approach
 * Chapter 7, Project 1
 */

#include <stdio.h>

int main(void) {
  int i = 1;
  while (i * i > 0) {
    i++;
  }

  printf("The smallest int that causes overflow when sqaured is %d\n", i);

  short j = 1;
  // convert back to a short after automatic arithmetic conversion
  while ((short)(j * j) > 0) {
    j++;
  }

  printf("The smallest short that causes overflow when sqaured is %d\n", j);

  return 0;
}

/*
 * C Programming: A Modern Approach
 * Chapter 3, Project 4
 */

#include <stdio.h>

int main(void) {
  int group1, group2, group3;
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &group1, &group2, &group3);

  printf("You entered %d.%d.%d\n", group1, group2, group3);

  return 0;
}

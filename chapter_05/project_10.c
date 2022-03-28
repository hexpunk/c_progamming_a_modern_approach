/*
 * C Programming: A Modern Approach
 * Chapter 5, Project 10
 */

#include <stdio.h>

int main(void) {
  int grade;
  printf("Enter numerical grade: ");
  scanf("%d", &grade);

  switch (grade / 10) {
    case 10:
      /* FALL THROUGH */

    case 9:
      printf("A\n");
      break;

    case 8:
      printf("B\n");
      break;

    case 7:
      printf("C\n");
      break;

    case 6:
      printf("D\n");
      break;

    default:
      printf("F\n");
      break;
  }

  return 0;
}

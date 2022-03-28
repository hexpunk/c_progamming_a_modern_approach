/*
 * C Programming: A Modern Approach
 * Chapter 7, Project 11
 */

#include <stdio.h>

int main(void) {
  printf("Enter a first and last name: ");

  char c, first_initial = getchar();

  if (first_initial == ' ') {
  // Consume whitespace until we reach the first initial.
    while ((first_initial = getchar()) == ' ');
  }

  // Consume the rest of the first name.
  while (getchar() != ' ');

  // Consume whitespace until we reach the last initial.
  while ((c = getchar()) == ' ');
  printf("%c", c);

  // Print the rest of the last name.
  while ((c = getchar()) != ' ' && c != '\n') {
    printf("%c", c);
  }

  printf(", %c.\n", first_initial);


  return 0;
}

/*
 * C Programming: A Modern Approach
 * Chapter 8, Project 13
 */

#include <stdio.h>
#include <ctype.h>

#define MAX_CHARS 20

int main(void) {
  printf("Enter a first and last name: ");

  char c, first_initial = getchar();
  char last_name[MAX_CHARS] = {0};

  if (first_initial == ' ') {
  // Consume whitespace until we reach the first initial.
    while ((first_initial = getchar()) == ' ');
  }

  // Consume the rest of the first name.
  while (getchar() != ' ');

  // Consume whitespace until we reach the last initial.
  while ((c = getchar()) == ' ');
  last_name[0] = c;

  // Read the rest of the last name into array.
  for (int i = 1; i < MAX_CHARS; i++) {
    c = getchar();

    if (c == ' ' || c == '\n') {
      break;
    }

    last_name[i] = c;
  }

  printf("You entered the name: ");

  // Print the last name.
  for (int i = 0; i < MAX_CHARS; i++) {
    if (last_name[i] == 0) {
      break;
    }

    printf("%c", last_name[i]);
  }

  printf(", %c.\n", first_initial);

  return 0;
}

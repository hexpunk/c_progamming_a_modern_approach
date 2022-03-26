/*
 * C Programming: A Modern Approach
 * Chapter 7, Project 10
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
  int vowels;

  printf("Enter a sentence: ");

  char input;
  while((input = getchar()) != '\n') {
    switch (toupper(input)) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        vowels++;
        break;
    }
  }

  printf("Your sentence contains %d vowels.\n", vowels);

  return 0;
}

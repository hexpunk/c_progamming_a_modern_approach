/*
 * C Programming: A Modern Approach
 * Chapter 8, Project 11
 */

#include <stdio.h>

#define MAX_CHARS 15

int main(void) {
  char phone_number[15] = {0};

  printf("Enter phone numer: ");
  for (int i = 0; i < MAX_CHARS; i++) {
    char input = getchar();

    if (input == '\n') {
      break;
    }

    phone_number[i] = input;
  }

  printf("In numberic form: ");
  for (int i = 0; i < MAX_CHARS; i++) {
    if (phone_number[i] == 0) {
      break;
    }

    switch (phone_number[i]) {
      case 'A':
      case 'B':
      case 'C':
        putchar('2');
        break;

      case 'D':
      case 'E':
      case 'F':
        putchar('3');
        break;

      case 'G':
      case 'H':
      case 'I':
        putchar('4');
        break;

      case 'J':
      case 'K':
      case 'L':
        putchar('5');
        break;

      case 'M':
      case 'N':
      case 'O':
        putchar('6');
        break;

      case 'P':
      case 'Q':
      case 'R':
      case 'S':
        putchar('7');
        break;

      case 'T':
      case 'U':
      case 'V':
        putchar('8');
        break;

      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
        putchar('9');
        break;

      default:
        putchar(phone_number[i]);
    }
  }

  putchar('\n');

  return 0;
}

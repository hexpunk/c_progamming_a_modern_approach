/*
 * C Programming: A Modern Approach
 * Chapter 8, Project 6
 */

#include <stdio.h>
#include <ctype.h>

#define MAX_MESSAGE_LENGTH 255

int main(void) {
  char message[MAX_MESSAGE_LENGTH] = {0};

  int i;
  char current;
  printf("Enter message: ");
  for (
    i = 0, current = getchar();
    i < MAX_MESSAGE_LENGTH && current != '\n';
    i++, current = getchar()
  ) {
    message[i] = toupper(current);
  }

  printf("In B1FF speak: ");
  for (int i = 0; i < MAX_MESSAGE_LENGTH; i++) {
    if (message[i] == '\n') {
      break;
    }

    switch (message[i]) {
      case 'A':
        printf("4");
        break;

      case 'B':
        printf("8");
        break;

      case 'E':
        printf("3");
        break;

      case 'I':
        printf("1");
        break;

      case 'O':
        printf("0");
        break;

      case 'S':
        printf("5");
        break;

      default:
        printf("%c", message[i]);
    }
  }
  printf("!!!!!!!!!!\n");

  return 0;
}

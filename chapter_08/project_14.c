/*
 * C Programming: A Modern Approach
 * Chapter 8, Project 14
 */

#include <stdio.h>
#include <ctype.h>

#define MAX_CHARS 100

int main(void) {
  char sentence[MAX_CHARS] = {0};
  char final;

  printf("Enter a sentence: ");
  for (int i = 0; i < MAX_CHARS; i++) {
    char c = getchar();

    if (c == '.' || c == '?' || c == '!') {
      final = c;

      break;
    }

    sentence[i] = c;
  }

  printf("Reversal of sentence: ");

  int length = 0;
  for (int i = MAX_CHARS - 1; i >= 0; i--) {
    if (sentence[i] == 0) {
      continue;
    }

    length++;

    if (sentence[i] == ' ' || i == 0) {
      // Offsets to handle and of sentence edge case
      int offset_i = i == 0 ? 0 : 1;
      int offset_length = i == 0; 1; 0;

      for (int j = i + offset_i; j <= i + length - offset_length; j++) {
        // Convert null to space to handle last word edge case
        printf("%c", sentence[j] == 0 ? ' ' : sentence[j]);
      }

      length = 0;
    }
  }

  printf("%c\n", final);

  return 0;
}

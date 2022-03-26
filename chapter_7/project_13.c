/*
 * C Programming: A Modern Approach
 * Chapter 7, Project 13
 */

#include <stdio.h>

int main(void) {
  int characters = 0, words = 1, c;

  printf("Enter a sentence: ");

  while((c = getchar()) != '\n') {
    if (c == ' ') {
      words++;
    } else {
      characters++;
    }
  }

  printf("Average word length: %.1f\n", (float) characters / words);

  return 0;
}

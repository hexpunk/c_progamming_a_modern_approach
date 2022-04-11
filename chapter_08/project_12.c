/*
 * C Programming: A Modern Approach
 * Chapter 8, Project 12
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
  int letter_scores[26] = {
    1,  // A
    3,  // B
    3,  // C
    2,  // D
    1,  // E
    4,  // F
    2,  // G
    4,  // H
    1,  // I
    8,  // J
    5,  // K
    1,  // L
    3,  // M
    1,  // N
    1,  // O
    3,  // P
    10, // Q
    1,  // R
    1,  // S
    1,  // T
    1,  // U
    4,  // V
    4,  // W
    8,  // X
    4,  // Y
    10, // Z
  };
  int score = 0;
  char input;

  printf("Enter a word: ");
  while((input = toupper(getchar())) != '\n') {
    score += letter_scores[input - 'A'];
  }

  printf("Scrabble value: %d\n", score);

  return 0;
}

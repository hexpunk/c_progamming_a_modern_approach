/*
 * C Programming: A Modern Approach
 * Chapter 8, Project 9
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_COLS 10
#define NUM_ROWS 10

int main(void) {
  char matrix[NUM_ROWS][NUM_COLS];

  // initialize the array
  for (int i = 0; i < NUM_ROWS; i++) {
    for (int j = 0; j < NUM_COLS; j++) {
      matrix[i][j] = '.';
    }
  }

  // intialize the RNG
  srand((unsigned) time(NULL));

  int x = 0, y = 0;

  for (char letter = 'A'; letter <= 'Z'; letter++) {
    matrix[y][x] = letter;

    // check if we're stuck
    if (
      (x == 0 || matrix[y][x - 1] != '.')
        && (x == NUM_COLS - 1 || matrix[y][x + 1] != '.')
        && (y == 0 || matrix[y - 1][x] != '.')
        && (y == NUM_ROWS - 1 || matrix[y + 1][x] != '.')
    ) {
      break;
    }

    for (;;) {
      int next_direction = rand() % 4;

      if (
        // check up direction
        next_direction == 0
          && y > 0
          && matrix[y - 1][x] == '.'
      ) {
        y--;
        break;
      } else if (
        // check right direction
        next_direction == 1
          && x < NUM_COLS - 1
          && matrix[y][x + 1] == '.'
      ) {
        x++;
        break;
      } else if (
        // check down direction
        next_direction == 2
          && y < NUM_ROWS - 1
          && matrix[y + 1][x] == '.'
      ) {
        y++;
        break;
      } else if (
        // check left direction
        x > 0 && matrix[y][x - 1] == '.'
      ) {
        x--;
        break;
      }
    }
  }

  // print out the results
  for (int i = 0; i < NUM_ROWS; i++) {
    for (int j = 0; j < NUM_COLS; j++) {
      printf("%c ", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}

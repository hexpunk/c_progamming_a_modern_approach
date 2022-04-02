/*
 * C Programming: A Modern Approach
 * Chapter 8, Project 7
 */

#include <stdio.h>

#define NUM_COLS 5
#define NUM_ROWS 5

int main(void) {
  int matrix[NUM_ROWS][NUM_COLS] = {0};

  for(int i = 0; i < NUM_ROWS; i++) {
    printf("Enter row %d: ", i + 1);
    scanf(
      "%d %d %d %d %d",
      &matrix[i][0],
      &matrix[i][1],
      &matrix[i][2],
      &matrix[i][3],
      &matrix[i][4]
    );
  }

  printf("Row totals:");
  for (int i = 0; i < NUM_ROWS; i++) {
    int total = 0;
    for (int j = 0; j < NUM_COLS; j++) {
      total += matrix[i][j];
    }
    printf(" %d", total);
  }
  printf("\n");

  printf("Column totals:");
  for (int i = 0; i < NUM_COLS; i++) {
    int total = 0;
    for (int j = 0; j < NUM_ROWS; j++) {
      total += matrix[j][i];
    }
    printf(" %d", total);
  }
  printf("\n");

  return 0;
}

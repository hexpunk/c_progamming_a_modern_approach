/*
 * C Programming: A Modern Approach
 * Chapter 8, Project 8
 */

#include <stdio.h>

#define NUM_COLS 5
#define NUM_ROWS 5

int main(void) {
  int matrix[NUM_ROWS][NUM_COLS] = {0};

  for(int i = 0; i < NUM_ROWS; i++) {
    printf("Enter scores for student %d: ", i + 1);
    scanf(
      "%d %d %d %d %d",
      &matrix[i][0],
      &matrix[i][1],
      &matrix[i][2],
      &matrix[i][3],
      &matrix[i][4]
    );
  }

  for (int i = 0; i < NUM_ROWS; i++) {
    printf("Student %d:\n", i + 1);

    int total = 0;
    for (int j = 0; j < NUM_COLS; j++) {
      total += matrix[i][j];
    }

    printf("\tTotal score: %d\n", total);
    printf("\tAverage score: %f\n\n", (float) total / NUM_COLS);
  }
  printf("\n");

  for (int i = 0; i < NUM_COLS; i++) {
    printf("Quiz %d:\n", i + 1);

    int high = matrix[0][0], low = matrix[0][0], total = 0;
    for (int j = 0; j < NUM_ROWS; j++) {
      int current = matrix[j][i];

      total += current;

      if (current > high) {
        high = current;
      }

      if (current < low) {
        low = current;
      }
    }

    printf("\tHighest score: %d\n", high);
    printf("\tLowest score: %d\n", low);
    printf("\tAverage score: %f\n\n", (float) total / NUM_ROWS);
  }

  return 0;
}

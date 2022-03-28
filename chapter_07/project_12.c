/*
 * C Programming: A Modern Approach
 * Chapter 7, Project 12
 */

#include <stdio.h>

int main(void) {
  float main, value;
  char operator;

  printf("Enter an expression: ");
  scanf("%f", &main);

  while((operator = getchar()) != '\n') {
    scanf("%f", &value);

    switch (operator) {
      case '+':
        main += value;
        break;

      case '-':
        main -= value;
        break;

      case '*':
        main *= value;
        break;

      case '/':
        main /= value;
        break;
    }
  }

  printf("Value of expression: %f\n", main);

  return 0;
}

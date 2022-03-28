/*
 * C Programming: A Modern Approach
 * Chapter 2, Project 4
 */

#include <stdio.h>

int main(void) {
  float tax = 0.05f;

  float amount;
  printf("Enter an amount: ");
  scanf("%f", &amount);

  printf("With tax added: $%.2f\n", amount + (amount * tax));

  return 0;
}

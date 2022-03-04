/*
 * C Programming: A Modern Approach
 * Chapter 5, Project 5
 */

#include <stdio.h>

int main(void) {
  float income;
  printf("Enter your taxable income: ");
  scanf("%f", &income);

  float tax_amount;
  if (income < 750.00f) {
    tax_amount = 0.01f * income;
  } else if (income <= 2250.00f) {
    tax_amount = 7.50f + (0.02f * (income - 750.00f));
  } else if (income <= 3750.00f) {
    tax_amount = 37.50f + (0.03f * (income - 2250.00f));
  } else if (income <= 5250.00f) {
    tax_amount = 82.50f + (0.04f * (income - 3750.00f));
  } else if (income <= 7000.00f) {
    tax_amount = 142.50f + (0.05f * (income - 5250.00f));
  } else {
    tax_amount = 230.00f + (0.06f * (income - 7000.00f));
  }

  printf("Tax due: %.2f\n", tax_amount);

  return 0;
}

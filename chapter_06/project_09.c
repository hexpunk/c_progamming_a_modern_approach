/*
 * C Programming: A Modern Approach
 * Chapter 6, Project 9
 */

#include <stdio.h>

int main(void) {
  float amount;
  printf("Enter amount of loan: ");
  scanf("%f", &amount);

  float interest_rate;
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  float monthly_payment;
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  int payments;
  printf("Enter number of payments to display: ");
  scanf("%d", &payments);

  float monthly_interest_percentage = (interest_rate / 100.0f) / 12.0f;

  for (int i = 1; i <= payments; i++) {
    amount += amount * monthly_interest_percentage;
    amount -= monthly_payment;
    printf("\nBalance remaining after payment %d: $%.2f\n", i, amount);
  }

  return 0;
}

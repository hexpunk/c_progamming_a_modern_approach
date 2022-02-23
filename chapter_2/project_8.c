/*
 * C Programming: A Modern Approach
 * Chapter 2, Project 8
 */

#include <stdio.h>

int main(void) {
  float amount;
  printf("Enter amount of loan: ");
  scanf("%f", &amount);

  float interest_rate;
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  float monthly_interest_percentage = (interest_rate / 100.0f) / 12.0f;

  float monthly_payment;
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  printf("\n");

  amount += amount * monthly_interest_percentage;
  amount -= monthly_payment;
  printf("Balance remaining after first payment: $%.2f\n", amount);

  amount += amount * monthly_interest_percentage;
  amount -= monthly_payment;
  printf("Balance remaining after second payment: $%.2f\n", amount);

  amount += amount * monthly_interest_percentage;
  amount -= monthly_payment;
  printf("Balance remaining after third payment: $%.2f\n", amount);

  return 0;
}

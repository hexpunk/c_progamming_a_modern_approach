/*
 * C Programming: A Modern Approach
 * Chapter 5, Project 3
 */

#include <stdio.h>

int main(void) {
  int shares;
  printf("Enter number of shares: ");
  scanf("%d", &shares);

  float price;
  printf("Enter price per share: ");
  scanf("%f", &price);

  float value = price * shares;

  float commission;
  if (value < 2500.00f) {
    commission = 30.00f + (0.017f * value);
  } else if (value < 6250.00f) {
    commission = 56.00f + (0.0066f * value);
  } else if (value < 20000.00f) {
    commission = 76.00f + (0.0034f * value);
  } else if (value < 50000.00f) {
    commission = 100.00f + (0.0022f * value);
  } else if (value < 500000.00f) {
    commission = 155.00f + (0.0011f * value);
  } else {
    commission = 255.00f + (0.0009f * value);
  }

  if (commission < 39.00f) {
    commission = 39.00f;
  }

  printf("Commission: $%.2f\n", commission);

  float rival_commission = 33.00f + ((shares < 2000 ? 0.03f : 0.02f) * shares);

  printf("Rival's commission: $%.2f\n", rival_commission);

  return 0;
}

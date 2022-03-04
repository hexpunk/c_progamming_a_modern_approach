/*
 * C Programming: A Modern Approach
 * Chapter 3, Project 2
 */

#include <stdio.h>

int main(void) {
  int item_number;
  printf("Enter item number: ");
  scanf("%d", &item_number);

  float unit_price;
  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  int day, month, year;
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\t\t\tUnit\t\t\tPurchase\n");
  printf("\t\t\tPrice\t\t\tDate\n");
  printf("%d\t\t\t$%7.2f\t\t%d/%d/%d\n", item_number, unit_price, month, day, year);

  return 0;
}

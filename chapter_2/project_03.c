/*
 * C Programming: A Modern Approach
 * Chapter 2, Project 3
 */

#include <stdio.h>

int main(void) {
  float r;
  printf("Enter the radius of the sphere: ");
  scanf("%f", &r);

  float volume = (4.0f / 3.0f) * 3.14159f * (r * r * r);
  printf("The volume of the sphere is %f m^3\n", volume);

  return 0;
}

/*
 * C Programming: A Modern Approach
 * Chapter 3, Project 5
 */

#include <stdio.h>

int main(void) {
  int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15;
  printf("Enter the number from 1 to 16 in any order:\n");
  scanf(
    "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
    &i0, &i1, &i2, &i3,
    &i4, &i5, &i6, &i7,
    &i8, &i9, &i10, &i11,
    &i12, &i13, &i14, &i15
  );

  int rsum0 = i0 + i1 + i2 + i3;
  int rsum1 = i4 + i5 + i6 + i7;
  int rsum2 = i8 + i9 + i10 + i11;
  int rsum3 = i12 + i13 + i14 + i15;

  int csum0 = i0 + i4 + i8 + i12;
  int csum1 = i1 + i5 + i9 + i13;
  int csum2 = i2 + i6 + i10 + i14;
  int csum3 = i3 + i7 + i11 + i15;

  int dsum0 = i0 + i5 + i10 + i15;
  int dsum1 = i3 + i6 + i9 + i12;

  printf("\n");
  printf("%2d %2d %2d %2d\n", i0, i1, i2, i3);
  printf("%2d %2d %2d %2d\n", i4, i5, i6, i7);
  printf("%2d %2d %2d %2d\n", i8, i9, i10, i11);
  printf("%2d %2d %2d %2d\n", i12, i13, i14, i15);
  printf("\n");
  printf("Row sums: %d %d %d %d\n", rsum0, rsum1, rsum2, rsum3);
  printf("Column sums: %d %d %d %d\n", csum0, csum1, csum2, csum3);
  printf("Diagonal sums: %d %d\n", dsum0, dsum1);

  return 0;
}

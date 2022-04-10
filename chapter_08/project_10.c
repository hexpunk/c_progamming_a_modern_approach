/*
 * C Programming: A Modern Approach
 * Chapter 8, Project 10
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_FLIGHTS 8

int main(void) {
  int departures[NUM_FLIGHTS] = {
    8 * 60,               //  8:00am
    (9 * 60) + 43,        //  9:43am
    (11 * 60) + 19,       // 11:19am
    (12 * 60) + 47,       // 12:47pm
    (12 + 2) * 60,        //  2:00pm
    ((12 + 3) * 60) + 45, //  3:45pm
    (12 + 7) * 60,        //  7:00pm
    ((12 + 9) * 60) + 45, //  9:45pm
  };

  int arrivals[NUM_FLIGHTS] = {
    (10 * 60) + 16,        // 10:16am
    (11 * 60) + 52,        // 11:52am
    ((12 + 1) * 60) + 31,  //  1:31pm
    (12 + 3) * 60,         //  3:00pm
    ((12 + 4) * 60) + 8,   //  4:08pm
    ((12 + 5) * 60) + 55,  //  5:55pm
    ((12 + 9) * 60) + 20,  //  9:20pm
    ((12 + 11) * 60) + 58, // 11:58pm
  };

  int hours, minutes;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  int elapsed = (hours * 60) + minutes;
  int closest = 0;
  int lowest_diff = 24 * 60;

  for (int i = 0; i < NUM_FLIGHTS; i++) {
    int diff = abs(departures[i] - elapsed);

    if (diff < lowest_diff) {
      lowest_diff = diff;
      closest = i;
    }
  }

  printf("Closest departure time is ");

  bool pm = false;

  hours = departures[closest] / 60;
  minutes = departures[closest] % 60;
  if (hours > 12) {
    pm = true;
    hours -= 12;
  }

  printf("%d:%d %c.m., arriving at ", hours, minutes, pm ? 'p' : 'a');

  pm = false;  // reset pm flag

  hours = arrivals[closest] / 60;
  minutes = arrivals[closest] % 60;
  if (hours > 12) {
    pm = true;
    hours -= 12;
  }

  printf("%d:%d %c.m.\n", hours, minutes, pm ? 'p' : 'm');

  return 0;
}

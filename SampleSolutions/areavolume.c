#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

/*
Write a program that reads in a single character either 'A' (area) or 'V' (volume) followed by the radius of a sphere, in
meters, and calculates and outputs the area of that sphere, in square meters OR volume of that sphere, in cubic meters based on the character read. The area of a sphere is given by 4 pi r^2 and the volume of a sphere of radius r is given by 4/3 pi r^3 (pi = 3.14159). 

Example test case #1:
Enter A/V followed by radius (m) here: A7
r = 7.00 meters so the area of a sphere is 615.75 square meters.

Example test case #2:
Enter A/V followed by radius (m) here: V7
r = 7.00 meters so the volume of a sphere is 1436.75 cube meters.

Example test case #3:
Enter A/V followed by radius (m) here: C4
r = 4.00 but the character read is neither 'A' or 'V'!

Example test case #4:
Enter A/V followed by radius (m) here: xd
Wrong input format!

*/

int main() {
  printf("Enter A/V followed by radius (m) here: ");
  char unit;
  double r;
  if ((scanf("%c%lf", &unit, &r) != 2)){
	  printf("Wrong input format!\n");
	  exit(EXIT_FAILURE);
  }

  if (unit == 'A'){
	  double area = 4 * PI * r * r;
	  printf("r = %.2f meters so the area of a sphere is %.2f square meters.\n", r, area);
  }
  else if (unit == 'V'){
	  double volume = 4 / 3.0 * PI * r * r * r;
	  printf("r = %.2f meters so the volume of a sphere is %.2f cube meters.\n", r, volume);
  }
  else{
	  printf("r = %.2f but the character read is neither 'A' or 'V'!\n", r);
  }

  return 0;
}
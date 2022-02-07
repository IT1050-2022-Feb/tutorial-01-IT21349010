/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int no1,no2;
	float average;
	
	printf("Enter the mark of module: ");
	scanf("%d", &no1);
	printf("Enter the mark of module: ");
	scanf("%d", &no2);
	
	average = (no1 + no2) / 2;
	printf("Average is %.2f\n",average);
  
  return 0;
}


/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>

int main()
{
	int mark1, mark2, tot = 0;
	float ave = 0;
	
	printf("Enter the marks of the first subject: ");
	scanf("%d", &mark1);
	
	printf("Enter the marks of the second subject: ");
	scanf("%d", &mark2);
	
	tot = mark1 + mark2;
	ave = tot / 2.0;
	
	printf("Your average marks : %.2f", ave);
	
	return 0;
		
}


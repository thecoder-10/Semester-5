#include<stdio.h>

int main() 
{
	int a, b, sum, diff;

	printf("\nEnter 2 Numbers: ");
	scanf("%d %d", &a, &b);

	sum = a + b;
	diff = a - b;
	
	printf("Sum of the numbers: %d", sum);
	printf("\nDifference of the numbers: %d", diff);
	
	return(0);
}
#include <stdio.h>

int main()
{
	int integer1;
	int integer2;

	int sum;

	printf("Enter first integer\n");
	scanf_s("%d", &integer1);

	printf("Enter second integer\n");
	scanf_s("%d", &integer2);

	sum = integer1 + integer2;

	printf("Sum is %d\n", sum);
	
	return 0;
}
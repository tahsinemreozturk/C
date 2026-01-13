#include <stdio.h>

int main()
{
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	printf("\n");

	for (int i = 1; i <= number; i++)
	{
		for (int b = 1; b <= i; b++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}

	printf("\n");

	for (int a = 1; a <= number; a++)
	{
		for (int c = number; c >= a; c--)
		{
			printf("%d ", a);
		}
		printf("\n");
	}

	printf("\n");
}

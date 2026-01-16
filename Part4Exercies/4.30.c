#include <stdio.h>

int main()
{
	int i, j, number;

	printf("Enter a integer: ");
	scanf("%d", &number);

	for (i = 1; i <= number; i++)
	{
		for (j = 0; j < number - i; j++)
		{
			printf(" ");
		}

		for (j = 0; j < i; j++)
		{
			printf("* ");
		}

		printf("\n");

	}

	for (i = 0; i < number; i++)
	{

		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}


		for (j = 1; j < number - i; j++)
		{
			printf("* ");
		}
		printf("\n");

	}

	return 0;
}


#include <stdio.h>

int main()
{
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	printf("\n\n");

	for (int k = 0; k < number; k++)
	{
		printf("* ");
	}
	printf("\n");

	for (int u = 0; u < number - 2; u++)
	{
		for (int l = 0; l < number; l++)
		{
			if (l == 0 || l == number - 1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}

		}
		printf("\n");
	}

	for (int m = 0; m < number; m++)
	{
		printf("* ");
	}
	printf("\n");
}
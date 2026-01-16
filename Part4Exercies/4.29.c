#include <stdio.h>

int main()
{
	int i, j, number;

	printf("Enter an integer: ");
	scanf("%d", &number);


	for (i = 0; i < number; i++)
	{

		for (j = 0; j < i; j++)
		{
			printf(" ");
		}


		for (j = 0; j < number - i ; j++)
		{
			printf("* ");
		}
		printf("\n");

	}

	return 0;
}


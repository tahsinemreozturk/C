#include <stdio.h>

int main()
{
	int i, j;
	char input, character = 'A';

	printf("Enter an uppercase letter: ");
	scanf("%c", &input);

	for (i = 0; i < input - 'A' + 1; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%c", character);
		}
		character++;
		printf("\n");
	}

	return 0;
}
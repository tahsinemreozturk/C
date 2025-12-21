#include <stdio.h>

int main()
{
	int count;
	int value;
	int minValue;

	printf("How many numbers will you enter? ");

	if (scanf_s("%d", &count) != 1 || count <= 0)
	{
		printf("Invalid input.\n");
		return 1;
	}

	printf("Enter number 1: ");
	scanf_s("%d", &value);
	minValue = value;


	for (int i = 2; i <= count; i++)
	{
		printf("Enter number %d: ", i);
		scanf_s("%d", &value);

		if (value < minValue)
		{
			minValue = value;
		}
	}

	printf("The smallest number is: %d\n", minValue);
	return 0;

}
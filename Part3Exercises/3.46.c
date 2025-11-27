#include <stdio.h>

int main()
{
	long long int worldPopulation = 8231613070;
	float growthRate = 0.9 / 100;
	int year;
	int i = 0;

	printf("Please enter how many years of population calculation you would like to have done: ");
	scanf_s("%d", &year);

	while (i < year)
	{
		worldPopulation = worldPopulation + (worldPopulation * growthRate);
		i++;
	}

	printf("The world population after %d years will be approximately: %lld\n", year, worldPopulation);

	return 0;
}
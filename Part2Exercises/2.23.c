#include <stdio.h>

int main(void) 
{	
	printf("This program calculates the largest and smallest of the three integers entered.\n");

	int int1, int2, int3;

	printf("Enter Three Integers:\n");
	scanf_s("%d%d%d", &int1, &int2, &int3);

	if (int1<int2)
	{
		if (int1<int3)
		{	
			printf("Smallest is %d\n", int1);
		}
	}
	if (int2 < int1)
	{
		if (int2 < int3)
		{
			printf("Smallest is %d\n", int2);
		}
	}
	if (int3 < int2)
	{
		if (int3 < int1)
		{
			printf("Smallest is %d\n", int3);
		}
	}
	if (int1 > int2)
	{
		if (int1 > int3)
		{
			printf("Biggest is %d\n", int1);
		}
	}
	if (int2 > int1)
	{
		if (int2 > int3)
		{
			printf("Biggest is %d\n", int2);
		}
	}
	if (int3 > int2)
	{
		if (int3 > int1)
		{
			printf("Biggest is %d\n", int3);
		}
	}

	if (int1 == int2 && int2==int3)
	{
		printf("All integers to equals");
	}

}
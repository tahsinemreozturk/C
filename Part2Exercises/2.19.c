#include <stdio.h>

int main(void) 
{	
	int int1, int2, int3;
	int sum, average, product, smallest, largest;

	printf("Please Enter Three Different Integers\n");

	scanf_s("%d%d%d", &int1, &int2, &int3);

	printf("Numbers Entered: %d %d %d\n", int1, int2, int3);

	sum = int1 + int2 + int3;
	average = (int1 + int2 + int3) / 3;
	product = int1 * int2 * int3;
	
	printf("Sum is %d\n", sum);
	printf("Average is %d\n", average);
	printf("Product is %d\n", product);

	if (int1 < int2) {
		if (int1 < int3) {
			printf("Smallest is %d\n", int1);
		}
	}
	if (int2 < int1) {
		if (int2 < int3) {
			printf("Smallest is %d\n", int2);
		}
	}
	if (int3 < int2) {
		if (int3 < int1) {
			printf("Smallest is %d\n", int3);
		}
	}

	if (int1 > int2) {
		if (int1 > int3) {
			printf("Largest is %d\n", int1);
		}
	}
	if (int2 > int1) {
		if (int2 > int3) {
			printf("Largest is %d\n", int2);
		}
	}
	if (int3 > int2) {
		if (int3 > int1) {
			printf("Largest is %d\n", int3);
		}
	}



}
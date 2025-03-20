#include <stdio.h>

int main(void) 
{
	int c, thisVariable, q76354, number;

	printf("Please Enter An Integer: \n");
	scanf_s("%d", &number);

	printf("Enter An Integer For The a Value \n");
	int a;
	scanf_s("%d", &a);
	printf("a:%d\n", a);

	if (number != 7) {
		printf("The variable number is not 7.\n\n\n\n");
	}

	printf("This is a C program.\n\n\n");
	printf("This is a C\nprogram.\n\n\n");
	printf("This\nis\na\nC\nprogram.\n\n\n");
	printf("This\tis\ta\tC\tprogram.\n\n\n");

	return 0;

}
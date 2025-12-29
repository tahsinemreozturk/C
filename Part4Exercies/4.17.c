#include <stdio.h>

int main()
{
	int maxDebt = 1500;
	int customerNo;
	float creditLimit, debt;

	printf("Enter your customer number: ");
	scanf("%d", &customerNo);
	printf("Enter your credit limit: ");
	scanf("%f", &creditLimit);
	printf("Enter your current debt: ");
	scanf("%f", &debt);

	if (debt > maxDebt)
	{
		creditLimit = creditLimit / 2;
		printf("Dear customer %d, your credit limit has been halved because your debt exceeds the maximum debt limit. Your new credit limit: %.2f\n\n", customerNo, creditLimit);
	}

	printf("Dear customer %d, your current credit limit is %.2f, your current debt is %.2f.\n\n", customerNo, creditLimit, debt);

	return 0;
}
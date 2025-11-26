#include <stdio.h>

int main()
{
	printf("Faktoriyel hesaplayan program\n");

	int n;
	int a = 0;
	long long int faktoriyel = 1;

	printf("Bir sayi giriniz: ");
	scanf_s("%d", &n);

	if (n > 0)
	{
		while (n - a > 0)
		{
			faktoriyel = faktoriyel *  (n - a);
			a++;
		}
		printf("Faktoriyel sonucu: %lld\n", faktoriyel);
	}
	else if (n == 0)
	{
		printf("0! = 1\n");
	}
	else
	{
		printf("Negatif sayilarin faktoriyeli hesaplanamaz.\n");
	}
		
}

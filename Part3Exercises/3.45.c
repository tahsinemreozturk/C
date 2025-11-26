#include <stdio.h>

int main()
{
	/*printf("Faktoriyel hesaplayan program\n");

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
	}*/
		

	// e sabitinin degerini tahmin eden program.

	int n, i;
	double e = 1.0;
	double factorial = 1.0;

	printf("e icin kac terim hesaplansin ? (Bir pozitif tam sayi degeri giriniz) : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		factorial = factorial * i; // i! hesaplama
		e = e + 1.0 / factorial;    // e'ye i!'nin tersi ekleme
	}

	printf("e sayisinin tahmini degeri: %lf\n", e);





}

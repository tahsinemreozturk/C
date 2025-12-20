#include <stdio.h>

int main()
{
	int x;				// Kullanýcýdan girilen sayýlar
	int toplam = 0;		// Sayilarin toplami
	int sayac = 0;		// Girilen sayi adedi
	float ortalama;		// Hesaplanacak ortalama


	while (1) // 1 ile sonsuz dongu
	{
		printf("Enter an integer (9999 to finish): ");
		scanf_s("%d", &x);

		if (x == 9999) // Bitirme koþulu
		{
			break; // Donguden cikaran kisim
		}

		toplam += x;
		sayac++;
	}


	// En az bir sayi girildiyse ortalamayi hesapla ve yazdir
	if (sayac > 0) 
	{
		ortalama = (float)toplam / sayac;
		printf("Average of the numbers: %.2f\n", ortalama);

	}
	// Hiç sayi girilmediyse mesaj ver
	else {
		printf("No numbers entered.\n");

	}

	return 0;

}
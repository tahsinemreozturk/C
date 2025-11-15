#include <stdio.h>

int main()
{
	int number;
	int decimal = 0;
	int base = 1; // 2^0 2^1 2^2 2^3 ... icin

	int temp;
	int isBinary;

	printf("0 ve 1`lerden olusan en fazla 5 basamakli bir sayi giriniz: ");
	scanf_s("%d", &number);

	while (1) // sonsuz dongu icin 1 degerini verdik. Istenmeyen durum disinda surekli calisacak
		      // bu dongu icibde break; ifadesini gorene kadar calisacaktir.
	{
		temp = number;
		isBinary = 1; // girilen dogru oldugunda dongudan cikis icin isBinary = 1 dedik.

		if (number < 0 || number > 11111) // En fazla 5 basamakli mi degil mi kontrolu
		{
			isBinary = 0; // eger istenilenden farkli deger girilirse isBinary` e 0 degerini atadik
		}

		while (temp > 0) // girilinen 0 ve 1`lerden olusup olusmadigini kontrol ediyoruz.
		{
			int sonBasamak = temp % 10; //son basamak degerini alir.
			if (sonBasamak != 0 && sonBasamak != 1) // istenilen sayilar dahilinde mod 10 degeri ya 0 ya 1 olabilir 
			{
				isBinary = 0; // mod 10 yapildiginda 0 ve 1 den farkli deger olursa isBinary` e 0 atanir.
				break;
			}
			temp /= 10; // diger basamaklari kontrol icin her seferinde bir basamak azaltir.
		}
		if (isBinary) // eger sayi istenildigi gibiyse while dongusunu sonlandirmak icin break calisacak.
			break;

		// eger bir onceki girilen sayi gecersizse tekrardan yeni bir sayi girdisi istenir

		printf("HATALI GIRIS yaptiniz. Lutfen yalnizca 0 ve 1 den olusan en fazla 5 basamakli bir sayi giriniz: ");
		scanf_s("%d", &number);
	}



	while (number > 0)
	{
		int digit = number % 10; // ilk basamak
		decimal += digit * base; // 1*1 0*2 1*4...

		base *= 2;  // 1 -> 2 -> 4 -> 8 ->.. ikinin kuvvetleri
		number /= 10; // bir sonraki basamaga gecis
	}

	printf("Girilen sayinin onluk tabandaki karsiligi: %d\n", decimal);

	return 0;
}

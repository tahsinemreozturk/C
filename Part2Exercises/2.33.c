#include <stdio.h>

int main(void)
{
	int masraf,yol, benzinFiyat, ortalamaYakitTuketim, parkUcreti, otobanUcreti;

	printf("Gunluk surdugunuz yol mesafesini giriniz: \n");
	scanf_s("%d", &yol);

	printf("Benzin fiyatini giriniz: \n");
	scanf_s("%d", &benzinFiyat);

	printf("Ortalama yakit tuketim miktarinizi giriniz: \n");
	scanf_s("%d", &ortalamaYakitTuketim);

	printf("Gunluk park masrafinizi giriniz: \n");
	scanf_s("%d", &parkUcreti);

	printf("Gunluk otoban gecis ucretini giriniz: \n");
	scanf_s("%d", &otobanUcreti);

	masraf = ((yol / 100) * benzinFiyat * ortalamaYakitTuketim) + parkUcreti + (otobanUcreti * 2);

	printf("Bir gunluk ise gidis gelis masrafiniz: %d\n\n\n", masraf);

	return 0;

}
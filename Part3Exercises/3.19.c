
#include <stdio.h>

int main()
{
	printf("Faiz Hesaplayici \n");

	float anapara, faizOrani, faizTutari, islenenGun;

	printf("Anapara Miktarini Giriniz: ");
	scanf_s("%f", &anapara);
	printf("Faiz Oranini Yuzde Olarak Giriniz (ornegin %5 icin 5): ");
	scanf_s("%f", &faizOrani);
	printf("Islenen Gun Sayisini Giriniz: ");
	scanf_s("%f", &islenenGun);

	faizTutari = anapara * (faizOrani / 100) * (islenenGun / 365);

	printf("Islenen Faiz Tutari: %.2f \n", faizTutari);

	anapara += faizTutari;
	printf("Toplam Tutar: %.2f \n", anapara);

	return 0;



}
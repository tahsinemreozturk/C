
//#include <stdio.h>
//
//int main()
//
//{
//	printf("$$$ Kredi Karti Limiti Hesaplayici $$$\n");
//
//	int hesapNumarasi;
//	float  yatirilanPara, baslangicBorcu, harcananPara, krediLimiti, guncelBorc;
//
//	printf("Hesap Numaranizi Giriniz: ");
//	scanf_s("%d", &hesapNumarasi);
//	printf("Baslangic Borcunuzu Giriniz: ");
//	scanf_s("%f", &baslangicBorcu);
//	printf("Toplam Guncel Harcamanizi Giriniz: ");
//	scanf_s("%f", &harcananPara);
//	printf("Yatirdiginiz Guncel Miktari Giriniz: ");
//	scanf_s("%f", &yatirilanPara);
//	printf("Kredi Karti Limitinizi Giriniz: ");
//	scanf_s("%f", &krediLimiti);
//
//	guncelBorc = baslangicBorcu + harcananPara - yatirilanPara;
//
//	printf("\n----------------------------------------\n");
//
//	if (krediLimiti < guncelBorc)
//	{
//		printf("Kredi limiti asilmis. \n");
//		printf("Borcunuz: %.2f TL ", guncelBorc);
//		printf("Kalan Limitiniz: %.2f TL\n", krediLimiti - guncelBorc);
//	}
//	else
//	{
//		printf("Kredi limiti asilmamis. \n");
//		printf("Borcunuz: %.2f TL ", guncelBorc);
//		printf("Kalan Limitiniz: %.2f TL\n", krediLimiti - guncelBorc);
//	}
//	 
//	return 0;
//}
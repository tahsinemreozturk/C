//#include <stdio.h>
//
//int main()
//{
//
//	printf("Girilen 10 sayinin en buyuk ikisini bulan program\n");
//	
//	int girilen, buyuk, buyuk2, i;
//	buyuk = buyuk2 = 0;
//
//	i = 0;
//
//	while (i < 10)
//	{
//		printf("Bir pozitif tam sayi giriniz: ");
//		scanf_s("%d", &girilen);
//		i++;
//
//		if (girilen > buyuk)
//		{
//			buyuk2 = buyuk; //i forgot this
//			buyuk = girilen;
//		}
//
//		else if (girilen > buyuk2)
//			buyuk2 = girilen;
//
//	}
//	printf("Girilen en buyuk iki sayi %d ve %d\n", buyuk, buyuk2);
//
//}
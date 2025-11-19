//#include <stdio.h>
//
//int main()
//{
//	int number;
//	int count = 0;
//
//	printf("5 ya da daha az basamakli bir sayi girin: ");
//	scanf_s("%d", &number); 
//
//	while (number != 0) // --> Tum basamaklar islenene kadar devam eder.
//	{
//		int basamak = number % 10;	// --> Mevcut son basamak degerini alir.
//		if (basamak == 7)
//		{
//			count++;
//		}
//		number = number / 10; // --> bir basamak azaltir.
//	}
//
//	printf("Sayida %d tane 7 vardir.\n", count);
//
//}
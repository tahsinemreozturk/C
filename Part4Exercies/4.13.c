//
//// HATALI KOD
//
///* #include <stdio.h>
//
//int main()
//{
//	int x = 1;
//
//	for (int a = 1; a <= 15; a++) {
//		x++;
//		if (x % 2 != 0 )
//		{
//			int temp = 1;
//			int carpim = 1;
//			carpim = carpim * temp * x;
//		}
//	}
//}
//*/
//
//// DOGRU KOD
// 
//#include <stdio.h>
//
//int main()
//{
//	int carpim = 1;
//
//	for (int i = 1; i <= 15; i++)
//	{
//		if (i % 2 != 0)   // tek sayý kontrolü
//		{
//			carpim *= i;
//		}
//	}
//
//	printf("1'den 15'e kadar tek sayilarin carpimi: %d\n", carpim);
//
//	return 0;
//}

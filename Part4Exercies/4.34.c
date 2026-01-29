//#include <stdio.h>
//
//int main()
//{
//	int i, j, obeb = 0, okek = 0, smallestNumber;
//
//	printf("OBEB'i ve OKEK'i bulunacak iki sayi girin: ");
//	scanf("%d %d", &i, &j);
//
//	if(i<j)
//		smallestNumber = i;
//	else
//		smallestNumber = j;
//
//	for (int k = 2; k <= smallestNumber; k++)
//	{
//		if ((i % k == 0) && (j % k == 0))
//		{
//			obeb = k;
//		}
//
//	}
//	if (obeb != 0)
//	{
//		okek = obeb * i / obeb * j / obeb;
//		printf("%d ve %d sayilarinin OBEB: %d\nOKEK: %d\n",i,j ,obeb, okek);
//	}
//	else
//	{
//		okek = i * j;
//		printf("%d ve %d sayilarinin OBEB: %d\nOKEK: %d\n", i, j, obeb, okek);
//	}
//		
//	return 0;
//}
//

//#include <stdio.h>
//
//int main()
//{
//
//	int x, y, z;
//	int a, b, c; // a ve b kucukler, c en buyuk olacak. Yani hipotenus degeri.
//
//	printf("Girilen 3 degerin dik ucgen saglayip saglamadigini hesaplayan program\n\n\n");
//
//	printf("3 Pozitif Tam Sayi Giriniz: ");
//	scanf_s("%d %d %d", &a, &b, &c);
//
//
//	if (a >= b && a >= c)
//	{
//		z = a; 
//		x = b;
//		y = c;
//	}
//	else if (b >= a && b >= c)
//	{
//		z = b;
//		x = a;
//		y = c;
//	}
//	else
//	{
//		z = c;
//		x = a;
//		y = b;
//	}
//
//
//	if (x > 0 && y > 0 && z > 0)
//	{
//		if ((x * x) + (y * y) == (z * z))
//		{
//			printf("Girilen %d, %d, %d sayilari bir dik ucgen olusturabilir.\n", x, y, z);
//		}
//		else
//		{
//			printf("Girilen %d, %d, %d sayilari bir dik ucgen olusturamaz.\n", x, y, z);
//		}
//	}
//
//	return 0;
//}
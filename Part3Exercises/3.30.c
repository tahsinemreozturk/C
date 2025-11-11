//#include <stdio.h>
//
//int main()
//{
//	int x, y;
//	x = 9;
//	y = 11;
//
//	if (x < 10)
//		if (y > 10)
//			puts("*****");
//		else
//			puts("####");
//	puts("$$$$\n\n");
//
//	if (x < 10) {
//		if (y > 10)
//			puts("****");
//	}
//	else {
//		puts("####");
//		puts("$$$$");
//	}
//	// Bu ornek, else ifadesinin hangi if'e baglandigini 
//	// (dangling else problemi) gostermek icin yazilmistir. 
//	// Ýc ice if yapisinda suslu parantez kullanilmazsa 
//	// else en yakin if'e baglanir.
//}
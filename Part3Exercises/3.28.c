//#include <stdio.h>
//
//int main(void)
//{
//	unsigned int count = 1;
//
//	while (count <= 10)
//	{
//		puts(count % 2 ? "****" : "++++++++");
//		++count;
//	}
//
//}
///*
//* Buradaki count % 2 kısmı şu şekilde çalışır:
//
//Eğer sonuç 1 (veya başka bir sıfır olmayan değer) → true sayılır → "****" seçilir.
//
//Eğer sonuç 0 → false sayılır → "++++++++" seçilir.
//
//Yani sen “if” gibi açıkça “doğru olursa” demesen bile,
//C dili otomatik olarak sıfır dışındaki her şeyi doğru kabul ediyor.
//* 
//* 
//* puts(count % 2 ? "****" : "++++++++"); Bu fonksiyon asagidaki gibi
//* de yapilabilirdi. 
//* 
//* if (count % 2)
//    puts("****");
//else
//    puts("++++++++");
//*/

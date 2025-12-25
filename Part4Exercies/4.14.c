#include <stdio.h>

int main()

{
	int i;
	long long faktoriyel = 1;
	
	printf("Sayi\tSayinin Faktoriyeli\n");
	printf("----\t-------------------\n");

	for (i = 1; i <= 5; i++)
	{
		faktoriyel *= i;
		printf("%d\t%lld\n", i, faktoriyel);

	}

}

// long long kullanýmý, büyük sayýlarla çalýþýrken taþma riskini azaltýr.	
// int veri tipi , 32-bit sistemlerde genellikle -2,147,483,648 ile 2,147,483,647 arasýnda deðer alabilir.
// Ancak, 13! (faktoriyel) deðeri 6,227,020,800'ü aþar ve bu nedenle int veri tipi ile taþma meydana gelir.
// long long veri tipi ise genellikle -9,223,372,036,854,775,808 ile 9,223,372,036,854,775,807 arasýnda deðer alabilir.
// Bu nedenle, 13! ve üzerindeki faktoriyel deðerlerini doðru bir þekilde depolayabilir ve hesaplayabilir.
// Ancak long long veri tipi kullanýldýðýnda bile, çok büyük sayýlarla çalýþýrken dikkatli olunmalýdýr çünkü belirli bir sýnýr vardýr ve bu sýnýr aþýldýðýnda yine taþma meydana gelebilir.
// Bu nedenle, çok büyük sayýlarla çalýþýrken uygun veri tipini seçmek ve gerektiðinde daha büyük veri tiplerine geçiþ yapmak önemlidir.
// Ayrýca, bazý durumlarda özel kütüphaneler veya veri tipleri (örneðin, GMP kütüphanesi) kullanmak gerekebilir.

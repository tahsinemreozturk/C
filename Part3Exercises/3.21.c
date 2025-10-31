#include <stdio.h>

int main()
{
	printf("Onceden azaltma ile sonradan azaltma arasindaki farki gosteren program\n");

	int a, b;
	a = 13;
	b = 0;

	printf("Baslangicta: a = %d, b = %d\n", a, b);

	// onceden azaltma
	b = --a; // a degeri 1 azaltildiktan sonra b'ye atanir
	printf("Onceden azaltma: a = %d, b = %d\n", a, b);

	a = 13; // a degerini tekrar 13 yapalim
	// sonradan azaltma
	b = a--; // a degeri b'ye atandiktan sonra 1 azaltilir
	printf("Sonradan azaltma: a = %d, b = %d\n", a, b);

	return 0;


}
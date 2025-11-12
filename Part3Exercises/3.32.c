#include <stdio.h>

int main()
{
	int kenar, i,k;
	i = 0;
	k = 0;
	
	printf("Olusturmak istediginiz karenin kenar uzunlugunu giriniz: ");
	scanf_s("%d", &kenar);

	
	while (i < kenar)
	{
		k = 0; // satirlar * basilip bir bir tamamlanirken, * basilmadan atlanilmamasi icin her yeni satirda k degerine 0 atadik.
		while (k < kenar)
		{
			printf("*");
			k++;
		}
		printf("\n");
		i++;
	}

	return 0;	

}
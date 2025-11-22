#include <stdio.h>

int main()
{
	int kenar1, kenar2, kenar3;

	printf("Ucgenin kenar uzunluklarini giriniz: ");
	scanf_s("%d %d %d", &kenar1, &kenar2, &kenar3);

	int fark23 = kenar2 - kenar3;
	int fark13 = kenar1 - kenar3;
	int fark12 = kenar1 - kenar2;

	if (fark23 < 0)
		fark23 = fark23 * -1;
	if (fark13 < 0)
		fark13 = fark13 * -1;
	if (fark12 < 0)
		fark12 = fark12 * -1;


	if ((fark23 < kenar1) && (kenar1 < (kenar2 + kenar3)))
	{
		if ((fark13 < kenar2) && (kenar2 < (kenar1 + kenar3)))
		{
			if ((fark12 < kenar3) && (kenar3 < (kenar1 + kenar2)))
			{
				printf("Girilen degerler Ucgen olusturur.\n");
			}
			else
			{
				printf("Girdiginiz degerler ile ucgen olusamaz.\n");
			}
		}
		else
		{
			printf("Girdiginiz degerler ile ucgen olusamaz.\n");
		}
	}
	else
	{
		printf("Girdiginiz degerler ile ucgen olusamaz.\n");
	}

	return 0;

}
#include <stdio.h>


int main()
{
	unsigned int counter, number, largest;

	printf("Girilen pozitif sayilar arasindan en buyugunu bulan program\n");

	counter = number = largest = 0;
	
	

	while (counter < 10)
	{
		printf("Lutfen pozitif bir tam sayi giriniz: ");
		scanf_s("%u", &number);
		
		counter++;

		if (number > largest)
			largest = number;

	}
	printf("Girilenler arasindan En buyuk sayi: %u", largest);
	

}
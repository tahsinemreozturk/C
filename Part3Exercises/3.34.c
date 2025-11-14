#include <stdio.h>

int main()
{
	int number = 0;


    printf("Palindrom Testi Icin Bes Basamakli Bir sayi giriniz: ");
    scanf_s("%d", &number);

    while (number < 10000 || number > 99999)
    {
        printf("HATALI GIRIS! Lutfen bes basamakli bir sayi giriniz: ");
        scanf_s("%d", &number);

    }
        int basamak1 = number / 10000;          // İlk basamak
        int basamak2 = (number / 1000) % 10;    // İkinci basamak
        int basamak4 = (number / 10) % 10;      // Dördüncü basamak
        int basamak5 = number % 10;             // Son basamak

        if (basamak1 == basamak5 && basamak2 == basamak4)
        {
            printf("%d palindrom bir sayidir.\n", number);
        }
        else
        {
            printf("%d palindrom bir sayi degildir.\n", number);
        }

        return 0;

    
}
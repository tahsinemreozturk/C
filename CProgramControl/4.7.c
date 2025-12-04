/*
    COKLU SECIM (switch) IFADESI NOTLARI
    ------------------------------------

    Bir algoritma bazen belirli sabit tam sayi degerlerine gore farkli islemler yapar.
    Bu durum "coklu secim" olarak adlandirilir. C dilinde coklu secim icin iki yontem vardir:
        1) switch ifadesi
        2) if ... else if ... else yapisi

    switch ifadesi su kisimlardan olusur:
        - switch (degisken)
        - case etiketleri (sabit tumlesik degerler olmak zorundadir)
        - istege bagli default etiketi
        - her etiket icin calisacak ifadeler
        - islemi sonlandiran break deyimi

    switch'in temel mantigi:
        switch (ifade) {
            case sabit1:
                islemler;
                break;

            case sabit2:
                islemler;
                break;

            default:
                islemler;
                break;
        }

    IMPORTANT NOTES (KITAPTAN OGRENILMIS OZETLER)
    ---------------------------------------------

    1) GETCHAR ILE KARAKTER OKUMA
       ----------------------------
       getchar() fonksiyonu kullanicidan bir karakter okur ve bu karakteri tam sayi
       (int) olarak dondurur. Bu sayede EOF (-1) ile karsilastirma yapilabilir.

       Ornek:
            grade = getchar()

       Bu durumda grade degiskenine karakterin ASCII tam sayi karsiligi atanir.

    2) EOF NEDIR VE NEDEN INT KULLANILIR?
       -----------------------------------
       EOF = End Of File anlamina gelir ve akisin bittigini belirtir.
       getchar() basarisiz oldugunda EOF dondurur.

       NOT:
         - EOF her zaman negatif bir tam sayidir (genellikle -1).
         - Bu nedenle grade degiskenini CHAR DEGISKENI DEGIL, INT DEGISKENI yapmamiz gerekir.

       Ornek:
            while ((grade = getchar()) != EOF)

       Bu dongu, kullanici Ctrl + D (Linux/Mac) veya Ctrl + Z + Enter (Windows)
       girene kadar devam eder.

    3) SWITCH CASE - KARAKTERLER SABIT TUMLESIKTIR
       --------------------------------------------
       case etiketleri sabit tumlesik (constant expression) olmak zorundadir.
       Yani case 'A', case 5 gibi sabit bir deger kullanilabilir.

       O yuzden asagidaki gibi bir sey yapilamaz:
            char x = 'A';
            case x;  // HATALI, cunku sabit degil

    4) BIR CASE ETIKETINI PAYLASMA
       -----------------------------
       case 'A':
       case 'a':
           ++aCount;
           break;

       Bu teknige "fall-through" denir.
       Ilk case break kullanmadigi icin ikinci case'e dogru akar.
       Bu sayede hem 'A' hem 'a' ayni blogu calistirir.

    5) BOSLUK KARAKTERLERINI YOK SAYMA
       --------------------------------
       Kullanici Enter'a bastiginda '\n'
       Tab tusuna bastiginda '\t'
       Bosluk girdiginde ' '

       karakterleri okunur.

       switch icinde bunlari yok saymak icin:

            case '\n':
            case '\t':
            case ' ':
                break;

    6) BREAK KULLANMAK NEDEN ONEMLIDIR?
       ---------------------------------
       C'de switch yapisinda break olmazsa program case etiketinden sonra gelen
       tum etiketleri "asagi dogru akarak" calistirir.

       Bunun adi fall-through'dur.

       Bazilari icin faydalidir, bazilari icin tehlikelidir.
       Degerlerin her biri icin ayri bir islem yapmak istiyorsak break SARTTIR.

    7) DEFAULT DURUMU
       ----------------
       Verilen karakter hicbir case'e uymazsa default calisir.
       Bu durumda hata mesaji veya varsayilan islem yazilir.

*/

#include <stdio.h>

int main()
{
    int grade;                 // getchar EOF kontrolu icin int olmali
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");

    /*
        BURASI PROGRAMIN ANA DONGUSU
        -----------------------------
        getchar() her seferinde bir karakter okur.
        Kullanici Ctrl + D (Linux/Mac) veya Ctrl + Z + Enter (Windows) girince EOF gelir ve dongu biter.
    */
    while ((grade = getchar()) != EOF)
    {
        switch (grade)
        {
        case 'A':
        case 'a':
            ++aCount;
            break;

        case 'B':
        case 'b':
            ++bCount;
            break;

        case 'C':
        case 'c':
            ++cCount;
            break;

        case 'D':
        case 'd':
            ++dCount;
            break;

        case 'F':
        case 'f':
            ++fCount;
            break;

            // BOSLUK VE SEKME KARAKTERLERINI YOK SAY
        case '\n':
        case '\t':
        case ' ':
            break;

        default:
            printf("Incorrect letter grade entered.\n");
            puts("Enter a new grade.");
            break;
        }
    }

    // SONUCLARI EKRANA YAZDIR
    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);

    return 0;
}

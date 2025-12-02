/*
    C Programlama - For Dongusu 
    -----------------------------------
    sayac kontrollu tekrarlama (for dongusu).

    For dongusunun amaci: Belirli sayida tekrar gereken durumlarda
    baslangic, kosul ve artis ifadelerini tek satirda toplayarak
    daha duzenli bir yapi saglamak.

    Yapisi:
        for (baslangic; kosul; artis) {
            // tekrar edecek islemler
        }

    Dongu sirasi:
        1) baslangic (bir kere)
        2) kosul kontrol
        3) govde calisir
        4) artis yapilir
        5) tekrar kosula donulur

    Artisi unutmak --> sonsuz dongu hatasi yaratabilir.
*/

#include <stdio.h>

int main() {

    /* ----------------------------------------------------------
        1. Basit ornek: 1'den 5'e kadar tam sayilari yazdirma
       ---------------------------------------------------------- */

    printf("1'den 5'e kadar sayilar:\n");

    for (int i = 1; i <= 5; i++) {   // i her dongude 1 artiyor
        printf("%d\n", i);
    }


    /* ----------------------------------------------------------
        2. 2'den 100'e kadar olan cift tam sayilarin toplami
       ----------------------------------------------------------

       Mantik:
        - 2'den basla
        - 100'e kadar git
        - her seferinde 2 ekle (sadece cift sayilar)
        - toplam degiskenine ekle
    ---------------------------------------------------------- */

    int sum = 0;

    for (int i = 2; i <= 100; i += 2) {  // sadece cift sayilar
        sum += i;                        // her adimda toplama ekle
    }

    printf("\n2'den 100'e kadar olan cift sayilarin toplami: %d\n", sum);


    /* ----------------------------------------------------------
        3. Dongude artis unutma hatasi ornegi (Yorumda birakildi)
       ----------------------------------------------------------

       Asagidaki gibi bir dongu yazilirsa sonsuz dongu olusur:

       for (int i = 1; i <= 10; ) {
           printf("%d\n", i);
           // i++ unutuldu!
       }

       Bu yuzden artis ifadesini asla unutmamak gerekiyor.
    ---------------------------------------------------------- */


    return 0;
}

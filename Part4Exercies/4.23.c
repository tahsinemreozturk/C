/*
 * "The Twelve Days of Christmas" sarkisini yazdiran program
 *
 * Bu program meshur Noel sarkisini switch ve tekrarlama ifadeleri
 * kullanarak yazdirir. Her gun bir onceki gunlerin hediyelerini
 * de icerir (kumulatif yapi).
 *
 * SARKI YAPISI:
 * =============
 * On the first day of Christmas, my true love gave to me
 * A partridge in a pear tree.
 *
 * On the second day of Christmas, my true love gave to me
 * Two turtle doves, and
 * A partridge in a pear tree.
 *
 * ... ve boyle devam eder (12. gune kadar)
 */

#include <stdio.h>

int main(void) {
    int gun;

    printf("========================================\n");
    printf("  The Twelve Days of Christmas\n");
    printf("========================================\n\n");

    /* Her gun icin dongu */
    for (gun = 1; gun <= 12; gun++) {

        /* Gun basligini yazdir */
        printf("On the ");

        /* Gun numarasini yazdir (first, second, third...) */
        switch (gun) {
        case 1:
            printf("first");
            break;
        case 2:
            printf("second");
            break;
        case 3:
            printf("third");
            break;
        case 4:
            printf("fourth");
            break;
        case 5:
            printf("fifth");
            break;
        case 6:
            printf("sixth");
            break;
        case 7:
            printf("seventh");
            break;
        case 8:
            printf("eighth");
            break;
        case 9:
            printf("ninth");
            break;
        case 10:
            printf("tenth");
            break;
        case 11:
            printf("eleventh");
            break;
        case 12:
            printf("twelfth");
            break;
        }

        printf(" day of Christmas,\nMy true love gave to me\n");

        /* Hediyeleri geri sayarak yazdir (en yeniden en eskiye) */
        /* Switch ifadesinde break KULLANMAYARAK fall-through yapiyoruz */
        /* Bu sayede her gun bir onceki gunlerin hediyelerini de yazdirir */

        switch (gun) {
        case 12:
            printf("Twelve drummers drumming,\n");
        case 11:
            printf("Eleven pipers piping,\n");
        case 10:
            printf("Ten lords a-leaping,\n");
        case 9:
            printf("Nine ladies dancing,\n");
        case 8:
            printf("Eight maids a-milking,\n");
        case 7:
            printf("Seven swans a-swimming,\n");
        case 6:
            printf("Six geese a-laying,\n");
        case 5:
            printf("Five golden rings,\n");
        case 4:
            printf("Four calling birds,\n");
        case 3:
            printf("Three French hens,\n");
        case 2:
            printf("Two turtle doves, and\n");
        case 1:
            /* Ilk gun "a", diger gunler "and a" */
            if (gun == 1) {
                printf("A partridge in a pear tree.\n");
            }
            else {
                printf("A partridge in a pear tree.\n");
            }
            break;
        }

        printf("\n");  /* Gunler arasi bosluk */
    }

    printf("========================================\n");
    printf("         Merry Christmas!\n");
    printf("========================================\n");

    return 0;
}

/*
 * ===================================================================
 * SWITCH IFADESINDE FALL-THROUGH TEKNIGI
 * ===================================================================
 *
 * Bu programin en onemli ozelligi: KASITLI OLARAK break kullanmamak!
 *
 * NORMAL SWITCH KULLANIMI:
 * ------------------------
 * switch (gun) {
 *     case 1:
 *         printf("Hediye 1");
 *         break;  // <-- Buradan cik
 *     case 2:
 *         printf("Hediye 2");
 *         break;  // <-- Buradan cik
 * }
 *
 *
 * FALL-THROUGH TEKNIGI (Bu programda):
 * ------------------------------------
 * switch (gun) {
 *     case 2:
 *         printf("Hediye 2");
 *         // break YOK! Asagiya devam et
 *     case 1:
 *         printf("Hediye 1");
 *         break;  // <-- Simdi cik
 * }
 *
 * Eger gun=2 ise:
 * 1. case 2'ye girer
 * 2. "Hediye 2" yazdirir
 * 3. break olmadiði icin case 1'e DEVAM eder
 * 4. "Hediye 1" yazdirir
 * 5. break gordugu icin cikar
 *
 * Sonuc: Hem "Hediye 2" hem "Hediye 1" yazdirilir!
 *
 *
 * NEDEN BU YONTEM KULLANILDI?
 * ============================
 *
 * "Twelve Days of Christmas" sarkisinda her gun, onceki gunlerin
 * TUM hediyelerini tekrarlar:
 *
 * Gun 1: Hediye 1
 * Gun 2: Hediye 2, Hediye 1
 * Gun 3: Hediye 3, Hediye 2, Hediye 1
 * Gun 4: Hediye 4, Hediye 3, Hediye 2, Hediye 1
 *
 * Fall-through sayesinde bu yapiyi OTOMATIK olarak elde ediyoruz!
 *
 *
 * ALTERNATIF YONTEMLER:
 * =====================
 *
 * 1. Her gun icin ayri switch (COK TEKRAR):
 *    - Gun 1: case 1
 *    - Gun 2: case 2, case 1
 *    - Gun 3: case 3, case 2, case 1
 *    - ... cok fazla kod tekrari
 *
 * 2. Ic ice donguler:
 *    for (gun = 1; gun <= 12; gun++) {
 *        for (hediye = gun; hediye >= 1; hediye--) {
 *            // Hediyeyi yazdir
 *        }
 *    }
 *    - Daha kisa ama daha karmasik
 *
 * 3. Fall-through (Bu program):
 *    - En okunabilir
 *    - En az kod tekrari
 *    - Switch'in ozel bir ozelligi
 *
 *
 * DIKKAT EDILMESI GEREKENLER:
 * ===========================
 *
 * 1. Fall-through KASITLI OLMALI:
 *    - Normal durumlarda break unutmak HATADIR
 *    - Bu programda kasitli olarak kullaniliyor
 *    - Yorum satiri ile belirtilmeli
 *
 * 2. Son case'de MUTLAKA break olmali:
 *    - Yoksa switch'ten cikilmaz
 *    - Tanimsiz davranis
 *
 * 3. Sira ONEMLI:
 *    - En buyuk case'den baslayip en kucuge gitmeli
 *    - case 12, 11, 10, ..., 2, 1 sirasi
 *
 *
 * SARKI HAKKINDA:
 * ===============
 *
 * "The Twelve Days of Christmas" geleneksel bir Noel sarkisidir.
 * 12 gun boyunca (Noel'den Epifani'ye kadar) her gun bir hediye
 * verilir ve onceki hediyelerin hepsi tekrarlanir.
 *
 * Toplam hediye sayisi = 1+2+3+...+12 = 78 hediye!
 *
 * Hediyeler:
 * ----------
 * 1.  A partridge in a pear tree (Armut agacinda bir keklik)
 * 2.  Two turtle doves (Iki kumru)
 * 3.  Three French hens (Uc Fransiz tavugu)
 * 4.  Four calling birds (Dort cagiran kus)
 * 5.  Five golden rings (Bes altin yuzuk)
 * 6.  Six geese a-laying (Alti yumurtlayan kaz)
 * 7.  Seven swans a-swimming (Yedi yuzen kugu)
 * 8.  Eight maids a-milking (Sekiz sut sagan hizmetci)
 * 9.  Nine ladies dancing (Dokuz dans eden kadin)
 * 10. Ten lords a-leaping (On ziplayarak yuruyuþ eden lord)
 * 11. Eleven pipers piping (On bir kaval calan)
 * 12. Twelve drummers drumming (On iki davul calan)
 *
 * ===================================================================
 */
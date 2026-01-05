/*
 * Bu program asterisk (*) veya bosluk karakterleri kullanarak
 * eskenar dortgen sekli cizer.
 *
 * ESKENAR DORTGEN SEKLI:
 * ======================
 *     *
 *    ***
 *   *****
 *  *******
 * *********
 *  *******
 *   *****
 *    ***
 *     *
 *
 * Sadece temel donguler ve printf kullanilmistir.
 */

#include <stdio.h>

int main(void) {
    int boyut;
    int satir, bosluk, yildiz;

    printf("===================================================\n");
    printf("       ESKENAR DORTGEN CIZIM PROGRAMI             \n");
    printf("===================================================\n");

    printf("\nDortgenin yari yuksekligini girin (orn: 5): ");
    scanf("%d", &boyut);

    printf("\n");

    /* UST YARI - Genisleyen kisim */
    for (satir = 1; satir <= boyut; satir++) {
        // Boslukları yazdir
        for (bosluk = 1; bosluk <= boyut - satir; bosluk++) {
            printf(" ");
        }

        // Yildizlari yazdir
        for (yildiz = 1; yildiz <= 2 * satir - 1; yildiz++) {
            printf("*");
        }

        printf("\n");
    }

    /* ALT YARI - Daralan kisim */
    for (satir = boyut - 1; satir >= 1; satir--) {
        // Boslukları yazdir
        for (bosluk = 1; bosluk <= boyut - satir; bosluk++) {
            printf(" ");
        }

        // Yildizlari yazdir
        for (yildiz = 1; yildiz <= 2 * satir - 1; yildiz++) {
            printf("*");
        }

        printf("\n");
    }

    /* MATEMATIKSEL ACIKLAMA */
    printf("\n");
    printf("===========================================================\n");
    printf("                 MATEMATIKSEL ACIKLAMA\n");
    printf("===========================================================\n\n");

    printf("Girdiginiz deger: %d\n\n", boyut);

    printf("Formuller:\n");
    printf("----------\n");
    printf("Toplam satir sayisi = 2 x %d - 1 = %d satir\n\n", boyut, 2 * boyut - 1);

    printf("Her satir icin (satir numarasi = k):\n");
    printf("  - Bosluk sayisi = %d - k\n", boyut);
    printf("  - Yildiz sayisi = 2 x k - 1\n\n");

    printf("Ornek hesaplama (3. satir icin):\n");
    printf("  - Bosluk sayisi = %d - 3 = %d bosluk\n", boyut, boyut - 3);
    printf("  - Yildiz sayisi = 2 x 3 - 1 = 5 yildiz\n");
    printf("  - Sonuc: ");
    for (bosluk = 1; bosluk <= boyut - 3; bosluk++) {
        printf(" ");
    }
    printf("*****\n\n");

    printf("Alt yari, ust yarinin simetrigidir.\n");
    printf("(Orta satir haric, ters sirada tekrarlanir)\n\n");

    /* BASKA BOYUTLARDA ORNEKLER */
    printf("===========================================================\n");
    printf("              BASKA BOYUTLARDA ORNEKLER\n");
    printf("===========================================================\n");

    printf("\nBoyut = 3:\n");
    for (satir = 1; satir <= 3; satir++) {
        for (bosluk = 1; bosluk <= 3 - satir; bosluk++) {
            printf(" ");
        }
        for (yildiz = 1; yildiz <= 2 * satir - 1; yildiz++) {
            printf("*");
        }
        printf("\n");
    }
    for (satir = 2; satir >= 1; satir--) {
        for (bosluk = 1; bosluk <= 3 - satir; bosluk++) {
            printf(" ");
        }
        for (yildiz = 1; yildiz <= 2 * satir - 1; yildiz++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\nBoyut = 7:\n");
    for (satir = 1; satir <= 7; satir++) {
        for (bosluk = 1; bosluk <= 7 - satir; bosluk++) {
            printf(" ");
        }
        for (yildiz = 1; yildiz <= 2 * satir - 1; yildiz++) {
            printf("*");
        }
        printf("\n");
    }
    for (satir = 6; satir >= 1; satir--) {
        for (bosluk = 1; bosluk <= 7 - satir; bosluk++) {
            printf(" ");
        }
        for (yildiz = 1; yildiz <= 2 * satir - 1; yildiz++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
 * ===================================================================
 * PROGRAM NASIL CALISIR?
 * ===================================================================
 *
 * ESKENAR DORTGEN IKI PARCADAN OLUSUR:
 * =====================================
 *
 * 1. UST YARI (Genisleyen):
 *    - 1. satirdan n. satira kadar
 *    - Her satirda yildiz sayisi artar
 *    - Her satirda bosluk sayisi azalir
 *
 * 2. ALT YARI (Daralan):
 *    - (n-1). satirdan 1. satira kadar
 *    - Ust yarinin tersi (orta satir haric)
 *    - Her satirda yildiz sayisi azalir
 *    - Her satirda bosluk sayisi artar
 *
 *
 * SATIR SATIR ACIKLAMA (Boyut = 5):
 * ==================================
 *
 * UST YARI:
 * ---------
 * Satir 1: 4 bosluk, 1 yildiz   ->     *
 * Satir 2: 3 bosluk, 3 yildiz   ->    ***
 * Satir 3: 2 bosluk, 5 yildiz   ->   *****
 * Satir 4: 1 bosluk, 7 yildiz   ->  *******
 * Satir 5: 0 bosluk, 9 yildiz   -> *********
 *
 * ALT YARI:
 * ---------
 * Satir 4: 1 bosluk, 7 yildiz   ->  *******
 * Satir 3: 2 bosluk, 5 yildiz   ->   *****
 * Satir 2: 3 bosluk, 3 yildiz   ->    ***
 * Satir 1: 4 bosluk, 1 yildiz   ->     *
 *
 *
 * FORMUL ACIKLAMALARI:
 * ====================
 *
 * 1. Bosluk Sayisi Formulu:
 *    bosluk_sayisi = boyut - satir_numarasi
 *
 *    Ornek (boyut=5):
 *    - 1. satir: 5 - 1 = 4 bosluk
 *    - 2. satir: 5 - 2 = 3 bosluk
 *    - 3. satir: 5 - 3 = 2 bosluk
 *    - 4. satir: 5 - 4 = 1 bosluk
 *    - 5. satir: 5 - 5 = 0 bosluk
 *
 * 2. Yildiz Sayisi Formulu:
 *    yildiz_sayisi = 2 x satir_numarasi - 1
 *
 *    Neden bu formul?
 *    - Yildizlar her zaman tek sayi olmali (1, 3, 5, 7, 9...)
 *    - Her satirda 2 yildiz eklenir (sag ve sol)
 *
 *    Ornek (boyut=5):
 *    - 1. satir: 2x1 - 1 = 1 yildiz
 *    - 2. satir: 2x2 - 1 = 3 yildiz
 *    - 3. satir: 2x3 - 1 = 5 yildiz
 *    - 4. satir: 2x4 - 1 = 7 yildiz
 *    - 5. satir: 2x5 - 1 = 9 yildiz
 *
 * 3. Toplam Satir Sayisi:
 *    toplam = 2 x boyut - 1
 *
 *    Neden -1?
 *    - Ust yari: boyut kadar satir
 *    - Alt yari: boyut - 1 satir (orta satir tekrar edilmez)
 *    - Toplam: boyut + (boyut - 1) = 2 x boyut - 1
 *
 *
 * DONGU MANTIKLARI:
 * =================
 *
 * 1. Dis Dongu (Satirlar icin):
 *    for (satir = 1; satir <= boyut; satir++)
 *    - Her bir satiri kontrol eder
 *    - 1'den boyut'a kadar sayar
 *
 * 2. Ic Dongu 1 (Bosluklar icin):
 *    for (bosluk = 1; bosluk <= boyut - satir; bosluk++)
 *    - Her satirin basindaki boslukları yazdirir
 *    - Satir ilerledikce bosluk azalir
 *
 * 3. Ic Dongu 2 (Yildizlar icin):
 *    for (yildiz = 1; yildiz <= 2 * satir - 1; yildiz++)
 *    - Her satirdaki yildizlari yazdirir
 *    - Satir ilerledikce yildiz artar
 *
 * 4. Alt Yari Dongusu:
 *    for (satir = boyut - 1; satir >= 1; satir--)
 *    - Geriye dogru sayar (n-1'den 1'e)
 *    - Ayni formulleri kullanir ama ters sirada
 *
 *
 * YAYGIN HATALAR VE COZUMLERI:
 * ===========================
 *
 * HATA 1: Alt yarida orta satiri tekrar yazdirmak
 * ------------------------------------------------
 * Yanlis:
 *   for (satir = boyut; satir >= 1; satir--)  // boyut yerine boyut-1
 *
 * Dogru:
 *   for (satir = boyut - 1; satir >= 1; satir--)
 *
 *
 * HATA 2: Yildiz sayisi formulunu yanlis yazmak
 * ----------------------------------------------
 * Yanlis:
 *   for (yildiz = 1; yildiz <= satir; yildiz++)  // Cift sayilar da gelir
 *
 * Dogru:
 *   for (yildiz = 1; yildiz <= 2 * satir - 1; yildiz++)
 *
 *
 * HATA 3: Bosluk ve yildiz sirasini karistirmak
 * ----------------------------------------------
 * Yanlis:
 *   // Once yildiz sonra bosluk yazdirmak
 *
 * Dogru:
 *   // Once bosluk sonra yildiz yazdirmali
 *
 *
 * GELISTIRME FIKIRLERI:
 * =====================
 *
 * 1. Farkli karakterler kullanmak:
 *    printf("#"); veya printf("+");  
 *
 * 2. Numaralari gostermek:
 *    printf("%d", satir);  // Yildiz yerine satir numarasi
 *
 * 3. Ici bos dortgen yapmak:
 *    Ilk ve son yildizda * yaz, ortada bosluk birak
 *
 * 4. Yatay dortgen yapmak:
 *    Ayni mantik ama sutunlar icin uygula
 *
 * ===================================================================
 */
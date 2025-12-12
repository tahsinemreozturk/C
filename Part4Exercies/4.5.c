/*
    C PROGRAMLAMA – HATA TESPITI ve DUZELTMELERI
    --------------------------------------------
    Bu dosyada kitapta verilen 7 ayrı kod parçasındaki hatalar
    tek tek incelenmiş, önce hatalı kod blokları, ardından düzeltilmiş
    doğru halleri ve açıklamaları verilmiştir.

    NOT:
    - Degisken tanimlamalari hataya dahil edilmemistir (soruda verilen sart).
    - Sadece kod bloklarindaki mantiksal, yazimsal ve calisma hatalari
      degerlendirilmiştir.
*/

#include <stdio.h>

int main() {

    // ============================================================
    // a) PROBLEM – FOR DÖNGÜSÜ
    // ============================================================

    /*
        HATALI KOD:
        -------------------------------------
        For ( x = 100; x >= 1, ++x )
            printf( "%d\n", x );

        HATALAR:
        1) 'For' küçük harfle yazılmalı → for
        2) Döngü şartlarında ',' virgül var → yanlış, ';' olmalı
        3) x 100’den başlıyor ama ++x ile artırılıyor → yanlış yön
        4) Amaç 100’den 1’e doğru gitmek → x-- olmalı
    */

    // DOGRU KOD:
    for (x = 100; x >= 1; x--) {
        printf("%d\n", x);
    }


    // ============================================================
    // b) PROBLEM – SWITCH CASE TEK/ÇİFT KONTROLÜ
    // ============================================================

    /*
        HATALI KOD:
        -------------------------------------
        switch ( value % 2 ) {
            case 0:
                puts("Even integer");
            case 1:
                puts("Odd integer");
        }

        HATALAR:
        1) Her case’den sonra break yok → FALL-THROUGH olur.
           Örneğin value = 2 girince hem "Even" hem "Odd" yazar.
        2) Mantıksal olarak case yapısı sadece ilgili bloğu çalıştırmalı.
    */

    // DOGRU KOD:
    switch (value % 2) {
    case 0:
        puts("Even integer");
        break;
    case 1:
        puts("Odd integer");
        break;
    }


    // ============================================================
    // c) PROBLEM – scanf + getchar
    // ============================================================

    /*
        HATALI KOD:
        -------------------------------------
        scanf("%d", &intVal);
        charVal = getchar();
        printf("Integer: %d\nCharacter: %c\n", intVal, charVal);

        HATALAR:
        1) scanf ile sayı girildikten sonra tamponda '\n' kalır.
        2) getchar() bu '\n' karakterini okur → kullanıcıdan karakter almamış olur.
    */

    // DOGRU KOD:
    scanf("%d", &intVal);
    getchar();               // tampondaki '\n' temizlenir
    charVal = getchar();     // gerçek karakter okunur

    printf("Integer: %d\nCharacter: %c\n", intVal, charVal);


    // ============================================================
    // d) PROBLEM – FLOAT KARŞILAŞTIRMASI
    // ============================================================

    /*
        HATALI KOD:
        -------------------------------------
        for (x = .000001; x == .0001; x += .000001) {
            printf("%.7f\n", x);
        }

        HATALAR:
        1) x == .0001 → floating-point'te TAM EŞİTLİK neredeyse imkansızdır.
        2) Döngü hiç çalışmaz çünkü x başlangıçta zaten .0001 değildir.
    */

    // DOGRU KOD:
    for (x = 0.000001; x <= 0.0001; x += 0.000001) {
        printf("%.7f\n", x);
    }


    // ============================================================
    // e) PROBLEM – TEK SAYILARI 999 → 1 GÖSTERME
    // ============================================================

    /*
        HATALI KOD:
        -------------------------------------
        for ( x = 999; x >= 1; x += 2 ) {
            printf("%d\n", x);
        }

        HATALAR:
        1) x += 2 → yukarı doğru artırıyor, geriye gitmez.
        2) Hedef: 999 → 1 arası azalan tek sayılar.
    */

    // DOGRU KOD:
    for (x = 999; x >= 1; x -= 2) {
        printf("%d\n", x);
    }


    // ============================================================
    // f) PROBLEM – 2’DEN 100’E KADAR ÇİFT SAYILAR
    // ============================================================

    /*
        HATALI KOD:
        -------------------------------------
        counter = 2;
        Do {
            if (counter % 2 == 0) {
                printf("%u\n", counter);
            }
            counter += 2;
        } While (counter < 100);

        HATALAR:
        1) 'Do' ve 'While' büyük harfle yazılmış → C’de geçersizdir.
        2) counter zaten 2 artırıldığı için if gerekmez (her seferinde çift zaten).
        3) counter < 100 → 100 dahil edilmemiş.
    */

    // DOGRU KOD:
    counter = 2;
    do {
        printf("%u\n", counter);
        counter += 2;
    } while (counter <= 100);


    // ============================================================
    // g) PROBLEM – 100’DEN 150’YE KADAR SAYILARI TOPLAMA
    // ============================================================

    /*
        HATALI KOD:
        -------------------------------------
        for ( x = 100; x <= 150; ++x ); {   <-- YANLIŞ!!! Burada noktalı virgül var
            total += x;
        }

        HATALAR:
        1) Döngü satırının sonunda ';' → döngü BOŞ döngü olur.
        2) total += x; döngüden bağımsız 1 kez çalışır.
    */

    // DOGRU KOD:
    total = 0;
    for (x = 100; x <= 150; x++) {
        total += x;
    }

    printf("100–150 toplami = %d\n", total);

    return 0;
}

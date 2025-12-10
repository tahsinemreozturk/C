/*
    YAPISAL PROGRAMLAMA OZETI (4.12)
    --------------------------------
    Bu dosya, C dilinde yapisal programlama kavramini ve
    3. ve 4. bolumlerde ogrenilen kontrol ifadelerinin
    genel ozetini iceren ders notu niteligindedir.

    Amac:
    - Yapisal programlamanin neden gerekli oldugunu anlamak
    - Hangi kontrol yapilarinin yeterli oldugunu kavramak
    - Yapisal ve yapisal olmayan programlari ayirt edebilmek

*/

#include <stdio.h>

int main() {

    // ============================================================
    // 1) YAPISAL PROGRAMLAMA NEDIR?
    // ============================================================
    // Yapisal programlama, programlarin belirli kurallar
    // cercevesinde, anlasilir ve test edilebilir sekilde
    // yazilmasini hedefler.
    //
    // Mimarlarin binalari ortak kurallarla tasarlamasi gibi,
    // programcilar da programlari ortak bir mantikla tasarlar.


    // ============================================================
    // 2) YAPISAL PROGRAMLAMANIN AVANTAJLARI
    // ============================================================
    // Yapisal programlar:
    //  - Daha kolay anlasilir
    //  - Daha kolay test edilir
    //  - Hatalar daha kolay bulunur
    //  - Degistirilmesi ve bakimi daha kolaydir
    //  - Matematiksel olarak dogrulanabilir


    // ============================================================
    // 3) TEK GIRIS – TEK CIKIS PRENSIBI
    // ============================================================
    // Yapisal programlamanin temel kurali:
    //  - Her kontrol ifadesinin SADECE BIR giris noktasi vardir
    //  - Her kontrol ifadesinin SADECE BIR cikis noktasi vardir
    //
    // Bu sayede kontrol akisi karmasik hale gelmez.


    // ============================================================
    // 4) YAPISAL OLMAYAN PROGRAMLAR
    // ============================================================
    // Akis diyagraminda keyfi sekilde baglanan oklar
    // yapisal olmayan programlari olusturur.
    //
    // Bu tur programlar:
    //  - Okunmasi zordur
    //  - Hata yapmaya cok aciktir
    //  - Bakimi zordur


    // ============================================================
    // 5) YAPISAL PROGRAMLAMADA KONTROL IFADESI YIGMA
    // ============================================================
    // Kontrol ifadeleri sirayla baglanir.
    // Bir kontrol ifadesinin cikisi,
    // bir sonrakinin girisine baglanir.
    //
    // Buna "kontrol ifadelerini yigmak" denir.


    // ============================================================
    // 6) BOHM ve JACOPINI TEORISI
    // ============================================================
    // Tum programlar yalnizca Uc temel kontrol yapisi ile
    // yazilabilir:
    //
    // 1) SIRA (Sequence)
    // 2) SECIM (Selection)
    // 3) TEKRARLAMA (Iteration)


    // ============================================================
    // 7) SIRA (SEQUENCE)
    // ============================================================
    // Komutlar yukaridan asagiya dogru sirayla calisir.

    int x = 5;
    x = x + 1;
    printf("x = %d\n", x);


    // ============================================================
    // 8) SECIM (SELECTION)
    // ============================================================
    // Secim yapilari 3 sekilde gerceklesir:
    //  - if (tek secim)
    //  - if ... else (cift secim)
    //  - switch (coklu secim)

    if (x > 5) {
        printf("x 5'ten buyuk\n");
    }
    else {
        printf("x 5'e esit veya kucuk\n");
    }


    // ============================================================
    // 9) TEKRARLAMA (ITERATION)
    // ============================================================
    // Tekrarlama 3 sekilde yapilir:
    //  - while
    //  - do...while
    //  - for

    int i = 1;

    while (i <= 3) {
        printf("while dongusu: %d\n", i);
        i++;
    }


    // ============================================================
    // 10) EN AZ KONTROL IFADESI ILE COZUM
    // ============================================================
    // Kitapta vurgulanan onemli nokta:
    //
    // Herhangi bir programi yazmak icin C'de yalnizca
    // asagidaki uc kontrol yapisi yeterlidir:
    //  - Sira
    //  - if (secim)
    //  - while (tekrarlama)


    // ============================================================
    // 11) YAPISAL PROGRAMLAMANIN TESVIK ETTIGI SEYLER
    // ============================================================
    //  - Acik ve okunabilir kod
    //  - Fonksiyonlara bolunmus programlar
    //  - Yeniden kullanilabilir kod yapisi
    //  - Hata yapma ihtimalinin azalmasi


    // ============================================================
    // 12) NOTUN AMACI
    // ============================================================
    // Bu dosya calistirilmak icin degil,
    // yapisal programlama konusunun
    // kitap ozetini saklamak icin hazirlanmistir.

    return 0;
}

/*
    4.6 – FOR DONGULERINDE YAZDIRILAN X DEGERLERI
    -------------------------------------------
    Bu dosya, kitapta verilen 4.6 numarali sorunun
    cozumunu ve her bir for dongusunun hangi x
    degerlerini yazdirdigini adim adim aciklamak
    amaciyla hazirlanmistir.
*/

#include <stdio.h>

int main() {

	int x;

    // ============================================================
    for ( x = 2; x <= 13; x += 2 )
    // ============================================================
    /*
        Baslangic: x = 2
        Kosul    : x <= 13
        Artis    : x += 2

        Adim adim:
        x = 2  -> yazdirilir
        x = 4  -> yazdirilir
        x = 6  -> yazdirilir
        x = 8  -> yazdirilir
        x = 10 -> yazdirilir
        x = 12 -> yazdirilir
        x = 14 -> kosul SAGLANMAZ (14 <= 13 false)

        Yazdirilan degerler:
        2 4 6 8 10 12
    */


    // ============================================================
    for ( x = 5; x <= 22; x += 7 )
 
    /*
        Baslangic: x = 5
        Kosul    : x <= 22
        Artis    : x += 7

        Adim adim:
        x = 5  -> yazdirilir
        x = 12 -> yazdirilir
        x = 19 -> yazdirilir
        x = 26 -> kosul SAGLANMAZ (26 <= 22 false)

        Yazdirilan degerler:
        5 12 19
    */


    // ============================================================
    for ( x = 3; x <= 15; x += 3 )
    // ============================================================
    /*
        Baslangic: x = 3
        Kosul    : x <= 15
        Artis    : x += 3

        Adim adim:
        x = 3  -> yazdirilir
        x = 6  -> yazdirilir
        x = 9  -> yazdirilir
        x = 12 -> yazdirilir
        x = 15 -> yazdirilir
        x = 18 -> kosul SAGLANMAZ (18 <= 15 false)

        Yazdirilan degerler:
        3 6 9 12 15
    */


    // ============================================================
    for ( x = 1; x <= 5; x += 7 )
    // ============================================================
    /*
        Baslangic: x = 1
        Kosul    : x <= 5
        Artis    : x += 7

        Adim adim:
        x = 1 -> yazdirilir
        x = 8 -> kosul SAGLANMAZ (8 <= 5 false)

        DONGU SADECE 1 KEZ CALISIR.

        Yazdirilan deger:
        1
    */


    // ============================================================
    for ( x = 12; x <= 2; x -= 3 )
    // ============================================================
    /*
        Baslangic: x = 12
        Kosul    : x <= 2
        Artis    : x -= 3

        KRITIK NOKTA:
        Kosul, DAHA ILK KONTROLDE FALSE'dur.

        12 <= 2  -> FALSE

        Bu nedenle:
        - Dongu govdesi HIC CALISMAZ
        - printf HIC CAGIRILMAZ

        Yazdirilan deger:
        (HICBIR CIKTI YOK)
    */


    // ============================================================
    // GENEL SONUC OZETI
    // ============================================================
    /*
        a) 2 4 6 8 10 12
        b) 5 12 19
        c) 3 6 9 12 15
        d) 1
        e) (cikti yok)

        Bu sorunun amaci:
        - for dongusunun calisma mantigini anlamak
        - Kosulun ilk basta bile false olabilecegini gormek
        - Artis miktarinin dongu sayisini nasil etkiledigini kavramak
    */

    return 0;
}

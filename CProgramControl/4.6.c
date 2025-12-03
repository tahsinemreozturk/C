/*
    C Programlama 
    ----------------------------------------
    Konu: Faiz Hesaplama, For Dongusu, pow Fonksiyonu,
          printf ile sayisal ciktilari bicimlendirme,
          parasal hesaplama icin veri tipi secimi.

    Bu dosyada iki farkli faiz hesaplama ornegi bulunuyor:
        1) Klasik yontem ile her yil faiz ekleme
        2) pow() fonksiyonu ile (1 + faiz)^yil hesaplama
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    /* ----------------------------------------------------------
       1. ORNEK: Her yil anaparanin faiz eklenmesi
          (Faiz = 0.05 → %5)
    ---------------------------------------------------------- */

    float faiz = 0.05f;
    float anapara;
    float yilsonu;

    printf("Faize yatiracaginiz para miktarini giriniz: ");
    scanf_s("%f", &anapara);

    printf("\n--- Klasik Yontem (Her yil faiz ekle) ---\n\n");

    for (int x = 1; x <= 10; x++)
    {
        anapara = anapara + (anapara * faiz);  // yeni anapara
        yilsonu = anapara;

        printf("%d. yil sonu deposit : %.2f\n", x, yilsonu);
    }


    /* ----------------------------------------------------------
       2. ORNEK: pow() fonksiyonu ile hesaplama
          Formul: amount = principal * (1 + rate)^year
    ---------------------------------------------------------- */

    double amount;
    double rate = 0.05;
    double principal = 1000.00;
    unsigned int year;

    printf("\n--- pow() Fonksiyonu ile Hesaplama ---\n\n");
    printf("%4s%21s\n", "Year", "Amount on deposit");

    for (year = 1; year <= 10; ++year)
    {
        amount = principal * pow(1.0 + rate, year);
        printf("%4u%21.2f\n", year, amount);
    }


    /* ----------------------------------------------------------
       pow Fonksiyonu Hakkinda Not
       -----------------------------------------------------------
       pow(x, y):
            → x'in y. kuvvetini hesaplar.
            → double dondurur.
            → math.h kutuphanesi gerektirir.

       Ornekte year int tipinde olmasina ragmen,
       C otomatik olarak double'a donusturur.
    ---------------------------------------------------------- */


    /* ----------------------------------------------------------
       Parasal Miktarlar icin float/double Kullanimi Uyarisi
       -----------------------------------------------------------
       float ve double ondalik degerleri tam olarak temsil etmez.
       Ornegin 0.1 gercekte 0.10000000 tam olarak saklanamaz.

       Bu nedenle parasal hesaplamalarda:
           → Parayi tam sayi olarak tutmak daha dogru.
           Ornek: 1 TL yerine 100 kurus tutmak.
    ---------------------------------------------------------- */


    /* ----------------------------------------------------------
       printf ile Sayisal Ciktilarin Bicimlendirilmesi
       -----------------------------------------------------------
       printf icerisinde sayilarin nasil gorunecegini
       format belirleyicileri ile kontrol ederiz.

       Genel yapi:
            % [genislik] . [ondalik_basimak] f

       ORNEK:  %21.2f
       ------------------------------
       1) f → Ondalik sayi yazdir (float/double)

       2) .2
          → Ondalik basamak sayisi 2 olsun
          → Ornek cikti: 123.456 → 123.46

       3) 21
          → Toplam alan genisligi 21 karakter olsun.
            Bu alan icine:
                - sayinin tum rakamlari
                - virgul/nokta
                - ondalik basamaklar
                - basta bosluklar dahil

          Eger sayi daha kisa ise sol tarafa bosluk eklenir.

       ORNEK:
            printf("%10.2f", 12.3);

       Cikti:
                 12.30
            (Toplam 10 karakterlik alan)

       Bu sayede tum sayilar duzenli bir sekilde hizalanir.
       Tablo yazarken cok onemlidir.

       Bu programda:
            %4u       → yil sayisini 4 karakterde yazdir
            %21.2f    → parayi 21 karakterlik alanda, 2 ondalikla yazdir

       Cikti sekli:
            Year         Amount on deposit
               1                 1050.00
               2                 1102.50

       Bu bicimlendirme tablolarin profesyonel gorunmesi icin gerekli.
    ---------------------------------------------------------- */

    return 0;
}

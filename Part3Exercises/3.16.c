/*
Problemin Tanýmý
Bir sürücü, her depo için gidilen kilometre ve kullanýlan litreleri kaydederek
bir kaç depo benzini takip etmiþtir. Her depo için gidilen kilometre ve kullanýlan
litreyi girecek bir program geliþtirin. Program, her depo için elde edilen
lt/100km' yi hesaplamalý ve göstermelidir. Tüm giriþ bilgilerini iþledikten
sonra, program, birleþtirilmiþ lt/100km' yi hesaplamalý ve göstermeldiri.

Pseudocode 

1. adým

Deðiþkenlerin oluþturulmasý
Kullanýcýdan verilerin alýnmasý
Verilerin iþlenmesi ve kullanýcýya gösterilmesi



2. adým 

Kullanýlan litre için deðiþken oluþtur
Gidilen kilometre için deðiþken oluþtur
Yakýt tüketimi için deðiþken oluþtur

Kullanýcýdan alýnacak veriler sonlandýrýlana kadar tekrarlanacak döngü oluþtur

Bu döngü içerisinde;
Kullanýcýdan litre bilgisini al
Kullanýcýdan kilometre bilgisini al
Yakýt tüketimini hesapla ve kullanýcýya göster

Kullanýcý döngüyü sonlandýrma ifadesi kullandýðýnda genel ortalama tüketim 
bilgisini hesapla 
Genel ortalama tüketim bilgisini göster.

+++ Düzenlenmiþ hali: +++

Baþla
Toplam kilometreyi 0 yap
Toplam litreyi 0 yap

Tekrarla:
    Gidilen kilometreyi kullanýcýdan al
    Eðer kilometre -1 ise (çýkýþ için), döngüyü bitir
    Kullanýlan litreyi kullanýcýdan al

    lt_per_100km = (kullanýlan litre / gidilen kilometre) * 100
    lt_per_100km deðerini ekrana yazdýr

    toplam kilometreye ekle
    toplam litreye ekle
Döngü sonu

Eðer toplam kilometre sýfýr deðilse:
    genel lt/100km = (toplam litre / toplam kilometre) * 100
    genel lt/100km deðerini ekrana yazdýr
Aksi halde:
    "Veri girilmedi" mesajý yazdýr

Bitir





*/

//#include <stdio.h>
//
//int main () 
//{
//    float kullanilanLitre = 0; 
//    float gidilenKilometre = 0;
//    float yakitTuketimi = 0;
//    float toplamLitre = 0;
//    float toplamKilometre = 0;
//    float toplamyakitTuketimi = 0;
//
//    while (kullanilanLitre != -1)
//    {
//        printf("Kullanilan Litreyi Girin: ");
//        scanf_s("%f", &kullanilanLitre);
//
//        if (kullanilanLitre == -1) 
//        {
//            break;
//        }
//        printf("Gidilen Kilometreyi Girin: ");
//        scanf_s("%f", &gidilenKilometre);
//
//        yakitTuketimi = (kullanilanLitre / gidilenKilometre) * 100;
//
//        printf("Bu depo icin Lt/100Km: %f\n\n", yakitTuketimi);
//
//        //toplamLitre = kullanilanLitre + toplamLitre; 
//        toplamLitre += kullanilanLitre; 
//        //toplamKilometre = gidilenKilometre + toplamKilometre;
//        toplamKilometre += gidilenKilometre; 
//    }
//
//
//    if (gidilenKilometre != 0)  
//    {
//        toplamyakitTuketimi = (toplamLitre / toplamKilometre) * 100;    
//
//        printf("Bu depo icin genel ortalama Lt/100Km: %f\n\n", toplamyakitTuketimi);  
//    }
//
//
//    return 0;
//
//}
/*
Problemin Tan�m�
Bir s�r�c�, her depo i�in gidilen kilometre ve kullan�lan litreleri kaydederek
bir ka� depo benzini takip etmi�tir. Her depo i�in gidilen kilometre ve kullan�lan
litreyi girecek bir program geli�tirin. Program, her depo i�in elde edilen
lt/100km' yi hesaplamal� ve g�stermelidir. T�m giri� bilgilerini i�ledikten
sonra, program, birle�tirilmi� lt/100km' yi hesaplamal� ve g�stermeldiri.

Pseudocode 

1. ad�m

De�i�kenlerin olu�turulmas�
Kullan�c�dan verilerin al�nmas�
Verilerin i�lenmesi ve kullan�c�ya g�sterilmesi



2. ad�m 

Kullan�lan litre i�in de�i�ken olu�tur
Gidilen kilometre i�in de�i�ken olu�tur
Yak�t t�ketimi i�in de�i�ken olu�tur

Kullan�c�dan al�nacak veriler sonland�r�lana kadar tekrarlanacak d�ng� olu�tur

Bu d�ng� i�erisinde;
Kullan�c�dan litre bilgisini al
Kullan�c�dan kilometre bilgisini al
Yak�t t�ketimini hesapla ve kullan�c�ya g�ster

Kullan�c� d�ng�y� sonland�rma ifadesi kulland���nda genel ortalama t�ketim 
bilgisini hesapla 
Genel ortalama t�ketim bilgisini g�ster.

+++ D�zenlenmi� hali: +++

Ba�la
Toplam kilometreyi 0 yap
Toplam litreyi 0 yap

Tekrarla:
    Gidilen kilometreyi kullan�c�dan al
    E�er kilometre -1 ise (��k�� i�in), d�ng�y� bitir
    Kullan�lan litreyi kullan�c�dan al

    lt_per_100km = (kullan�lan litre / gidilen kilometre) * 100
    lt_per_100km de�erini ekrana yazd�r

    toplam kilometreye ekle
    toplam litreye ekle
D�ng� sonu

E�er toplam kilometre s�f�r de�ilse:
    genel lt/100km = (toplam litre / toplam kilometre) * 100
    genel lt/100km de�erini ekrana yazd�r
Aksi halde:
    "Veri girilmedi" mesaj� yazd�r

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
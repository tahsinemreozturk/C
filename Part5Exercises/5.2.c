/*
 * C FONKSİYONLARI - VOID VE INT
 * ==============================
 *
 * FONKSİYON NEDİR?
 * - Belirli bir görevi yerine getiren kod bloklarıdır
 * - Kodun tekrar kullanılabilirliğini sağlar
 * - Programı daha düzenli ve okunabilir yapar
 *
 * FONKSİYON YAPISI:
 * dönüş_tipi fonksiyon_adı(parametreler) {
 *     // kod bloğu
 *     return değer; // (dönüş tipi void değilse)
 * }
 */

#include <stdio.h>

 // ============================================================================
 // VOID FONKSİYONLAR
 // ============================================================================
 /*
  * VOID FONKSİYON:
  * - Geriye değer döndürmeyen fonksiyonlardır
  * - Sadece bir işlem yaparlar (ekrana yazdırma, değişken değiştirme vb.)
  * - return ifadesi kullanılmaz veya sadece "return;" yazılır
  */

  // Parametresiz void fonksiyon
void selamVer() {
    printf("Merhaba Dunya!\n");
    printf("Bu bir void fonksiyondur.\n\n");
}

// Parametreli void fonksiyon
void isimYazdir(char isim[]) {
    printf("Merhaba %s!\n", isim);
}

// Birden fazla parametre alan void fonksiyon
void toplaniYazdir(int a, int b) {
    int toplam = a + b;
    printf("%d + %d = %d\n", a, b, toplam);
}

// Hesaplama yapıp sonucu yazdıran void fonksiyon
void dikdortgenAlaniHesapla(float uzunluk, float genislik) {
    float alan = uzunluk * genislik;
    printf("Dikdortgen Alani: %.2f\n", alan);
}

// Çarpım tablosu yazdıran void fonksiyon
void carpimTablosu(int sayi) {
    printf("\n%d'nin carpim tablosu:\n", sayi);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", sayi, i, sayi * i);
    }
}


// ============================================================================
// INT FONKSİYONLAR
// ============================================================================
/*
 * INT FONKSİYON:
 * - Geriye tam sayı (integer) değer döndüren fonksiyonlardır
 * - Mutlaka return ifadesi ile bir değer döndürmelidir
 * - Dönen değer başka işlemlerde kullanılabilir
 */

 // Parametresiz int fonksiyon
int varsayilanDegerDondur() {
    return 42; // Sabit bir değer döndürür
}

// İki sayının toplamını döndüren int fonksiyon
int topla(int a, int b) {
    return a + b; // Toplam değeri döndürür
}

// İki sayının çarpımını döndüren int fonksiyon
int carpim(int x, int y) {
    int sonuc = x * y;
    return sonuc;
}

// En büyük sayıyı bulan int fonksiyon
int enBuyukBul(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
    // Alternatif: return (a > b) ? a : b;
}

// Faktöriyel hesaplayan int fonksiyon
int faktoriyel(int n) {
    if (n <= 1) {
        return 1;
    }
    int sonuc = 1;
    for (int i = 2; i <= n; i++) {
        sonuc *= i;
    }
    return sonuc;
}

// Sayının tek mi çift mi olduğunu kontrol eden fonksiyon
// 1 = tek, 0 = çift döndürür
int tekMi(int sayi) {
    if (sayi % 2 == 1) {
        return 1; // Tek
    }
    else {
        return 0; // Çift
    }
}

// Mutlak değer hesaplayan fonksiyon
int mutlakDeger(int sayi) {
    if (sayi < 0) {
        return -sayi; // Negatif sayıyı pozitife çevir
    }
    return sayi;
}

// İki sayı arasındaki farkı döndüren fonksiyon
int farkHesapla(int a, int b) {
    return mutlakDeger(a - b); // Başka bir fonksiyonu kullanma
}


// ============================================================================
// MAIN FONKSİYONU
// ============================================================================
/*
 * MAIN FONKSİYONU:
 * - Programın başlangıç noktasıdır
 * - Her C programında mutlaka olmalıdır
 * - Genellikle int tipinde olur ve 0 döndürür (başarılı sonlanma)
 */

int main() {
    printf("=== C FONKSİYONLARI ORNEKLERI ===\n\n");

    // ------------------------------------------------------------------------
    // VOID FONKSİYON KULLANIMI
    // ------------------------------------------------------------------------
    printf("--- VOID FONKSIYONLAR ---\n");

    selamVer(); // Parametresiz çağrı

    isimYazdir("Ahmet"); // Tek parametre ile çağrı

    toplaniYazdir(5, 3); // İki parametre ile çağrı

    dikdortgenAlaniHesapla(5.5, 3.2);

    carpimTablosu(7);


    // ------------------------------------------------------------------------
    // INT FONKSİYON KULLANIMI
    // ------------------------------------------------------------------------
    printf("\n--- INT FONKSIYONLAR ---\n");

    // Fonksiyondan dönen değeri değişkene atama
    int deger = varsayilanDegerDondur();
    printf("Varsayilan deger: %d\n", deger);

    // Fonksiyonu doğrudan kullanma
    printf("5 + 8 = %d\n", topla(5, 8));

    // Fonksiyon sonucunu başka işlemde kullanma
    int carpimSonucu = carpim(4, 7);
    printf("4 x 7 = %d\n", carpimSonucu);

    // İç içe fonksiyon kullanımı
    int toplam = topla(10, 20);
    int carpim_sonuc = carpim(toplam, 2);
    printf("(10 + 20) x 2 = %d\n", carpim_sonuc);

    // Karşılaştırma ile kullanım
    printf("15 ile 23 arasindaki en buyuk: %d\n", enBuyukBul(15, 23));

    // Faktöriyel hesaplama
    printf("5! = %d\n", faktoriyel(5));

    // Koşul kontrolü
    int sayi = 17;
    if (tekMi(sayi)) {
        printf("%d tek bir sayidir.\n", sayi);
    }
    else {
        printf("%d cift bir sayidir.\n", sayi);
    }

    // Mutlak değer
    printf("-42'nin mutlak degeri: %d\n", mutlakDeger(-42));

    // Fonksiyon içinde fonksiyon çağırma
    printf("100 ile 75 arasindaki fark: %d\n", farkHesapla(100, 75));


    // ------------------------------------------------------------------------
    // KARŞILAŞTIRMA VE İPUÇLARI
    // ------------------------------------------------------------------------
    printf("\n--- ONEMLI NOTLAR ---\n");
    printf("1. VOID fonksiyonlar deger dondurmez, sadece islem yapar\n");
    printf("2. INT fonksiyonlar mutlaka bir tam sayi dondurmeli\n");
    printf("3. Fonksiyon cagrisi yapmadan once fonksiyon tanimlanmis olmali\n");
    printf("4. Parametreler virgul ile ayrilir\n");
    printf("5. return ifadesi fonksiyonu sonlandirir\n");

    return 0; // Programın başarıyla sonlandığını belirtir
}

/*
 * ============================================================================
 * EKSTRA BILGILER
 * ============================================================================
 *
 * FONKSIYON PROTOTIPLERI:
 * - Fonksiyonu main'den önce tanımlamak istemiyorsanız prototip kullanılır
 * - Örnek: int topla(int a, int b);
 * - Fonksiyonun kendisi main'den sonra yazılabilir
 *
 * VOID vs INT FARKLAR:
 * ┌──────────────┬─────────────────────┬──────────────────────┐
 * │ Özellik      │ void                │ int                  │
 * ├──────────────┼─────────────────────┼──────────────────────┤
 * │ Dönüş Değeri │ Yok                 │ Tam sayı             │
 * │ return       │ Opsiyonel           │ Zorunlu              │
 * │ Kullanım     │ İşlem yapar         │ Değer hesaplar       │
 * │ Atama        │ Yapılamaz           │ Değişkene atanabilir │
 * └──────────────┴─────────────────────┴──────────────────────┘
 *
 * İYİ KODLAMA PRATİKLERİ:
 * - Fonksiyon isimleri açıklayıcı olmalı (topla, hesapla, yazdir vb.)
 * - Bir fonksiyon tek bir iş yapmalı
 * - Parametre sayısı makul olmalı (genelde 3-4'ten fazla olmamalı)
 * - Yorum satırları ile fonksiyonun ne yaptığını açıklayın
 *
 */
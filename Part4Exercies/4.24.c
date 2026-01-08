/*
 * DUNYA NUFUS ARTISI SIMULASYONU
 *
 * Bu program dunya nufusunun gelecek 75 yil icinde nasil degisecegini
 * hesaplar ve tablo halinde gosterir.
 *
 * Kullanici girdileri:
 *   - Guncel dunya nufusu
 *   - Yillik artis orani (yuzde olarak)
 *
 * Program her yil icin:
 *   - Yili
 *   - O yildaki beklenen nufusu
 *   - O yildaki artis oranini
 * gosterir ve nufusun iki katina cikacagi yili belirler.
 */

#include <stdio.h>

int main(void) {
    double guncelNufus;
    double artisOrani;
    double nufus;
    double baslangicNufus;
    double ikiKatNufus;
    int yil;
    int ikiKatYil = 0;  /* Nufusun iki katina ciktigi yil */

    printf("================================================\n");
    printf("     DUNYA NUFUS ARTISI SIMULASYONU\n");
    printf("================================================\n\n");

    /* Kullanicidan veri al */
    printf("Guncel dunya nufusunu girin (milyar): ");
    scanf("%lf", &guncelNufus);

    printf("Yillik artis oranini girin (yuzde olarak, orn: 1.1): ");
    scanf("%lf", &artisOrani);

    /* Baslangic degerlerini kaydet */
    baslangicNufus = guncelNufus;
    ikiKatNufus = guncelNufus * 2;
    nufus = guncelNufus;

    /* Tablo basligini yazdir */
    printf("\n");
    printf("================================================================\n");
    printf("  Yil  |  Nufus (milyar)  |  Artis Orani (%%)  |  Artis Miktari\n");
    printf("================================================================\n");

    /* Ilk yili (baslangic) goster */
    printf("  %2d   |     %.3f        |      %.2f        |      0.000\n",1, nufus, artisOrani);

    /* 75 yil icin hesapla */
    for (yil = 2; yil <= 75; yil++) {
        double oncekiNufus = nufus;

        /* Yeni nufusu hesapla: Nufus = Nufus * (1 + artisOrani/100) */
        nufus = nufus * (1 + artisOrani / 100.0);

        double artisMiktari = nufus - oncekiNufus;

        /* Tablo satirini yazdir */
        printf("  %2d   |     %.3f        |      %.2f        |      %.3f\n", yil, nufus, artisOrani, artisMiktari);

        /* Nufus iki katina cikti mi kontrol et */
        if (nufus >= ikiKatNufus && ikiKatYil == 0) {
            ikiKatYil = yil;
        }
    }

    printf("================================================================\n\n");

    /* Sonuclari goster */
    printf("SONUCLAR:\n");
    printf("---------\n");
    printf("Baslangic nufusu:        %.3f milyar\n", baslangicNufus);
    printf("75 yil sonra nufus:      %.3f milyar\n", nufus);
    printf("Toplam artis:            %.3f milyar (%.1f%%)\n",
        nufus - baslangicNufus,
        ((nufus - baslangicNufus) / baslangicNufus) * 100);

    if (ikiKatYil > 0) {
        printf("\nNufus %d. yilda iki katina cikti!\n", ikiKatYil);
        printf("O yildaki nufus: %.3f milyar\n",
            baslangicNufus * (1 + artisOrani / 100.0));

        /* O yildaki nufusu hesapla */
        double temp = baslangicNufus;
        int i;
        for (i = 2; i <= ikiKatYil; i++) {
            temp = temp * (1 + artisOrani / 100.0);
        }
        printf("O yildaki gercek nufus: %.3f milyar\n", temp);
    }
    else {
        printf("\nNufus 75 yil icinde iki katina cikmadi.\n");
    }

    return 0;
}

/*
 * ===================================================================
 * PROGRAM NASIL CALISIR?
 * ===================================================================
 *
 * NUFUS ARTISI FORMULU:
 * =====================
 *
 * Yeni Nufus = Eski Nufus × (1 + Artis Orani / 100)
 *
 * Ornek:
 * ------
 * Guncel nufus = 8.0 milyar
 * Artis orani = 1.1%
 *
 * 1. yil: 8.0 milyar
 * 2. yil: 8.0 × (1 + 1.1/100) = 8.0 × 1.011 = 8.088 milyar
 * 3. yil: 8.088 × 1.011 = 8.177 milyar
 * 4. yil: 8.177 × 1.011 = 8.267 milyar
 * ... ve boyle devam eder
 *
 *
 * BIRLESIK FAIZ MANTIGI:
 * ======================
 *
 * Bu hesaplama bankadaki faiz hesaplamasi ile aynidir.
 * Her yil, bir onceki yilin toplami uzerine artis uygulanir.
 *
 * Genel formul:
 * Nufus(n) = Nufus(0) × (1 + r)^n
 *
 * Burada:
 *   - Nufus(n) = n. yildaki nufus
 *   - Nufus(0) = baslangic nufusu
 *   - r = artis orani (ondalik olarak, ornek: 0.011)
 *   - n = yil sayisi
 *
 *
 * IKI KATINA CIKMA HESABI:
 * ========================
 *
 * Nufusun iki katina cikmasi icin:
 * Nufus(n) >= 2 × Nufus(0)
 *
 * Matematiksel olarak:
 * Nufus(0) × (1 + r)^n >= 2 × Nufus(0)
 * (1 + r)^n >= 2
 * n >= log(2) / log(1 + r)
 *
 * Bu "Ikiye Katlama Suresi" (Doubling Time) olarak bilinir.
 *
 * Pratik kural (Rule of 70):
 * Yaklasik Ikiye Katlama Suresi = 70 / Yuzde Artis Orani
 *
 * Ornek: %1.1 artis orani icin
 * Ikiye Katlama Suresi ≈ 70 / 1.1 ≈ 63.6 yil
 *
 *
 * ORNEK CIKTI:
 * ============
 *
 * Girdi: Nufus = 8.0 milyar, Artis = 1.1%
 *
 * Yil |  Nufus  | Artis Orani | Artis Miktari
 * ----|---------|-------------|---------------
 *  1  |  8.000  |    1.10     |    0.000
 *  2  |  8.088  |    1.10     |    0.088
 *  3  |  8.177  |    1.10     |    0.089
 *  4  |  8.267  |    1.10     |    0.090
 * ...
 * 64  | 16.039  |    1.10     |    0.174
 *
 * Nufus 64. yilda iki katina cikti!
 *
 *
 * GERCEKCIL DEGERLER (2024):
 * ==========================
 *
 * Guncel dunya nufusu: ~8.1 milyar
 * Ortalama artis orani: ~1.0% (azaliyor)
 *
 * Tarihsel artis oranlari:
 *   - 1950-1960: ~1.8%
 *   - 1960-1970: ~2.1% (en yuksek)
 *   - 1970-1980: ~1.9%
 *   - 1980-1990: ~1.7%
 *   - 1990-2000: ~1.4%
 *   - 2000-2010: ~1.2%
 *   - 2010-2020: ~1.1%
 *   - 2020-2024: ~1.0%
 *
 * BM tahminleri:
 *   - 2030: ~8.5 milyar
 *   - 2050: ~9.7 milyar
 *   - 2100: ~10.4 milyar (zirve)
 *
 *
 * DOUBLE KULLANIMI:
 * =================
 *
 * Bu programda 'double' (cift hassasiyetli) kullaniyoruz cunku:
 *   - Nufus sayilari cok buyuk (milyarlar)
 *   - Ondalik hassasiyet gerekli
 *   - float yetersiz kalabilir
 *
 * double:
 *   - 8 byte (64 bit)
 *   - ~15-17 basamak hassasiyet
 *   - Aralik: ±10^308
 *
 * float:
 *   - 4 byte (32 bit)
 *   - ~6-7 basamak hassasiyet
 *   - Aralik: ±10^38
 *
 * Format belirtecleri:
 *   - %f   : float veya double icin
 *   - %lf  : scanf icin double
 *   - %.3f : 3 ondalik basamak
 *
 * ===================================================================
 */
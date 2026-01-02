/*
 * DOĞRULUK TABLOLARI (Truth Tables)
 *
 * Programlamada mantıksal operatörler boolean (doğru/yanlış) değerlerle çalışır:
 * - 0 = YANLIŞ (false)
 * - Sıfırdan farklı herhangi bir sayı = DOĞRU (true) Genellikle 1 kullanılır.
 *
 * ============================================================================
 * 1. && (VE - AND) OPERATÖRÜ
 * ============================================================================
 * Her iki koşul da DOĞRU olmalı ki sonuç DOĞRU olsun.
 *
 * Koşul 1    Koşul 2    Sonuç (Koşul1 && Koşul2)
 * -------    -------    ------------------------
 *   0          0              0        (yanlış && yanlış = yanlış)
 *   0          1              0        (yanlış && doğru = yanlış)
 *   1          0              0        (doğru && yanlış = yanlış)
 *   1          1              1        (doğru && doğru = DOĞRU)
 *
 * Günlük Hayat Örneği:
 * "Eğer param varsa VE hava güzelse, sinemaya giderim."
 * Her iki koşul da sağlanmalı!
 *
 * Kod Örneği:
 * if (yas >= 18 && ehliyet == 1) {
 *     printf("Araba kullanabilirsin.\n");
 * }
 *
 * ============================================================================
 * 2. || (VEYA - OR) OPERATÖRÜ
 * ============================================================================
 * En az bir koşul DOĞRU olursa sonuç DOĞRU olur.
 *
 * Koşul 1    Koşul 2    Sonuç (Koşul1 || Koşul2)
 * -------    -------    ------------------------
 *   0          0              0        (yanlış || yanlış = yanlış)
 *   0          1              1        (yanlış || doğru = DOĞRU)
 *   1          0              1        (doğru || yanlış = DOĞRU)
 *   1          1              1        (doğru || doğru = DOĞRU)
 *
 * Günlük Hayat Örneği:
 * "Eğer param varsa VEYA kredi kartım varsa, alışveriş yapabilirim."
 * İkisinden biri yeterli!
 *
 * Kod Örneği:
 * if (ogrenci == 1 || yas < 18) {
 *     printf("İndirimli bilet alabilirsin.\n");
 * }
 *
 * ============================================================================
 * 3. ! (DEĞİL - NOT) OPERATÖRÜ
 * ============================================================================
 * Koşulun tersini alır.
 *
 * Koşul 1    Sonuç (!Koşul1)
 * -------    ---------------
 *   0              1        (yanlışın tersi = doğru)
 *   1              0        (doğrunun tersi = yanlış)
 *
 * Günlük Hayat Örneği:
 * "Eğer yağmur yağmıyorsa, pikniğe gidelim."
 *
 * Kod Örneği:
 * if (!yagmurYagiyor) {
 *     printf("Pikniğe gidebiliriz!\n");
 * }
 *
 * ============================================================================
 * GERÇEK HAYATTAN ÖRNEKLER
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    // Örnek 1: Giriş Kontrolü (&&)
    printf("=== ÖRNEK 1: GİRİŞ KONTROLÜ (&&) ===\n");
    int kullaniciAdi = 1;  // 1 = doğru kullanıcı adı
    int sifre = 1;         // 1 = doğru şifre

    if (kullaniciAdi && sifre) {
        printf("Giriş başarılı! Her iki bilgi de doğru.\n\n");
    }

    // Örnek 2: İndirim Kontrolü (||)
    printf("=== ÖRNEK 2: İNDİRİM KONTROLÜ (||) ===\n");
    int ogrenci = 0;  // 0 = öğrenci değil
    int yas = 16;     // yaş 16

    if (ogrenci || yas < 18) {
        printf("İndirim hakkın var! (Öğrenci veya 18 yaş altı)\n\n");
    }

    // Örnek 3: Alarm Sistemi (!)
    printf("=== ÖRNEK 3: ALARM SİSTEMİ (!) ===\n");
    int evde = 0;  // 0 = evde kimse yok

    if (!evde) {
        printf("Alarm sistemi aktif! (Evde kimse yok)\n\n");
    }

    // Örnek 4: Karmaşık Koşul (Kombine)
    printf("=== ÖRNEK 4: ARABA KİRALAMA (KOMBİNE) ===\n");
    int ehliyet = 1;
    int yasAraligi = 25;
    int krediKarti = 1;

    if (ehliyet && (yasAraligi >= 21 && yasAraligi <= 70) && krediKarti) {
        printf("Araba kiralayabilirsiniz!\n");
        printf("- Ehliyetiniz var: %s\n", ehliyet ? "Evet" : "Hayır");
        printf("- Yaşınız uygun: %s\n", (yasAraligi >= 21 && yasAraligi <= 70) ? "Evet" : "Hayır");
        printf("- Kredi kartınız var: %s\n\n", krediKarti ? "Evet" : "Hayır");
    }

    // Örnek 5: Doğruluk Tablosu Demonstrasyonu
    printf("=== ÖRNEK 5: DOĞRULUK TABLOSU PRATİĞİ ===\n");
    printf("a\tb\ta && b\ta || b\t!a\n");
    printf("--\t--\t------\t------\t--\n");

    int a, b;
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("%d\t%d\t%d\t%d\t%d\n",
                a, b, a && b, a || b, !a);
        }
    }

    return 0;
}

/*
 * ============================================================================
 * ÖNEMLİ NOTLAR
 * ============================================================================
 *
 * 1. Kısa Devre (Short-Circuit) Değerlendirme:
 *    - (0 && x) → x hiç kontrol edilmez, sonuç kesin 0
 *    - (1 || x) → x hiç kontrol edilmez, sonuç kesin 1
 *
 * 2. Öncelik Sırası:
 *    !  (en yüksek öncelik)
 *    &&
 *    ||  (en düşük öncelik)
 *
 * 3. Karşılaştırma Operatörleriyle Kullanım:
 *    if (x > 0 && x < 100)  // x, 0 ile 100 arasında mı?
 *    if (x == 0 || x == 10) // x, 0 veya 10'a eşit mi?
 *
 * 4. Yaygın Hatalar:
 *    - YANLIŞ: if (x > 0 && < 100)
 *    - DOĞRU:  if (x > 0 && x < 100)
 *
 * ============================================================================
 */
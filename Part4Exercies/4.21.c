/*
 * SAYI SİSTEMLERİ DÖNÜŞÜM TABLOSU
 *
 * Bu program 1'den 256'ya kadar olan sayıların farklı sayı sistemlerindeki
 * karşılıklarını gösteren bir tablo oluşturur.
 *
 * SAYI SİSTEMLERİ:
 * ================
 * - Onluk (Decimal):     Taban 10 (0-9 rakamları)
 * - İkilik (Binary):     Taban 2  (0-1 rakamları)
 * - Sekizlik (Octal):    Taban 8  (0-7 rakamları)
 * - Onaltılık (Hex):     Taban 16 (0-9, A-F karakterleri)
 *
 * PRINTF FORMAT BELİRTEÇLERİ:
 * ===========================
 * %d veya %i  → Onluk (decimal) sayı
 * %o          → Sekizlik (octal) sayı
 * %x          → Onaltılık (hexadecimal) küçük harfle (a-f)
 * %X          → Onaltılık (hexadecimal) büyük harfle (A-F)
 *
 * İkilik sistem için C'de doğrudan format belirteci yok,
 * bu yüzden manuel dönüşüm yapmamız gerekiyor.
 */

#include <stdio.h>

 // İkilik sistem için yardımcı fonksiyon
void onlukIkilik(int sayi) {
    // 8 bitlik ikili gösterim için
    int ikilik[8];
    int i;

    // Sayıyı ikiliye çevirme
    for (i = 7; i >= 0; i--) {
        ikilik[i] = sayi % 2;
        sayi = sayi / 2;
    }

    // İkili sayıyı yazdırma
    for (i = 0; i < 8; i++) {
        printf("%d", ikilik[i]);
    }
}

int main(void) {
    int sayi;

    printf("╔════════════════════════════════════════════════════════════╗\n");
    printf("║        SAYI SİSTEMLERİ DÖNÜŞÜM TABLOSU (1-256)           ║\n");
    printf("╠════════════════════════════════════════════════════════════╣\n");
    printf("║  Onluk  │   İkilik   │  Sekizlik  │    Onaltılık         ║\n");
    printf("║ (Dec)   │   (Bin)    │   (Oct)    │      (Hex)           ║\n");
    printf("╠═════════╪════════════╪════════════╪══════════════════════╣\n");

    // 1'den 256'ya kadar döngü
    for (sayi = 1; sayi <= 256; sayi++) {
        printf("║  %3d    │  ", sayi);

        // İkilik gösterim
        onlukIkilik(sayi);

        // Sekizlik ve Onaltılık gösterim
        printf("  │    %3o     │      %2X (%2x)        ║\n",
            sayi, sayi, sayi);

        // Her 16 sayıda bir ayırıcı çizgi (okunabilirlik için)
        if (sayi % 16 == 0 && sayi != 256) {
            printf("╟─────────┼────────────┼────────────┼──────────────────────╢\n");
        }
    }

    printf("╚════════════════════════════════════════════════════════════╝\n");

    // Ek örnekler ve açıklamalar
    printf("\n");
    printf("═══════════════════════════════════════════════════════════════\n");
    printf("                    ÖRNEK DÖNÜŞÜMLER\n");
    printf("═══════════════════════════════════════════════════════════════\n\n");

    printf("Örnek 1: Sayı 10\n");
    printf("  Onluk:     %d\n", 10);
    printf("  İkilik:    ");
    onlukIkilik(10);
    printf("\n");
    printf("  Sekizlik:  %o\n", 10);
    printf("  Onaltılık: %X (büyük), %x (küçük)\n\n", 10, 10);

    printf("Örnek 2: Sayı 255\n");
    printf("  Onluk:     %d\n", 255);
    printf("  İkilik:    ");
    onlukIkilik(255);
    printf("\n");
    printf("  Sekizlik:  %o\n", 255);
    printf("  Onaltılık: %X (büyük), %x (küçük)\n\n", 255, 255);

    printf("Örnek 3: Sayı 256\n");
    printf("  Onluk:     %d\n", 256);
    printf("  İkilik:    ");
    onlukIkilik(256);
    printf(" (9 bit gerekir, sadece son 8 bit gösteriliyor)\n");
    printf("  Sekizlik:  %o\n", 256);
    printf("  Onaltılık: %X (büyük), %x (küçük)\n\n", 256, 256);

    // Önemli notlar
    printf("═══════════════════════════════════════════════════════════════\n");
    printf("                      ÖNEMLİ NOTLAR\n");
    printf("═══════════════════════════════════════════════════════════════\n\n");
    printf("1. İkilik sistem (Binary): Her basamak 2'nin kuvveti\n");
    printf("   Örnek: 1010 = 1×8 + 0×4 + 1×2 + 0×1 = 10\n\n");

    printf("2. Sekizlik sistem (Octal): Her basamak 8'in kuvveti\n");
    printf("   Örnek: 12 (sekizlik) = 1×8 + 2×1 = 10 (onluk)\n\n");

    printf("3. Onaltılık sistem (Hexadecimal): Her basamak 16'nın kuvveti\n");
    printf("   Örnek: A (onaltılık) = 10 (onluk)\n");
    printf("   Örnek: FF (onaltılık) = 15×16 + 15×1 = 255 (onluk)\n\n");

    printf("4. Programlamada kullanım:\n");
    printf("   - 0b1010 veya 0B1010 → İkilik literal (C23)\n");
    printf("   - 012 → Sekizlik literal (başta 0)\n");
    printf("   - 0xA veya 0XA → Onaltılık literal (başta 0x)\n\n");

    return 0;
}

/*
 * ════════════════════════════════════════════════════════════════════════
 * SAYI SİSTEMLERİ HAKKINDA DETAYLI BİLGİ
 * ════════════════════════════════════════════════════════════════════════
 *
 * NEDEN FARKLI SAYI SİSTEMLERİ KULLANILIR?
 * =========================================
 *
 * 1. İKİLİK (BINARY):
 *    - Bilgisayarlar elektriksel sinyallerle çalışır (açık/kapalı)
 *    - Tüm veriler temelde ikilik sistemde saklanır
 *    - Bit manipülasyonu ve düşük seviye programlama için gerekli
 *
 * 2. SEKİZLİK (OCTAL):
 *    - 3 bit'i tek rakamla gösterir (2³ = 8)
 *    - Unix/Linux dosya izinlerinde kullanılır (örn: chmod 755)
 *    - İkilik sayıları daha kısa göstermek için kullanılırdı
 *
 * 3. ONALTILIK (HEXADECIMAL):
 *    - 4 bit'i tek rakamla gösterir (2⁴ = 16)
 *    - Bellek adresleri hex ile gösterilir
 *    - Renk kodları hex ile yazılır (#FF0000 = kırmızı)
 *    - İkilik sayıları çok daha kısa gösterir
 *
 * DÖNÜŞÜM ÖRNEKLERİ:
 * ==================
 *
 * Sayı 100:
 * ---------
 * Onluk:     100
 * İkilik:    01100100
 * Sekizlik:  144        (1×64 + 4×8 + 4×1 = 100)
 * Onaltılık: 64         (6×16 + 4×1 = 100)
 *
 * Sayı 255:
 * ---------
 * Onluk:     255
 * İkilik:    11111111   (8 bit hepsi 1)
 * Sekizlik:  377        (3×64 + 7×8 + 7×1 = 255)
 * Onaltılık: FF         (15×16 + 15×1 = 255)
 *
 * PROGRAMLAMADA KULLANIM:
 * =======================
 *
 * int a = 10;      // Onluk
 * int b = 012;     // Sekizlik (başta 0 var!)
 * int c = 0xA;     // Onaltılık (başta 0x var!)
 *
 * printf("%d", a);    // Onluk olarak yazdır
 * printf("%o", a);    // Sekizlik olarak yazdır
 * printf("%x", a);    // Onaltılık olarak yazdır
 * printf("%X", a);    // Onaltılık (BÜYÜK) olarak yazdır
 *
 * BİT MASKELEME ÖRNEĞİ:
 * =====================
 *
 * unsigned char bayrak = 0xFF;  // 11111111
 * bayrak &= 0xF0;               // 11110000 (alt 4 bit sıfırlandı)
 * bayrak |= 0x0A;               // 11111010 (alt 4 bit'e 1010 yazıldı)
 *
 * ════════════════════════════════════════════════════════════════════════
 */
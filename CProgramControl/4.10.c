///*
//    MANTIKSAL ISLEMLER ( && , || , ! ) VE ISLEM ONCELIGI NOTLARI
//    -------------------------------------------------------------
//
//    Bu dosya, mantıksal VE (&&), mantıksal VEYA (||), mantıksal OLUMSUZLUK (!),
//    işlem önceliği ve _Bool veri türü üzerine kitap bilgisinin özetlenmiş,
//    GitHub'da not olarak saklanmaya uygun biçimde düzenlenmiş halidir.
//
//    ========================================================================
//    1) MANTIKSAL VE ( && ) IFADESI
//    ========================================================================
//
//    - Iki kosulun da DOGRU (true) olması gerekir.
//    - Biri yanlissa sonuç yanlıştır.
//    - Kısa devre (short-circuit) mantığı vardır:
//        → Soldaki kosul yanlıssa sağdaki kosul HİÇ değerlendirilmez.
//
//    Örnek:
//        if (age >= 18 && gender == 1) {
//            // her iki koşul da doğruysa çalışır
//        }
//
//    Dogruluk tablosu:
//        ifade1   ifade2   sonuc
//         0         0        0
//         0         1        0
//         1         0        0
//         1         1        1
//
//
//    ========================================================================
//    2) MANTIKSAL VEYA ( || ) IFADESI
//    ========================================================================
//
//    - Kosullardan EN AZ biri doğru olmalıdır.
//    - IKISİ birden yanlışsa sonuç yanlıştır.
//    - Kısa devre özelliği vardır:
//        → Soldaki koşul doğruysa sağdaki hesaplanmaz.
//
//    Örnek:
//        if (score > 90 || finalExam > 85) {
//            // A alır
//        }
//
//    Dogruluk tablosu:
//        ifade1   ifade2   sonuc
//         0         0        0
//         0         1        1
//         1         0        1
//         1         1        1
//
//
//    ========================================================================
//    3) MANTIKSAL OLUMSUZLUK ( ! ) IFADESI
//    ========================================================================
//
//    - Bir ifadenin tam tersini alır.
//    - true → false , false → true
//
//    Örnek:
//        if (!(x > 10)) {
//            // x 10'dan büyük DEĞİLSE çalışır
//        }
//
//    Dogruluk tablosu:
//        ifade   !ifade
//         0        1
//         1        0
//
//
//    ========================================================================
//    4) _Bool VERI TURU
//    ========================================================================
//
//    - C dilinde bool veri türü yoktur; _Bool vardır.
//    - Her türlü 0 dışı değer → 1 (true) olarak değerlendirilir.
//    - 0 → false
//
//    Örnek:
//        _Bool flag = 5;   // true olarak değerlendirilir
//        printf("%d", flag);   // 1
//
//
//    ========================================================================
//    5) ISLEM ONCELIGI OZETI
//    ========================================================================
//
//    Yüksekten düşüğe işlem önceliği:
//
//        1) !   → mantıksal olumsuzluk
//        2) * , / , %
//        3) + , -
//        4) < , <= , > , >=
//        5) == , !=
//        6) &&
//        7) ||
//
//    Örnek:
//        x = 5 + 3 * 2;   // sonuç: 11
//
//        if (a > 5 && b < 3 || c == 10)
//        Önce > ve < , sonra && , en son || çalışır.
//
//
//    ========================================================================
//    6) KISA KOD ORNEKLERI
//    ========================================================================
//
//    A) Mantıksal VE:
//        if (x > 0 && y > 0) {
//            printf("Iki deger de pozitiftir.\n");
//        }
//
//    B) Mantıksal VEYA:
//        if (x == 0 || y == 0) {
//            printf("Sifir iceren bir durum var.\n");
//        }
//
//    C) Olumsuzluk:
//        if (!flag) {
//            printf("flag false durumunda.\n");
//        }
//
//
//    ========================================================================
//    7) NOTUN AMACI
//    ========================================================================
//
//    Bu dosya, öğrenme sürecinde mantıksal işlemler bölümünden çıkarılmış
//    özet ve referans niteliğinde bir nottur. GitHub'da "notlar" veya
//    "learning-c" klasörlerinde saklamaya uygundur.
//*/
//
//#include <stdio.h>
//#include <stdbool.h>
//
//int main() {
//    
//    return 0;
//}
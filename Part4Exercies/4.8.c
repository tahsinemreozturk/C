////#include <stdio.h>
////
////int main(void)
////{
////	unsigned int x;
////	unsigned int y;
////	unsigned int i;
////	unsigned int j;
////
////	printf("%s", "Enter two unsigned  integers in the range 1-20: ");
////	scanf_s("%u%u", &x, &y);
////
////	for (i = 1; i <= y; ++i)
////	{
////		for (j = 1; j <= x; ++j)
////		{
////			printf("%s", "@");
////		}
////
////		puts(""); 
////	}
////}
//
//
///*
//    FORMAT BELIRTECleri ve printf KULLANIMI OZETI
//    ---------------------------------------------
//    Bu dosya, C dilinde printf fonksiyonunda
//    kullanilan format belirteclerini (%d, %u, %c, %s)
//    ve bunlarin DOGRU / YANLIS kullanimlarini
//    aciklamak amaciyla hazirlanmistir.
//
//    Ozellikle ele alinan konular:
//    - %s nedir, ne ise yarar?
//    - %s ne zaman kullanilmali?
//    - Tek karakter yazdirirken neden %s yanlis?
//    - printf icinde string dogrudan yazdirilabilir mi?
//    - scanf / scanf_s formatlari nasil calisir?
//
//    Bu dosya GitHub uzerinde "ders notu" olarak
//    saklanmaya uygundur.
//*/
//
//#include <stdio.h>
//
//int main(void)
//{
//    // ============================================================
//    // 1) printf VE FORMAT BELIRTEC KAVRAMI
//    // ============================================================
//    // printf, ekrana cikti yazdirmak icin kullanilir.
//    // Icinde format belirtecler (%d, %c, %s, %u vb.) bulunabilir.
//    //
//    // Bu belirtecler, printf'e verilen degerin TURLERINI belirtir.
//
//
//    // ============================================================
//    // 2) %s NEDIR?
//    // ============================================================
//    // %s -> STRING (karakter dizisi) yazdirmak icin kullanilir.
//    //
//    // STRING:
//    //  - C'de cift tirnak " " icindedir
//    //  - Birden fazla karakterden olusur
//    //  - '\0' ile sonlanir
//
//
//    // ============================================================
//    // 3) %s KULLANIMINA DOGRU ORNEK
//    // ============================================================
//
//    printf("%s", "Enter two unsigned integers in the range 1-20: ");
//
//    // Yukaridaki kod DOGRUDUR cunku:
//    // - "Enter two unsigned integers in the range 1-20: "
//    //   bir STRING'dir
//    // - %s string yazdirmak icindir
//
//
//    // ============================================================
//    // 4) DAHA TEMIZ VE TERCIH EDILEN KULLANIM
//    // ============================================================
//    // C'de printf, stringleri format belirtci olmadan da yazdirabilir.
//
//    printf("Enter two unsigned integers in the range 1-20: ");
//
//    // Bu yontem:
//    // - Daha okunaklidir
//    // - Daha yaygin kullanilir
//    // - SINAVLARDA ve GERCEK PROJELERDE tercih edilir
//
//
//    // ============================================================
//    // 5) %s ILE TEK KARAKTER YAZDIRMAK
//    // ============================================================
//    // Asagidaki kod C tarafindan CALISIR ama MANTIKSAL olarak yanlistir.
//
//    printf("%s", "@");
//
//    // Neden?
//    // - "@" cift tirnak icindedir -> STRING
//    // - Ama tek bir karakter yazdirilmaktadir
//    //
//    // Bu kod calisir AMA:
//    // - Gereksizdir
//    // - Ogrenme acisindan yanlis aliskanliktir
//
//
//    // ============================================================
//    // 6) TEK KARAKTER ICIN DOGRU KULLANIM
//    // ============================================================
//
//    printf("%c", '@');
//
//    // %c -> CHAR (tek karakter) yazdirmak icin kullanilir
//    // ' ' -> char
//    // " " -> string
//
//
//    // ============================================================
//    // 7) IC ICE FOR DONGUSU VE printf("%s", "@") ORNEGI
//    // ============================================================
//    // Bu kisimda kitapta gecen kod mantigi aciklanmaktadir.
//
//    unsigned int x = 5;
//    unsigned int y = 3;
//    unsigned int i, j;
//
//    for (i = 1; i <= y; i++)
//    {
//        for (j = 1; j <= x; j++)
//        {
//            printf("%s", "@");
//        }
//
//        puts("");
//    }
//
//    // Yukaridaki kodun yaptigi is:
//    //
//    // - y satir
//    // - her satirda x tane @ karakteri yazdirir
//    //
//    // Ornek cikti:
//    // @@@@@
//    // @@@@@
//    // @@@@@
//    //
//    // NOT:
//    // printf("%c", '@'); kullanmak daha DOGRU olurdu
//
//
//    // ============================================================
//    // 8) scanf_s VE FORMAT BELIRTEC
//    // ============================================================
//
//    unsigned int a, b;
//
//    scanf_s("%u%u", &a, &b);
//
//    // %u -> unsigned int
//    // &a, &b -> degiskenlerin adresleri
//    //
//    // scanf / scanf_s:
//    // - KULLANICIDAN veri okur
//    // - Format belirtci girilen verinin TURLERINI belirtir
//
//
//    // ============================================================
//    // 9) KISA FORMAT BELIRTEC OZETI
//    // ============================================================
//    //
//    // %d -> int
//    // %u -> unsigned int
//    // %c -> char
//    // %s -> string
//    // %f -> float / double
//    //
//    // EN COK YAPILAN HATA:
//    // - %s ile char yazdirmaya calismak
//    // - %c ile string yazdirmaya calismak
//
//
//    // ============================================================
//    // 10) AKILDA KALICI KURAL
//    // ============================================================
//    //
//    // 'A'  -> char  -> %c
//    // "A"  -> string -> %s
//    // "Merhaba" -> string -> %s veya direkt printf("Merhaba");
//    //
//    // Tek karakter -> %c
//    // Metin        -> %s
//
//
//    return 0;
//}

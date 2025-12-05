/*
    BREAK, CONTINUE ve DO...WHILE IFADESI NOTLARI
    ----------------------------------------------

    Bu dosya, C dilindeki "break", "continue" ve "do...while" tekrar yapısı
    hakkındaki kitap bilgisinin özet ve anlaşılır şekilde toparlanmış halidir.
    GitHub üzerinde not olarak saklanabilecek düzenli bir dokümandır.


    ================================================================
    1) BREAK IFADESI
    ================================================================

    break; → Kullanıldığı yerde döngüyü (for, while, do...while) veya
              switch yapısını ANINDA sonlandırır.

    Temel özellikler:
        - break çalıştığı anda döngü içinde kalan hiçbir ifade çalışmaz.
        - Program akışı döngünün hemen SONRASINA atlar.
        - En çok döngüden erken çıkmak için kullanılır.

    Örnek kullanım:
        for (x = 1; x <= 10; x++) {
            if (x == 5) {
                break;      // döngü anında biter
            }
            printf("%u ", x);
        }
        // ÇIKTI: 1 2 3 4


    ================================================================
    2) CONTINUE IFADESI
    ================================================================

    continue; → Bulunduğu döngüde, continue’dan sonraki kalan kodu atlayan
                 ve döngünün bir SONRAKİ adımına geçiren ifadedir.

    ÖNEMLİ: continue döngüyü sonlandırmaz → sadece o adımı atlar.

    Kullanım mantığı döngü tipine göre:
        - for döngüsü:
            continue → arttırma ifadesine atlar → sonra koşul test edilir.
        - while döngüsü:
            continue → direkt koşul testine atlar.
        - do...while döngüsü:
            continue → direkt koşul testine atlar.

    Örnek:
        for (x = 1; x <= 10; x++) {
            if (x == 5) {
                continue;       // 5 yazılmaz, sonraki iterasyona geçilir
            }
            printf("%u ", x);
        }
        // ÇIKTI: 1 2 3 4 6 7 8 9 10


    ================================================================
    3) BREAK vs CONTINUE KARSILASTIRMASI
    ================================================================

        break:
            - Döngüyü tamamen bitirir.
            - Döngüden çıkılır.

        continue:
            - Döngüyü bitirmez.
            - Yalnızca o iterasyonun kalan kısmını atlar.
            - Döngü devam eder.

    Kısa özet:
        break → "Bu döngü artık bitsin."
        continue → "Bu adımdaki kalan işlemleri atla, sona geç."


    ================================================================
    4) DO...WHILE TEKRARLAMA IFADESI
    ================================================================

    Yapısı:
        do {
            ifade(ler)
        } while (koşul);

    Temel fark:
        - while'dan farklı olarak döngü gövdesi EN AZ BİR KEZ çalışır.
        - Çünkü koşul sondan kontrol edilir.

    Akış mantığı:
        1) Gövde bir kere çalıştırılır.
        2) Koşul test edilir.
        3) Koşul doğruysa döngü tekrar eder.

    Örnek:
        unsigned int counter = 1;

        do {
            printf("%u ", counter);
        } while (++counter <= 10);

    ÇIKTI:
        1 2 3 4 5 6 7 8 9 10


    ================================================================
    5) DO...WHILE ILE ILGILI KITAPTAN ALINAN ONEMLI NOTLAR
    ================================================================

    - Gövde en az bir kez çalışacağı için “do” kelimesinden sonra gelen ifade
      koştan bağımsız olarak yürütülür.
    - Do...while gövdesi tek bir ifade içeriyorsa bile genelde { } kullanılır.
      Çünkü şu ikisi karışıklık çıkarabilir:

            while (koşul)
                ifade

            do
                ifade
            while (koşul);

      Bu yüzden kitap önerisi: Tek ifade de olsa süslü parantez kullanın.

    - Döngü devam koşulu sondan kontrol edildiği için özellikle sayaç
      arttırmalarında dikkatli olunmalıdır.

    ================================================================
    6) CONTINUE ILE DO...WHILE ILISKISI
    ================================================================

    continue ifadesi do...while içinde çalıştığında:

       - gövdenin kalan kısmını atlar
       - direkt olarak koşul testine gider

    Örnek:
        int x = 0;

        do {
            x++;

            if (x == 3) {
                continue;      // 3 ekrana yazılmaz
            }

            printf("%d ", x);
        } while (x < 5);

    ÇIKTI: 1 2 4 5


    ================================================================
    7) YAYGIN PROGRAMLAMA HATALARI (KITAPTAN OZET)
    ================================================================

    1) break ve continue'yu yapı içinde neler yaptığı anlaşılmadan kullanmak
       kontrol akışını gereksiz zorlaştırabilir.

    2) Döngü koşulunu yanlış kurmak, döngünün sonsuza girmesine neden olabilir.

    3) do...while’da koşul sonda olduğu için beklenmedik bir kere çalıştırma
       hataları olabilir.

    4) for döngüsünde continue kullanırken arttırma ifadesi yine çalışacağı için
       sayaç mantığınız buna uygun olmalıdır.


    ================================================================
    8) KISA ÖRNEKLER (KOD BLOKLARI)
    ================================================================

    A) break örneği:
        for (int i = 1; i <= 10; i++) {
            if (i == 5) break;
            printf("%d ", i);
        }

    B) continue örneği:
        for (int i = 1; i <= 10; i++) {
            if (i == 5) continue;
            printf("%d ", i);
        }

    C) do...while örneği:
        int x = 1;
        do {
            printf("%d ", x++);
        } while (x <= 5);


    ================================================================
    9) NOTUN AMACI
    ================================================================

    Bu .c dosyasının amacı öğretici bir program dosyasından çok,
    kitap okuduktan sonra çıkarılmış bir ders özeti niteliğindedir.
    GitHub deposunda "notlar" veya "learning-c" tarzı klasörlerde
    saklamaya uygundur.
*/


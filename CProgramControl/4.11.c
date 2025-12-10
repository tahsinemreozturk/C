///*
//* 
//*  // NOT: Bu dosya bir uygulama programı değil, ders özeti niteliğindedir.
//* 
//    ESITLIK (==) ve ATAMA (=) ISLEMLERINI KARSILASTIRMA NOTLARI
//    -----------------------------------------------------------
//
//    Bu dosya, C dilinde en sık yapılan hatalardan biri olan
//    "== (eşitlik)" ile "= (atama)" işlemlerinin karıştırılmasını
//    açıklayan düzenli bir not dokümanıdır.
//    Github üzerinde "learning-c" / "notlar" klasöründe saklamaya uygundur.
//
//
//    ================================================================
//    1) EN YAYGIN HATA: == ve = ISLEMLERINI KARIŞTIRMAK
//    ================================================================
//
//    Çok sık yapılan hata:
//
//        if (payCode = 4)
//
//    yerine aslında yazılması gereken:
//
//        if (payCode == 4)
//
//    Hatanın nedeni:
//        - `=` atama işlemidir → soldaki değişkene sağdaki değeri yazar.
//        - `==` eşitlik karşılaştırmasıdır → iki değerin eşit olup olmadığını kontrol eder.
//
//    C dilinde `=` ifadesi bir DEGER DONDURUR.
//        Örnek: (payCode = 4) ifadesi payCode'u 4 yapar VE 4 değerini geri döndürür.
//
//    C'de sıfır dışındaki her değer "doğru" kabul edildiğinden:
//        if (payCode = 4)  → koşul HER ZAMAN DOĞRU olur.
//
//    Bu yüzden program yanlış davranır.
//
//
//    ================================================================
//    2) DOĞRU VE YANLIŞ KULLANIM ÖRNEĞİ
//    ================================================================
//
//    Doğru kullanım:
//        if (payCode == 4)
//            printf("You get a bonus!\n");
//
//    Yanlış kullanım:
//        if (payCode = 4)
//            printf("You get a bonus!\n");
//
//    İlk örnek: payCode gerçekten 4 ise çalışır.
//    İkinci örnek: payCode'a 4 atanır, 4 true sayıldığı için KOŞUL HER ZAMAN çalışır.
//
//
//    ================================================================
//    3) LVALUE ve RVALUE KAVRAMLARI
//    ================================================================
//
//    C dilinde:
//        - Lvalue: Sol tarafta yer alabilen isimlendirilmiş alan (değişken).
//        - Rvalue: Sadece sağ tarafta kullanılabilen değerler (sabitler, ifadelerin sonucu).
//
//    Örnek:
//        x = 7;   → x = lvalue, 7 = rvalue
//
//    7 = x gibi bir ifade C dilinde GEÇERSİZDIR çünkü sabitler sol tarafta olamaz.
//
//    Bu mantık, == yerine yanlışlıkla = yazıldığında oluşabilecek hataları engeller.
//
//
//    ================================================================
//    4) HATA ÖNLEME ÖNERİLERİ
//    ================================================================
//
//    Öneri 1 — Sabiti solda kullanma tekniği (Yoda Conditions):
//        if (4 == x)
//
//    Bu teknik sayesinde yanlışlıkla şöyle yazamazsınız:
//        if (4 = x)  // GEÇERSİZ, derleyici hata verir.
//
//    Öneri 2 — Kod bitince arama yap:
//        Programı bitirdikten sonra tüm "=" ve "==" işlemlerini
//        "Find" ile tarayıp doğru yazıldığına emin ol.
//
//    Öneri 3 — Derleyici Uyarılarını Aç:
//        Modern derleyiciler (gcc -Wall) `if (x = 1)` gibi durumlarda uyarı verir.
//
//
//    ================================================================
//    5) TEK IFADENIN == YERINE = ILE KARIŞTIRILMASI
//    ================================================================
//
//    x = 1;   → Doğru, x'e 1 atanır.
//    x == 1; → Doğru, karşılaştırma yapılır.
//
//    Fakat şöyle yazarsan:
//
//        if (x = 1)
//
//    - Bu bir sözdizimi hatası değildir.
//    - x'e 1 atanır → ifade 1 döndürür → 1 TRUE olduğu için koşul HER ZAMAN çalışır.
//
//    Bu nedenle değer kayıpları, mantık hataları oluşur.
//
//
//    ================================================================
//    6) KISA ÖRNEKLER
//    ================================================================
//
//    A) Yanlış kullanım:
//        int x = 0;
//        if (x = 5) {
//            printf("Calisir!\n"); // koşul her zaman 5 -> dogru
//        }
//
//    B) Doğru kullanım:
//        if (x == 5) {
//            printf("Esit!\n");
//        }
//
//    C) Lvalue / Rvalue örneği:
//        int x;
//        x = 7;       // geçerli
//        7 = x;       // GEÇERSİZ
//
//
//    ================================================================
//    7) NOTUN AMACI
//    ================================================================
//
//    Bu .c dosyası eğitsel bir açıklama dosyasıdır.
//    Amacı, == ve = karışıklığından doğan hataları önlemek ve temel
//    mantığı sade bir şekilde aktarmaktır.
//
//*/
//
//#include <stdio.h>
//
//int main() {
//
//    // ------------------------------------------------------------
//    // 1. Doğru Kullanım: Eşitlik Karşılaştırması (==)
//    // ------------------------------------------------------------
//    // Aşağıdaki ifade payCode'un 4 olup olmadığını karşılaştırır.
//    // '==' eşitlik işlemcisidir ve sadece TRUE/FALSE döndürür.
//
//    int payCode = 4;
//
//    if (payCode == 4)  // Doğru kullanım
//        printf("You get a bonus! (== ile kontrol edildi)\n");
//
//
//    // ------------------------------------------------------------
//    // 2. Hatalı Kullanım: Atama (=) İşlemini Koşulda Kullanmak
//    // ------------------------------------------------------------
//    // Aşağıdaki ifade büyük bir mantık hatasıdır çünkü:
//    //
//    //  - (payCode = 4) bir ATAMA işlemidir.
//    //  - payCode artık 4 olur.
//    //  - Atama işlemi atanan değeri döndürür → yani 4.
//    //  - C'de 0 dışındaki tüm değerler TRUE kabul edilir.
//    //
//    // Sonuç: Koşul her zaman DOĞRU’dur.
//
//    if (payCode = 4)  // HATALI! Atama yapılıyor!
//        printf("Bu ifade HER ZAMAN calisir! Çünkü payCode = 4 yapılmış olur.\n");
//
//
//    // ------------------------------------------------------------
//    // 3. Lvalue ve Rvalue Açıklaması
//    // ------------------------------------------------------------
//    // Lvalue  → sol tarafa yazılabilen, atanabilen değer.
//    // Rvalue  → sadece sağ tarafta kullanılabilen, atanamayan değer.
//    //
//    // Örnekler:
//    //   Lvalue: x, data[3], *ptr
//    //   Rvalue: 7, x + 2, fonksiyon dönüş değeri
//    //
//    // Aşağıdaki ifade doğrudur:
//    //   x = 7;
//    //
//    // Ancak bu yanlıştır:
//    //   7 = x;   // Derleyici hata verir. 7 bir lvalue değildir.
//
//
//    int x = 1;  // lvalue olan x'e rvalue olan 1 atanıyor (doğru)
//
//    // ------------------------------------------------------------
//    // 4. Tek İfadelerde == ve = Karıştırılması
//    // ------------------------------------------------------------
//    // Eğer x = 1; yazmak isterken yanlışlıkla x == 1; yazarsanız:
//    //
//    //  - Bu bir atama değildir.
//    //  - Sadece bir karşılaştırma yapar.
//    //  - x'in değeri ASLA değişmez.
//    //
//    // Program davranışı tamamen beklenmedik olabilir.
//
//    x == 1;  // Bu yalnızca karşılaştırmadır, atama değildir!
//
//
//    // ------------------------------------------------------------
//    // 5. Hata Önleme Önerisi 1 — Sabiti Sola Yazma Tekniği
//    // ------------------------------------------------------------
//    // Bu teknik mantık hatalarını otomatik yakalar:
//    //
//    //     if (4 == payCode)
//    //
//    // Eğer yanlışlıkla '=' kullanırsanız:
//    //
//    //     if (4 = payCode)
//    //
//    // Derleme hatası olur çünkü 4 bir lvalue değildir.
//    //
//    // Böylece hata erkenden yakalanır.
//
//    if (4 == payCode)   // Güvenli stil
//        printf("Sabiti sola yazma teknigi kullanildi.\n");
//
//
//    // ------------------------------------------------------------
//    // 6. Hata Önleme Önerisi 2 — Kod Sonu Taraması
//    // ------------------------------------------------------------
//    // Programı yazdıktan sonra tüm '=' işaretlerini tarayın:
//    //
//    //   - Atama olması gereken yerlerde '=' mi var?
//    //   - Karşılaştırma olması gereken yerlerde '==' mi var?
//    //
//    // Bu alışkanlık çok kritik hataları önler.
//
//
//    // ------------------------------------------------------------
//    // 7. Örnek Program — Mantık Hatasının Gösterimi
//    // ------------------------------------------------------------
//
//    int y = 2;
//
//    if (y == 2)
//        printf("Dogru: y 2'ye esit (== dogru kullanildi).\n");
//
//    if (y = 5)  // HATALI! Her zaman TRUE olur.
//        printf("Bu ifade HER ZAMAN calisir! y artik 5 oldu.\n");
//
//
//    return 0;
//}
//   
//
/*
ARÝTMETÝK TAÞMA 

sum = integer1 + integer2;

ifadesi ile iki tam sayý deðerin toplamýný hesaplayan bir toplama programý yapmýþtýk.
Bu basit ifadenin bile potansiyel bir problemi vardýr. am sayýlarý toplama bir int
deðiþkeninde saklanacak aþýrý büyük bir deðerle sonuçlanabilir. Bu, aritmetik taþma
olarak bilinir ve belkide sistemi saldýrýlara açýk býrakma gibi tanýmlanmamýþ davra-
nýþlara neden olabilir. 

En büyük ve en küçük deðerler, <limits.h> baþlýðýnda tanýmlanmýþ olan sýrasýyla 
INT_MAX ve INT_MIN sabitleri ile temsil edilen bir tam sayý deðiþkeninde saklanabilir.
4. bölümde açýklayacaðýmýz diðer tümleþik türler için de benzer sabitler vardýr.
<limits.h> baþlýðýný, bir metin düzenleyicide açaraki bu deðiþkenlerin ortamýnýzdaki
deðerlerini görebiliriz.

Aritmetik iþlemler yapmadan önce, taþmayacaklarýndan emin olmanýn iyi bir uygulama
olduðu düþünülür. Bunu yapan kod CERT' in www.securecoding.cert.org web sitesinde
gösterilmektedir. INT32-C Kýlavuzuna bakýnýlabilir. 

Endüstriyel amaçlý kodda, tüm hesaplamalar için bu tür karþýlaþtýrmalarý yapmalýsýnýz.
Sonraki bölümlerde, böyle hatalarýn üstesinde gelmek için baþka programalama teknik-
leri göstereceðiz.




ÝÞARETSÝZ TAM SAYILAR

Genelde, yalnýzca negatif olmayan deðerleri saymak için kullanýlmasý gereken sayaçlar
tam sayý türünden önce unsigned ifadesi ile tanýmlanmalýdýr. unsigned türünden 
deðiþkenler, 0' dan karþýlýk gelen iþaretli tam sayý türün pozitif aralýðýnýn yaklaþýk
iki katýna kadar deðerleri temsil edebilir. Ortamýnýzýn en büyük unsigned int deðerini
<limits.h> ' den UINT_MAX sabitiyle belirlersiniz. (DETAY BÝLGÝ)

Örneðin daha önce sýnýflar ve sýnav notlarý ile ilgili programlar yazmýþtýk. Örneðin
sýnav notu kullanýcýdan alýrken negatif deðerleri giremesini engellemek için 
unsigned int kullanabilirdik. Çünkü kullanýclarýn gireceði deðerleri kontrol edeme-
yeceðimiz için, programlamayý tasarlarken hata paylarýný en aza indirmeyi amaçlama-
lýyýz. Fakat sonlandýrma kontrollü bir döngüde not deðiþkeninin unsigned olarak
tanýmlanmasý durumunda, öðrencilerin alabileceði notlar ile, sonlandýrma için giri-
lecek olan ifade çarpýþabilir. Bu sebeple not için tanýmsýz olan bir ifadeyi sonlan-
dýrma ifadei olarak ayarlamak gerekir. 

Bu konuda daha fazla bilgi için Robert Seacord' un Secure Coding in C and C++ kitabýnýn
Integer Security bölümü okunabilir.







*/
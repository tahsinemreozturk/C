/*
Aritmetik Taþýma 

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





*/
/*
AR�TMET�K TA�MA 

sum = integer1 + integer2;

ifadesi ile iki tam say� de�erin toplam�n� hesaplayan bir toplama program� yapm��t�k.
Bu basit ifadenin bile potansiyel bir problemi vard�r. am say�lar� toplama bir int
de�i�keninde saklanacak a��r� b�y�k bir de�erle sonu�lanabilir. Bu, aritmetik ta�ma
olarak bilinir ve belkide sistemi sald�r�lara a��k b�rakma gibi tan�mlanmam�� davra-
n��lara neden olabilir. 

En b�y�k ve en k���k de�erler, <limits.h> ba�l���nda tan�mlanm�� olan s�ras�yla 
INT_MAX ve INT_MIN sabitleri ile temsil edilen bir tam say� de�i�keninde saklanabilir.
4. b�l�mde a��klayaca��m�z di�er t�mle�ik t�rler i�in de benzer sabitler vard�r.
<limits.h> ba�l���n�, bir metin d�zenleyicide a�araki bu de�i�kenlerin ortam�n�zdaki
de�erlerini g�rebiliriz.

Aritmetik i�lemler yapmadan �nce, ta�mayacaklar�ndan emin olman�n iyi bir uygulama
oldu�u d���n�l�r. Bunu yapan kod CERT' in www.securecoding.cert.org web sitesinde
g�sterilmektedir. INT32-C K�lavuzuna bak�n�labilir. 

End�striyel ama�l� kodda, t�m hesaplamalar i�in bu t�r kar��la�t�rmalar� yapmal�s�n�z.
Sonraki b�l�mlerde, b�yle hatalar�n �stesinde gelmek i�in ba�ka programalama teknik-
leri g�sterece�iz.




��ARETS�Z TAM SAYILAR

Genelde, yaln�zca negatif olmayan de�erleri saymak i�in kullan�lmas� gereken saya�lar
tam say� t�r�nden �nce unsigned ifadesi ile tan�mlanmal�d�r. unsigned t�r�nden 
de�i�kenler, 0' dan kar��l�k gelen i�aretli tam say� t�r�n pozitif aral���n�n yakla��k
iki kat�na kadar de�erleri temsil edebilir. Ortam�n�z�n en b�y�k unsigned int de�erini
<limits.h> ' den UINT_MAX sabitiyle belirlersiniz. (DETAY B�LG�)

�rne�in daha �nce s�n�flar ve s�nav notlar� ile ilgili programlar yazm��t�k. �rne�in
s�nav notu kullan�c�dan al�rken negatif de�erleri giremesini engellemek i�in 
unsigned int kullanabilirdik. ��nk� kullan�clar�n girece�i de�erleri kontrol edeme-
yece�imiz i�in, programlamay� tasarlarken hata paylar�n� en aza indirmeyi ama�lama-
l�y�z. Fakat sonland�rma kontroll� bir d�ng�de not de�i�keninin unsigned olarak
tan�mlanmas� durumunda, ��rencilerin alabilece�i notlar ile, sonland�rma i�in giri-
lecek olan ifade �arp��abilir. Bu sebeple not i�in tan�ms�z olan bir ifadeyi sonlan-
d�rma ifadei olarak ayarlamak gerekir. 

Bu konuda daha fazla bilgi i�in Robert Seacord' un Secure Coding in C and C++ kitab�n�n
Integer Security b�l�m� okunabilir.







*/
/*
Aritmetik Ta��ma 

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





*/
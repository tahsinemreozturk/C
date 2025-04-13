/*
	A�a��daki problem ifadesini g�z �n�ne alal�m
Bir okul, ��rencileri emlak�� sertifika s�nav�na haz�rlayan bir ders a��yor. Ge�en
sene bu dersi tamamlayan ��rencilerden 10' u sertifka s�nav�na girdi. Do�al olarak,
okul ��rencilerin s�nav� ne kadar iyi yapt�klar�n� bilmek istiyor. Sonucu �zetleyen
bir program yazman�z isteniyor. Bu 10 ��rencinin listesi size verilmi�tir. Her bir
ismin yan�na e�er ��renci s�nav� ge�tiyse 1 kald�ysa 2 yaz�lm��t�r. 

Program�n�z s�nav sonu�lar�n� a�a��daki gibi analiz etmelidir:
1. Her bir s�nav sonucunu girin (�rne�in 1 veya 2). Program ba�ka bir s�nav sonucu
istedi�i her sefer "Enter Result" istem mesaj�n� g�sterin.

2. Her t�r s�nav sonucunu say�n

3. Ge�en ��rencilerin say�s�n� ve kalanlar�n say�s�n� i�aret eden s�nav sonu�lar�n�-
n�n �zetini g�sterin.

4. Sekiz ��renciden fazlas� s�nav� ge�tiyse "Bonus to instructor!" mesaj�n� yaz�n.


Yukar�dan a�a��, ad�m ad�m d�zenleme ile ilerleyelim. �st k�sm�n s�zde kod k�sm� ile
ba�lar�z.

	S�nav sonu�lar�n� analiz et ve hocan�n �d�l al�p almad���na karar ver

Bir kez daha, �st program�n tam bir temsili oldu�unu, ancak s�zde kodun do�al bir
�ekilde C' ye d�n��ebilmesinden �nce bir ka� d�zenlemeye ihtiya� olabilece�ini 
vurgulamak gerekir. �lk d�zenlememiz

	De�i�kenlerin ba�lang�� de�erlerini ata
	On s�nav notunu gir ve ge�enleri ve kalanlar� say
	S�nav sonu�lar�n�n �zetini yaz ve hocan�n bir �d�l al�p alamayaca��na karar ver

Burda da, t�m program�n tam bir temsiline sahip olsak bile, daha fazla d�zenleme 
gereklidir. �imdi �zel de�i�kenler belirleriz. Ge�enleri ve kalanlar� kay�t eden 
saya�lara ihtiya� olacak, bir saya� d�ng� s�recini kontrol etmek i�in kullan�lacak
ve kullan�c� giri�ini saklamak i�in bir de�i�kene ihtiya� duyar.

De�i�kenlere  ba�lang�� de�erleri ata ----> S�zde kodunu a�a��daki gibi tan�mlanabilir

	Ba�lang�� de�eri olarak ge�enlere s�f�r ata
	Ba�lang�� de�eri olarak kalanlara s�f�r ata
	Ba�lang�� de�eri olarak ��renciye bir ata

Saya�lara ve toplamlara ba�lang�� de�erleri verildi�ini g�rm��s�n�zd�r. 

	On s�nav notunu gir ve ge�enleri ve kalanlar� say

s�zde kodu her s�nav notunu arka arkaya giren bir d�ng�y� gerektirir. Burada, kesin
olarak on s�nav sonucu oldu�u �nceden biliniyor, bu nedenle saya� kontroll� d�ng�
uygundur. D�ng� i�inde (d�ng� i�erisindeki k�melenme), bir �ift se�im ifadesi, her
bir s�nav sonucunun ba�ar�l� veya ba�ar�s�z olup olmad���na karar verecek ve buna
g�re saya�lar� uygun olarak bir artt�racak. Yukar�daki s�zde kodun d�zenlemesi :

	��renci sayac� on'dan k���k veya e�it oldu�u s�rece
	 Sonraki s�nav sonucunu gir

	 E�er ��renci ge�tiyse
				Ge�enlere bir ekle
	 De�ilse
				Kalanlara bir ekle

	 ��renci sayac�na bir ekle

gibi olur.

if...else'i ba�latmak i�in bo� sat�r kullan�m�n�n program okunabilirli�ini iyile�-
tirdi�ini fark etmi�sinizdir. 

	S�nav sonu�lar�n�n �zetini yaz ve hocan�n bir �d�l al�p alamayaca��na karar ver
s�zde kodu a�a��daki gibi d�zenlenebilir:

	Ge�enleri yaz
	Kalanlar� yaz
	E�er sekiz ��rencinden fazlas� ge�ti ise
		"Hocaya �d�l!" yaz


�L�G�L� S�ZDE KODUN B�T�N VE SON HAL�

1 Ba�lang�c de�eri olarak ge�enlere s�f�r ata
2 Ba�lang�� de�eri olarak kalanlara s�f�r ata
3 Ba�lang�� de�eri olarak ��renciye bir ata
4
5 ��renci sayac� on'dan k���k veya e�it oldu�u s�rece
6	Sonraki s�nav sonucunu gir
7
8	E�er ��renci ge�tiyse
9		Ge�enlere bir ekle
10	De�ilse
11		Kalanlara bir ekle
12
13	��renci sayac�na bir ekle
14
15 Ge�enleri yaz
16 Kalanlar� yaz
17 E�er sekiz ��renciden fazlas� ge�ti ise
18		"Hocaya �d�l!" yaz



Bu s�zde kod �imdi C'ye d�n���m i�in yeterlidir. 




*/
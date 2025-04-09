/*


* Kod �rne�i en a�a��dad�r


Yukar�dan a�a��, ad�m ad�m d�zenleyerek algoritmalar�n form�le 
edilmesi. 2. Olarak sonland�rma kontroll� tekrarlama ile 
yap�labilir.

Yine bir s�n�fta al�nan notlar�n s�n�f ortalamas�n�n hesaplanaca��
program yaz�lmas� gereksin. Ama bu sefer ka� tane not girilece�ini
bilmezsek program� nas�l yazabiliriz ?
Yani tekrarl� i�lemin ka� defa edece�ini �nceden bilmedi�imiz 
zamanlarda ne yapabiliriz ? 

Kullan�c�ya d�ng�y� sonland�ran bir de�er bilgisini veririz. Bu 
sayede kullan�c� tekrarlad��� i�lemin sonuna geldi�inde yani yeni
bir not girmeyece�i zaman bu de�eri girerek tekrarlamay� sonland�r�r.

Tabi dikkat edilmesi gereken �nemli bir �ey de; Sonland�rma ifadesinin
normalde girilebilecekl de�erler k�mesinde olmamas� gerekir.

�rnek olarak not girilen bir uygulamada, sonland�rma de�eri 5 se�ilirse ve
girilen notlardan biri de 5 olursa bu sefer program sonlanacak ve 
istenen i�lem olmas� gerekti�i gibi sonu� veremeyecektir. Bu durumlarda
mant�kl� olan notland�rma i�ersininde olmayan bir de�eri sonland�rma
ifadesi olarak tan�mlamakt�r. Mesela notlar�n (0-100 oldu�u bir s�navda)
-5 bir sonland�rma de�eri olarak kullan�labilir.

Not: Bu tarz durumlara Belirsiz Tekrarlama denir.


#### YUKARIDAN A�A�IYA ADIM ADIM D�ZENLEME ####

�st k�sm� temsil eden s�zde kod ifadesi ile program�n s�zde kod yaz�m�na ba�l�yoruz.

S�nav i�in s�n�f ortalamas�n� belirle

�st, program�n genel fonksiyonunu ta��yan tek bir ifadedir. Maalesef, �st nadirden
C program� yazmak i�in yeterli miktarda detay i�erir. Bunun i�in d�zenleme s�recinde
ba�lar�z. �st�, bir dizi daha k���k g�revlere ay�r�r�z ve bunlar� hangi s�rada icra
edilmesi gerekiyorsa o s�rada belirtiriz. Bu da ilk a�a��daki gibi sonu�lan�r.

De�i�kenlere ba�lang�� de�eri ata
S�nav notlar�n� gir, topla ve say
S�n�f ortalamas�n� hesapla ve yaz

Burada yaln�zca s�ral� yap� kullan�lm��t�r - listelenmi� ad�mlar biri di�erinden
sonra olacak �ekilde s�rayla y�r�t�lecektir. 

Not: �st k�sm�n yan� s�ra, asl�nda her bir d�zenleme algoritman�n tam bir 
tan�mlamas�d�r; sadece detay seviyeleri farkl�l�k g�sterir. 


2. D�ZENLEME

2. d�zenleme seviyesine ilerlemek i�in, �zel de�i�kenleri belirtiriz. Say�lar�n pe�pe�e
toplam�na, ka� tane say�n�n i�lendi�i say�m�na, giri� olarak her bir notun de�erini
alan bir de�i�ken ve hesaplanm�� ortalamay� tutan bir de�i�kene ihtiyac�m�z olacak.

De�i�kenlere ba�lang�� de�eri ata ----> bu s�zde kod ala��daki gibi d�zenlenebilir.

Ba�lang�� de�eri olarak toplama s�f�r ata
Ba�lang�� de�eri olarak sayaca s�f�r ata

Not: Yaln�zca toplam ve sayaca s�f�r de�eri atad�k. ��nk� di�erleri i�in bu �nemsizdir.
Yok edici okuma i�lemi ile di�erlerinin �zerine yeni de�erler yaz�laca�� i�in, eski 
de�erlerinin �nemi yoktur. 


S�nav i�in notlar�n� gir, topla ve say -----> Bu s�zde kod ifadesi ard���k olarak

her bir notu giren bir tekrarlama yap�s�na gerek duyar. �nceden ka� tane notun 
i�lenece�ini bilmedi�imiz i�in, sonland�rma kontroll� tekrarlama kullanaca��z. 
Program, her bir not girildikten sonra bu de�erle kar��la�t�r�lacak ve sonland�rma
de�eri girildi�i zaman d�ng�y� sonland�racakt�r. 

Yukar�daki s�zde kod ifadesini a�a��daki gibi d�zenleyeli�

�lk notu gir
Kullan�c� sonland�rmay� hen�z girmediyse
	Bu notu i�leyen toplama ekle
	Not sayac�na bir ekle
	Sonraki notu gir (sonland�rma olmas� m�mk�n)


G�r�ld��� gibi s�zde kod ifadesinde while i�in s�sl� parantez kullanmad�k. Ama while'a
ait oldu�unu g�stermek i�in bunlar i�in bir sat�r bo�luk b�rakt�k. 

S�n�f ortalamas�n� hesapla ve yaz -----> s�zde kodu a�a��daki gibi d�zenleyelim.

Saya� s�f�ra e�it de�ilse
	Ortalamaya toplam�n sayaca b�l�m�ne e�itle
	Ortalamay� yaz
De�ilse
	"Hi� bir not girilmemi�tir" yaz


Not: Burada, s�f�ra b�lme- e�er farkedilmezse program�n ba�ar�s�z olmas�na sebep
olur. Genelde program�n ��kmesi olarak adland�r�l�r. 


####  S�ZDE KODUN TAMAMI  #### (son hali)


1)  Ba�lang�� de�eri olarak toplama s�f�r ata
2)  Ba�lang�� de�eri olarak sayaca s�f�r ata
3)
4)  �lk notu gir
5)  Kullan�c� sonland�rmay� hen�z girmediyse
6)		Bu notu i�leyen toplama ekle
7)		Not sayac�na bir ekle
8)		Sonraki notu gir (sonlad�rma olmas� m�mk�n)
9)
10)  Sayaca s�f�r e�it de�ilse
11)		Ortalamay� toplam�n sayaca b�l�m�ne e�itle
12)		Ortalamay� yaz
13)  De�ilse
14)		"Hi� bir not girilmei�tir" yaz


*/

//#include <stdio.h>
//
//int main(void)
//{
//	unsigned int counter;; // sayac
//	int grade; //girilecek not
//	int total; //girilen notlarin toplami
//	
//	float average; //notlarin ortalamasi (float = ondalikli sayilari tutar
//
//	//baslangic kismi
//	total = 0; //total'in baslangic degerini 0 yapar
//	counter = 0; //sayac'in baslangic degerini 0 yapar
//
//
//	//islem kismi
//	//kullanicidan ilk notun alinmasi
//	printf("%s", "Enter grade, -1 to end: "); //not girisini ister
//	scanf_s("%d", &grade); //girilen degeri okur
//
//
//	//kullanicidan henuz sonlandirma degeri girilmediyse donguye gir
//	while (grade != -1)
//	{
//		total = total + grade;
//		counter = counter + 1;
//
//		//hala dongudeyken kullanicidan sonraki notu al
//		printf("%s", "Enter grade, -1 to end: ");
//		scanf_s("%d", &grade); 
//	}
//
//	//sonlandirma kismi
//	//kullanici en az bir not girdiyse
//	if (counter != 0)
//	{
//		//girilen tum notlar icin ortalamayi hesapla
//		average = (float)total / counter; //ondalik kismin atilmasini engelle
//
//		//ortalamayi virgulden sonra iki basamak icin goster
//		printf("\n###### RESULT ######\nClass average is %.2f\n", average);
//	}
//	else {//hicbir not girilmediyse
//		puts("\n###### RESULT ######\nNo grades were entered");
//	}
//}



/*
�rnek koddaki while gibi e�er birden fazla ifadeyi while i�erisinde y�r�tmek istersek
k�me parantezlerini kullanmak zorunludur. Parantezler kullan�lmad���nda, d�ng� g�vedsindeki
ilk ifade haricindekiler d�ng� d���nda kal�r. 

E�er yukar�daki �rnek kodda while'� k�me parantezleri ile kullanmasayd�k sonsuz d�ng�
olu�acakt�. Bu da e�er kullan�c� ilk notu -1 olarak girmeseydi sonsuz d�ng�ye tak�l�p,
program�n hata vermesine neden olacakt�.


+++++ T�RLER ARASINDA A�IK VE DOLAYLI D�N���M +++++

Hesaplamam�z�n kesirli k�sm�n� yakalamak i�in average de�i�kenini float t�r�nden
tan�mlam��t�k. Bununla birlikte total ve counter de�i�kenleri de int t�r�nden oldu�u
i�in total / counter i�leminin sonucu da tam say� olacakt�r. Yani average float olsa 
da b�lme i�lemindeki de�i�kenler int oldu�u i�in sonucun virg�ll� k�s�mlar� kaybolacakt�r.
Tam say� de�erlerle, bir ondal�k hesaplama �retmek i�in, ondal�k say� olan ge�ici
de�erler olu�turmak zorunday�z. C' de bu g�revi yapan t�r d�n��t�rme i�lemi sa�lar.

average = (float) total / counter;

total teriminin ge�ici bir ondal�k kopyas�n� olu�turan (float) t�r d�n��t�rme i�lemi
i�erir. T�r d�n��t�rme i�leminin bu �ekilde kullan�m�na a��k d�n���m denir. Hesaplama
�imdi, counter' da saklanan unsigned int de�i�kenine b�l�nen ondal�k bir de�er 
(total'in ge�ici float hali) i�erir. C, yaln�zca terimlerin veri t�rleri ayn� olan
aritmetik i�lemleri ger�ekle�tirir. Terimlerin ayn� t�rden olmas�n� sa�lamak i�in,
derleyici s�eilmi� terimler �zerinde dolayl� d�n���m denen bir i�lem yapar. 
�rne�in, unsigned int ve float veri t�rleri i�eren bir ifade de, unsigned int terim-
lerinin kopyalar� yap�l�r ve float'a d�n��t�r�l�r. �rne�imizde, counter' �n bir
kopyas� yap�ld�ktan ve float'a d�n��t�r�ld�kten sonra hesaplama icra edilir ve ondal�k
b�lmenin sonucu average'a aktar�l�r. C'de farkl� t�rlerden terimlerin d�n���mleri
i�in bir dizi kurallar vard�r. Bunlardan ilerde daha fazla bahesedece�iz.



(float) total gibi d�n���mlere a��k (explicit) t�r d�n���m� denir. 
Bunu kendimiz  yazar�z.

total float olunca, counter'�n float�a d�n��t�r�lmesine ise dolayl� (implicit)
t�r d�n���m� denir. Bu d�n���m� C derleyicisi otomatik yapar.


T�r d�n���m i�lemi �o�u veri tipine uygulan�r - t�r ismi etraf�nda parantez koyarak
olu�turulur. Her bir t�r d�n���m i�lemi tekil bir i�lemdir, yani tek bir terimi olan
bir i�lemdir. C, ayn� zamanda art� (+) ve eksi (-) i�lemlerinin tekil hallerini de
destekler, b�ylece -10 veya +11 gibi ifadeler  yazabiliriz. 
T�r d�n���m i�lemleri sa�dan sola do�ru yap�l�r ve tekil + ve tekil - gibi di�er
tekil i�lemlerle ayn� �nceli�e sahiptir. Bu �ncelik *,/ ve % �arp�msal i�lemlerinin-
kinden daha y�ksektir. 

Yani bir say�n�n negatif mi pozitif mi oldu�u belirten - ve + i�aretinin �ncelikli
olmas� gerekir ki bir i�lem i�erisinde say�n�n pozitif mi negatif mi oldu�u �nceden
belirlenmi� olsun ve de ona g�re i�lem yap�ls�n.










*/

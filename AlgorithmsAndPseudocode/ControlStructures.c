/*
Normalde arka arkaya y�r�t�len (s�ral� y�r�tme) ifadeleri, y�r�t�len 
ifadeden sonra gelecek bir ifade yerine ba�ka bir ifade gelmesini Kontrol
Yap�lar� ile sa�lar�z. Buna kontrol�n aktar�m� denir.

Kontrol yap�lar�n�n nas�l �al��t���n� Ak�� Diyagramlar� ile kolayca g�sterebiliriz

Dikd�rtgen, e�kenar d�rtgen, yuvarlanm�� d�rtgen ve k���k daireler ile bu 
diyagramlar� olu�tururuz.

Dikd�rtgen (��lem) ----> Hesaplama veya Bir Giri�/��k��

Oval (Ba�lang��/Biti�) ----> Ak���n ba�lad���n� veya bitti�ini g�sterir.

Paralelkenar (Giri�/��k��) ----> Kullan�c�dan giri� al�nmas�n� veya ekrana 
��kt� verilmesini ifade eder.

E�kenar D�rtgen (Karar) ----> Bir ko�ula ba�l� olarak ak���n y�nlendirildi�i noktad�r.

Oklar (Ba�lant�) ---->  �ekiller aras�ndaki ak��� g�sterir.

Daire (Ba�lant� Noktas�) ----> Ak�� diyagram�n�n farkl� b�l�mlerini 
birbirine ba�lar.

##### --- Selection Expressions In C --- ##### 
C' de �� t�r se�im yap�s�nda sahiptir. if, if else ve switch.

if se�im ifadesi e�er ko�ul do�ruysa ya eylemi icra eder ya da ko�ul yanl�� 
ise eylemi atlar. 

if else se�im ifadesi e�er ko�ul do�ru ise eylemi icra eder ve yanl��sa ba�ka
bir eylem icra eder.

switch se�im ifadesi ifadedeki de�ere ba�l� olarak �ok say�da farkl� eylemden
birini icra eder.

�ki farkl� eylem aras�nda se�im yapt��� i�in if...else ifadesine �ift se�im
ifadesi denir.
�ok say�da farkl� eylem aras�ndan se�im yapt��� i�im switch ifadesine �oklu 
se�im ifadesi denir.

##### --- Repetition statements in C --- ##### 
C' de while, do...while ve for olmak �zere 3 tane tekrarlama ifadesi vard�r.

Kontrol ifadelerini birle�tirmenin yaln�zca tek bir yolu - kontrol ifadesini
k�meleme isimli y�ntem - oldu�unu ��renece�iz. Bu nedenle, in�a edece�imiz 
herhangi bir C program�, sadece iki �ekilde birle�tirilebilen yedi t�r kontrol
ifadesinden olu�turulabilir. Bu basitli�in �z�d�r.



The If Statement
Se�im ifadeleri, alternatif eylemler aras�ndan se�im yapmak i�in kullan�l�rlar.
�rne�in, bir s�navdaki ge�me notunun 50 olmas� gibi.

{	E�er ��rencinin notu 60' tan b�y�k veya e�itse
		"Ge�ti" Yaz
}
Yukar�daki s�zde kod ifadesinde oldu�u gibi ��rencinin notunun 60'tan b�y�k
veya e�it oldu�u ko�ulunun do�ru mu yanl�� m� oldu�u kararla�t�r�l�r. Ko�ul
do�ru ise Ge�ti yaz�l�r ve s�radaki s�zde kod ifadesi icra edilir. Ko�ul
yanl��sa yazma i�lemi g�z ard� edilir ve sonraki s�zde kod icra edilir.

Bu iste�in C kodu:

if (not >= 50) {
	printf( "Gecti\n" );
}
�eklindedir. S�zde koda olduk�a benzemektedir. 


The If...Else Statement
if se�im ifadesinin, yaln�zca ko�ul do�ru oldu�u zaman i�aret edilen eylemi yapar.
di�er t�rl� eylem atlanarak ge�ilir. if...else se�im ifadesinde ise ko�ul 
do�ru oldu�unda ve yanl�� oldu�unda yap�lacak farkl� eylemleri icra eder.

{	E�er ��rencinin notu 60' tan b�y�k veya e�itse
		"Ge�ti" Yaz
	
	De�ilse
		"Kald�" Yaz
}

C kodu:
if (not >= 50) {
	puts( "Gecti\n" );
}
else {
	puts( "Kaldi" );
}
















*/
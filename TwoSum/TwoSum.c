#include <stdio.h>

int main()
{
	int integer1;
	int integer2;

	int sum;

	//int integer1, integer2, sum;  Bu �ekilde de kullan�labilir.

	printf("Enter first integer\n");
	scanf_s("%d", &integer1);

	printf("Enter second integer\n");
	scanf_s("%d", &integer2);

	sum = integer1 + integer2;

	printf("Sum is %d\n", sum);

	return 0;
}


/*
	DE���KEN VE DE���KEN TANIMLAMALARI
	De�i�lenler bir program kullan�m� i�in haf�zada saklanan yerlerdir. Bu de�i�lenler tan�m-
	lan�rken t�r� ve ismi belirtilir. �rne�in int, string gibi.


	K�ML�KLER VE B�Y�K K���K HARF DUYARLILI�I
	C de bir de�i�ken ismi ayn� zamanda bir kimliktir. Bir kimlik say� ile ba�lamaz. Harf
	say� ve alt �izgi _ den olu�an karekter dizisidir. 
	C b�y�k k���k harfe duyarl�d�r. �rne�in a1 ile A1 C de farkl� kimliklerdir.
	---> Not: kimlikler k���k harfle ba�lamal�d�r. B�y�k harfle ba�layan ya da hepsi b�y�k 
	olanlar�n farkl� bir anlam� vard�r.
	---> Not2: Derleyici taraf�ndan olu�turulan kimlikler ile standart k�t�phanelerde tan�ml�
	olan kimliklerin �ak��mas�n� �nlemek i�in _ alt �izgi ile ba�layan kimliklerden sak�n�n.

	---> Not3: de�i�ken isimlerinin birden fazla kelimeden olu�tu�unda di�er kelimelerin ilk harfleri
	b�y�k olmal�d�r. forExample gibi.

	---> Not4: De�i�ken tan�mlamlar�n� y�r�t�lebilir ifadelerin aras�na yazmak s�z dizim 
	hatas�na neden olabilir.


	�STEM MESAJLARI
	printf("Enter first integer\n"); ifadesinde oldu�u gibi kullan�c�dan bir eylem yapmas�n�
	isteyen ifadelere istem denir.


	SCANF FONKS�YONU VE B���MLEND�R�LM�� G�R��LER
	scanf_s("%d", &integer1); kullan�c�dan bir de�er almak i�in scanf kullan�l�r. Bu fonksiyon
	genelde standart giri� birimi olan klavyeden okur. Scanf'in %d ve &integer1 gibi iki arg�-
	man� vard�r. Birincisi %d kullan�c�dan al�nacak verinin t�r�n�, ikincisi & (asemptont) da
	scanf' e de�i�kenin bellekteki yerini s�yler. Sonras�nda da kullan�c�ndan al�nan veri de�i�-
	kenin bellekteki yerine yaz�l�r. 
	Bu etkile�ime Etkile�imli Hesaplama denir.




	ATAMA �FADELER�
	sum = integer1 + integer2; �o�u hesaplama atama i�leminde icra edilir. Sa�dan sola do�ru
	atama olur. �nce integer1 ve integer2 toplan�r, ar�ndan sum de�i�kenine bu toplam�n de�eri
	atanm�� olur. 



	B���M KONTROL KARAKTER KATARI �LE YAZMA
	printf("Sum is %d\n", sum); Burada printf' in iki arg�man� vard�r. Birincisi %d ikincisi de
	virg�lden sonraki sum. %d ile ekrana yazd�r�lacak de�erin t�r�n� ikinci arg�man ile de bu
	verinin hangisi oldu�udur.


	PRINTF �FADELER� HESAPLAMALAR
	Hesaplamalar ayn� zamanda printf i�inde de ger�ekle�tirilebilir.
	printf ("sum is %d\n", integer1 + integer2 ); gibi.




*/
// C programlamada ilk kod �rne�i ve ilgili konu hakk�nda bilgiler.


#include <stdio.h>

int main (void)
{
	printf("hello world\n");

	printf("Welcome\nto\nC!\n");


	return 0;
}

// C de Yorum satiri ===> //
// Yorum sat�r� C derleyicisi taraf�ndan g�z ard� edilir
// i�erisindeki ifadeler makine-dili nesne kodu �retilmesine neden olmaz.

// �ok sat�rl� yorum sat�r� i�in /*...*/ kullan�l�r. Fakat bu kullan�m yayg�n programlama ha-
//talar�na neden olabilir. ��nk� */ ile kapat�lmas� unutulur. Bu hatay� �nlemek i�in // avantajl�d�r.

/*
	#include �N ��LEMC� TAL�MATI
	# ile ba�layan sat�lar derlemeden �nce �n i�lemci taraf�ndan i�lenir. �rnek olarak 
	#include <stdio.h> kodu ile standart giri�/��k�� yani (<stdio.h>) �zelli�ini programa 
	eklemesini s�yler. Yani printf gibi fonksiyonlar �a��r�ld�klar�nda kullan�lan bilgiler
	bu �n i�lemci talimat� ile sa�lan�r.

	BO� SATIRLAR
	Program� daha kolay okumak i�in bo� sat�rlar b�rak�l�r. Bo�luk karekteri ve sekme karek-
	terleri kullan�larak yap�l�r. Bu karekterlerin hepsi beyaz bo�luk olarak adland�r�l�r ve
	normalde derleyici taraf�ndan g�z ard� edilirler.

	MAIN FONSK�YONU
	C program�n�n yap� ta��d�r. Her programda olmak zorundad�r. C programlar� y�r�t�lmeye 
	main fonksiyonu ile ba�lar. Fonksiyonlar bilgi g�nderebilir. Yani int main () {} gibi. Bu int
	ifadesi main fonksiyonun bir tam say� d�nderece�i anlam�na gelir. 
	Ayn� zamanda fonksiyonlar y�r�t�lmek i�in �a��r�ld���nda veri de alabilirler. Mesela
	int main (void) { } fonksiyonunda void ifadesi bu fonkisyonun hi�bir veri almad��� anlam�na 
	gelir.
	--> Not:Her fonksiyon kendisinden �nce fonksiyonun amac�n� tan�mlayan bir a��klamaya sahip olmal�d�r.


	�IKI� �FADES�
	printf (" "); ifadesi, bilgsayara ifadeleri ekrana bast�rmak i�in talimat verir. printf fonksiyonu
	parantez i�indeki arg�man� ve noktal� virg�l� dahil t�m sat�ra ifade denir. Her ifade de 
	noktal� virg�l ; ile bitirilmek zorundad�r.



	KA�I� D�Z�NLER�
	mesela \n karekteri printfde yaz�lmas�na ra�men ekrana bas�lmaz. Bunun sebebi \ ile bir ka���
	i�lemi olmas�d�r. Yani bir dizi i�inde ters b�l� i�areti alg�land���nda, ters b�l�den sonraki
	karaktere bakar ve ters b�l� ile birle�tirerek bir ka��� ifadesi haline gelir.

	\n  Yeni sat�r. �mleci sonraki sat�r ba��na konumland�r�r.  

	\t  Yatak sekme. �mleci sonraki sekme noktas�na kayd�r�r.

	\a  Uyar�. �mlecin o anki komunu de�i�tirmeden, g�rsel veya ses olarak uyar� �retir.

	\\  Ters b�l�y� ekrana bast�rmak i�in bu �ekilde kullan�l�r.

	\"  �ift t�rnak ekrana bas�t�r�lmak i�in bu �ekilde kullan�l�r.


	BA�LAYICI VE Y�R�T�LEB�L�RLER
	Ba�lay�c� (Linker)	Nesne dosyalar�n� birle�tirerek �al��t�r�labilir dosya �retir.
	Y�r�t�lebilir (Executable)	��letim sisteminin �al��t�rabilece�i makine kodu dosyas�d�r.
	Ba�lay�c�, derleme s�recinin son a�amas�nda �al��an bir ara�t�r. 
	Temel g�revi, derlenmi� nesne dosyalar�n� (.o veya .obj dosyalar�) birle�tirerek tek bir
	y�r�t�lebilir (.exe, .out vb.) dosya olu�turmakt�r.
	Y�r�t�lebilir dosya, �al��t�r�labilir bir programd�r. Ba�lay�c� taraf�ndan olu�turulan bu dosya,
	i�letim sistemi taraf�ndan �al��t�r�labilir.









*/

// C programlamada ilk kod örneði ve ilgili konu hakkýnda bilgiler.


#include <stdio.h>

int main (void)
{
	printf("hello world\n");

	printf("Welcome\nto\nC!\n");


	return 0;
}

// C de Yorum satiri ===> //
// Yorum satýrý C derleyicisi tarafýndan göz ardý edilir
// içerisindeki ifadeler makine-dili nesne kodu üretilmesine neden olmaz.

// Çok satýrlý yorum satýrý için /*...*/ kullanýlýr. Fakat bu kullaným yaygýn programlama ha-
//talarýna neden olabilir. Çünkü */ ile kapatýlmasý unutulur. Bu hatayý önlemek için // avantajlýdýr.

/*
	#include ÖN ÝÞLEMCÝ TALÝMATI
	# ile baþlayan satýlar derlemeden önce ön iþlemci tarafýndan iþlenir. Örnek olarak 
	#include <stdio.h> kodu ile standart giriþ/çýkýþ yani (<stdio.h>) özelliðini programa 
	eklemesini söyler. Yani printf gibi fonksiyonlar çaðýrýldýklarýnda kullanýlan bilgiler
	bu ön iþlemci talimatý ile saðlanýr.

	BOÞ SATIRLAR
	Programý daha kolay okumak için boþ satýrlar býrakýlýr. Boþluk karekteri ve sekme karek-
	terleri kullanýlarak yapýlýr. Bu karekterlerin hepsi beyaz boþluk olarak adlandýrýlýr ve
	normalde derleyici tarafýndan göz ardý edilirler.

	MAIN FONSKÝYONU
	C programýnýn yapý taþýdýr. Her programda olmak zorundadýr. C programlarý yürütülmeye 
	main fonksiyonu ile baþlar. Fonksiyonlar bilgi gönderebilir. Yani int main () {} gibi. Bu int
	ifadesi main fonksiyonun bir tam sayý döndereceði anlamýna gelir. 
	Ayný zamanda fonksiyonlar yürütülmek için çaðýrýldýðýnda veri de alabilirler. Mesela
	int main (void) { } fonksiyonunda void ifadesi bu fonkisyonun hiçbir veri almadýðý anlamýna 
	gelir.
	--> Not:Her fonksiyon kendisinden önce fonksiyonun amacýný tanýmlayan bir açýklamaya sahip olmalýdýr.


	ÇIKIÞ ÝFADESÝ
	printf (" "); ifadesi, bilgsayara ifadeleri ekrana bastýrmak için talimat verir. printf fonksiyonu
	parantez içindeki argümaný ve noktalý virgülü dahil tüm satýra ifade denir. Her ifade de 
	noktalý virgül ; ile bitirilmek zorundadýr.



	KAÇIÞ DÝZÝNLERÝ
	mesela \n karekteri printfde yazýlmasýna raðmen ekrana basýlmaz. Bunun sebebi \ ile bir kaçýþ
	iþlemi olmasýdýr. Yani bir dizi içinde ters bölü iþareti algýlandýðýnda, ters bölüden sonraki
	karaktere bakar ve ters bölü ile birleþtirerek bir kaçýþ ifadesi haline gelir.

	\n  Yeni satýr. Ýmleci sonraki satýr baþýna konumlandýrýr.  

	\t  Yatak sekme. Ýmleci sonraki sekme noktasýna kaydýrýr.

	\a  Uyarý. Ýmlecin o anki komunu deðiþtirmeden, görsel veya ses olarak uyarý üretir.

	\\  Ters bölüyü ekrana bastýrmak için bu þekilde kullanýlýr.

	\"  Çift týrnak ekrana basýtýrýlmak için bu þekilde kullanýlýr.


	BAÐLAYICI VE YÜRÜTÜLEBÝLÝRLER
	Baðlayýcý (Linker)	Nesne dosyalarýný birleþtirerek çalýþtýrýlabilir dosya üretir.
	Yürütülebilir (Executable)	Ýþletim sisteminin çalýþtýrabileceði makine kodu dosyasýdýr.
	Baðlayýcý, derleme sürecinin son aþamasýnda çalýþan bir araçtýr. 
	Temel görevi, derlenmiþ nesne dosyalarýný (.o veya .obj dosyalarý) birleþtirerek tek bir
	yürütülebilir (.exe, .out vb.) dosya oluþturmaktýr.
	Yürütülebilir dosya, çalýþtýrýlabilir bir programdýr. Baðlayýcý tarafýndan oluþturulan bu dosya,
	iþletim sistemi tarafýndan çalýþtýrýlabilir.









*/

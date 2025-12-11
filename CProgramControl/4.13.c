#include <stdio.h>


int main(void) {
	/*
	* scanf Fonksiyonunun Donus Degerini Kontrol Etme
	* ------------------------------------------------
	* scanf, okudugu deger sayisini dondurur.
	* Basarili okuma -> okunan degisken sayisi
	* Basarisiz okuma -> 0
	* Giris sonu (EOF) -> EOF
	* Bu nedenle guvenli programlama icin her zaman scanf'in donus degeri
	* kontrol edilmelidir.
	*/


	int grade;
	printf("Bir tam sayi giriniz: ");


	/*
	* Kullanici tam sayi girmezse (orn: "merhaba"), scanf 0 dondurur.
	* Bu durumda grade degiskenine bir deger yazilmaz ve beklenmeyen durum
	* tehlike olusturabilir.
	*/
	if (scanf("%d", &grade) != 1) {
		printf("Gecersiz giris! Bir tam sayi girmelisiniz.\n");
		return 1; // programi guvenli sekilde sonlandir
	}


	printf("Girdiginiz tam sayi: %d\n", grade);


	/*
	* Coklu scanf girisi ornegi
	* Kullanici iki tam sayi girmelidir. scanf dogru okuma yaptiginda 2 dondurur.
	*/
	int number1, number2;
	printf("Iki tam sayi giriniz: ");


	if (scanf("%d%d", &number1, &number2) != 2) {
		printf("Giris basarisiz! Iki tam sayi girmelisiniz.\n");
		return 1;
	}


	printf("Sayilar: %d ve %d\n", number1, number2);


	/*
	* Sinir Kontrolu
	* --------------
	* Sadece dogru tipte veri okumak yetmez. Veri dogru aralikta mi?
	* Ornegin notlar 0-100 araliginda olmali.
	*/
	int score;
	printf("0-100 arasinda bir not giriniz: ");


	if (scanf("%d", &score) != 1) {
		printf("Hata: Gecersiz giris!\n");
		return 1;
	}


	/* Girilen deger tip olarak dogru, fakat sinirin disinda olabilir. */
	if (score < 0 || score > 100) {
		printf("Hata: Not 0 ile 100 arasinda olmalidir.\n");
		return 1;
	}


	printf("Notunuz: %d\n", score);


	/*
	* Bu tarz kontroller, programinizin copmeleri, mantik hatalari ve
	* saldirilar karsisinda daha guvenli olmasini saglar.
	*/


	return 0;
}
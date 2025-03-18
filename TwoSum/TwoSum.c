#include <stdio.h>

int main()
{
	int integer1;
	int integer2;

	int sum;

	//int integer1, integer2, sum;  Bu þekilde de kullanýlabilir.

	printf("Enter first integer\n");
	scanf_s("%d", &integer1);

	printf("Enter second integer\n");
	scanf_s("%d", &integer2);

	sum = integer1 + integer2;

	printf("Sum is %d\n", sum);

	return 0;
}


/*
	DEÐÝÞKEN VE DEÐÝÞKEN TANIMLAMALARI
	Deðiþlenler bir program kullanýmý için hafýzada saklanan yerlerdir. Bu deðiþlenler taným-
	lanýrken türü ve ismi belirtilir. Örneðin int, string gibi.


	KÝMLÝKLER VE BÜYÜK KÜÇÜK HARF DUYARLILIÐI
	C de bir deðiþken ismi ayný zamanda bir kimliktir. Bir kimlik sayý ile baþlamaz. Harf
	sayý ve alt çizgi _ den oluþan karekter dizisidir. 
	C büyük küçük harfe duyarlýdýr. Örneðin a1 ile A1 C de farklý kimliklerdir.
	---> Not: kimlikler küçük harfle baþlamalýdýr. Büyük harfle baþlayan ya da hepsi büyük 
	olanlarýn farklý bir anlamý vardýr.
	---> Not2: Derleyici tarafýndan oluþturulan kimlikler ile standart kütüphanelerde tanýmlý
	olan kimliklerin çakýþmasýný önlemek için _ alt çizgi ile baþlayan kimliklerden sakýnýn.

	---> Not3: deðiþken isimlerinin birden fazla kelimeden oluþtuðunda diðer kelimelerin ilk harfleri
	büyük olmalýdýr. forExample gibi.

	---> Not4: Deðiþken tanýmlamlarýný yürütülebilir ifadelerin arasýna yazmak söz dizim 
	hatasýna neden olabilir.


	ÝSTEM MESAJLARI
	printf("Enter first integer\n"); ifadesinde olduðu gibi kullanýcýdan bir eylem yapmasýný
	isteyen ifadelere istem denir.


	SCANF FONKSÝYONU VE BÝÇÝMLENDÝRÝLMÝÞ GÝRÝÞLER
	scanf_s("%d", &integer1); kullanýcýdan bir deðer almak için scanf kullanýlýr. Bu fonksiyon
	genelde standart giriþ birimi olan klavyeden okur. Scanf'in %d ve &integer1 gibi iki argü-
	maný vardýr. Birincisi %d kullanýcýdan alýnacak verinin türünü, ikincisi & (asemptont) da
	scanf' e deðiþkenin bellekteki yerini söyler. Sonrasýnda da kullanýcýndan alýnan veri deðiþ-
	kenin bellekteki yerine yazýlýr. 
	Bu etkileþime Etkileþimli Hesaplama denir.




	ATAMA ÝFADELERÝ
	sum = integer1 + integer2; Çoðu hesaplama atama iþleminde icra edilir. Saðdan sola doðru
	atama olur. Önce integer1 ve integer2 toplanýr, arýndan sum deðiþkenine bu toplamýn deðeri
	atanmýþ olur. 



	BÝÇÝM KONTROL KARAKTER KATARI ÝLE YAZMA
	printf("Sum is %d\n", sum); Burada printf' in iki argümaný vardýr. Birincisi %d ikincisi de
	virgülden sonraki sum. %d ile ekrana yazdýrýlacak deðerin türünü ikinci argüman ile de bu
	verinin hangisi olduðudur.


	PRINTF ÝFADELERÝ HESAPLAMALAR
	Hesaplamalar ayný zamanda printf içinde de gerçekleþtirilebilir.
	printf ("sum is %d\n", integer1 + integer2 ); gibi.




*/
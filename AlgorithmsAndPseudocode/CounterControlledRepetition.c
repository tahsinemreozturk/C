/*
	Örneðin bir sýnýfta yapýlan sýnavýn puanlarýný alarak
	sýnýfýn sýnav ortalamasýný hesaplamak için sýrayla
	sýnýftaki her öðrenciden not bilgisini almamýz gerekecek.

	Yapýlacak eylemleri listelemek ve bu eylemlerin hangi sýrada
	yürütülmesi gerektiðini belirtmek için sözde kod kullanalaým.
	
	Her seferinde not girmek için sayaç kontrollü tekrarlama
	kullanacaðýz. Bu teknik, bir grup ifadenin kaç kere yürütülmesi
	gerektiðini belirten sayaç denilen bir deðiþken kullanýr.

	Sayaç = ifadenin kaç kere yürütülmesi gerektiðini tutar.

	Genelde tekrarlama sayýsý döngü çalýþmaya baþlamadan önce
	belirli olduðu için sayaç kontrollü tekrarlama, genelde
	belirli tekrarlama olarak da adlandýrýlýr.


	10 öðrencinin bulunduðu bir sýnýfta sýnav yapýlmýþtýr. Bu
	sýnýfýn sýnavdaki ortalama notunu hesaplayýn.

	Önce aþaðýdaki gibi sözde kod daha sonra C' de karþýlýðýný
	yazacaðýz.

	Toplamý sýfýra eþitle
	Sayacý bire eþitle

	Not sayacý 10'dan küçük veya eþit olduðu sürece
		öðrenciden not bilgisi al
		bu notu toplama ekle
		sayacý bir artýr

	toplamý 10' a böl ve sonucunu sýnýf ortalamasýna ata
	Sýnýf ortalamasýný ekrana yaz

*/

#include <stdio.h>

int main(void)
{
	int sinifOrtalamasi;
	int ToplamNot = 0;
	int sayac = 1;
	int not ;
	
	while (sayac <= 10) {
		printf("Notunuzu giriniz: ");
		scanf_s("%d", &not);
		ToplamNot = ToplamNot + not;
		sayac = sayac + 1;
	}

	sinifOrtalamasi = ToplamNot / 10;
	printf("\nSinifin ortalamasi: %d\n\n", sinifOrtalamasi);

}
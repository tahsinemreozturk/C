/*
	�rne�in bir s�n�fta yap�lan s�nav�n puanlar�n� alarak
	s�n�f�n s�nav ortalamas�n� hesaplamak i�in s�rayla
	s�n�ftaki her ��renciden not bilgisini almam�z gerekecek.

	Yap�lacak eylemleri listelemek ve bu eylemlerin hangi s�rada
	y�r�t�lmesi gerekti�ini belirtmek i�in s�zde kod kullanala�m.
	
	Her seferinde not girmek i�in saya� kontroll� tekrarlama
	kullanaca��z. Bu teknik, bir grup ifadenin ka� kere y�r�t�lmesi
	gerekti�ini belirten saya� denilen bir de�i�ken kullan�r.

	Saya� = ifadenin ka� kere y�r�t�lmesi gerekti�ini tutar.

	Genelde tekrarlama say�s� d�ng� �al��maya ba�lamadan �nce
	belirli oldu�u i�in saya� kontroll� tekrarlama, genelde
	belirli tekrarlama olarak da adland�r�l�r.


	10 ��rencinin bulundu�u bir s�n�fta s�nav yap�lm��t�r. Bu
	s�n�f�n s�navdaki ortalama notunu hesaplay�n.

	�nce a�a��daki gibi s�zde kod daha sonra C' de kar��l���n�
	yazaca��z.

	Toplam� s�f�ra e�itle
	Sayac� bire e�itle

	Not sayac� 10'dan k���k veya e�it oldu�u s�rece
		��renciden not bilgisi al
		bu notu toplama ekle
		sayac� bir art�r

	toplam� 10' a b�l ve sonucunu s�n�f ortalamas�na ata
	S�n�f ortalamas�n� ekrana yaz

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
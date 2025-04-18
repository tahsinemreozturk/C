/*
C, bazi atama ifadelerini k�saltmak i�in bir ka� atama i�lemi sunar. �rne�in, c = c + 3;
ifadesi c += 3;

gibi += toplama atama i�lemi ile k�salt�labilir. += i�lemi, i�lemin sa��ndaki ifadenin de�erini
i�lemin solundaki de�i�kenin de�eri ile toplar ve sonucu i�lemin solundaki de�i�kende saklar.
��lemin +,-,*,/ veya % ikili i�lemlerden birinin oldu�u 
de�i�ken = de�i�ken i�lem ifade;
�eklindeki herhangi bir ifade 
de�i�ken i�lem = ifade; 
halinde yaz�labilir

Bu nedenle c += 3 atamas� c'ye 3 ekler. 

Kabul:  c = 3, d = 5, e = 4, f = 6, g= 12; ise a�a��daki gibi atama �rnekleri olu�ur.

Atama ��lemi	�rnek �fade		A��klama		Atamalar
	+=			 c += 7			c = c + 7		c`ye 10

	-=			 d -= 4			d = d - 4		d`ye 1

	*=			 e *= 5			e = e * 5		e`ye 20

	/=			 f /= 3			f = f / 3		f`ye 2

	%=			 g %= 9			g = g % 9		g`ye 3


*/


/*
C ayr�ca ++, tekil bir art�rma ve --, tekil bir azaltma i�lemine sahiptir. E�er bir c de�i�keni
1 att�r�lacaksa, c = c + 1 veya c += 1 ifadeleri yerine ++ bir artt�rma i�lemi kullan�labilir.
E�er bir artt�rma veya azalatma i�lemi bir de�i�kenden �nce gelirse, bunlara s�ras�yla �nceden
artt�rma veya �nceden azaltma i�lemleri denir. E�er bir artt�rma veya azaltma i�lemi bir 
de�i�kenden sonra gelirse, bunlara s�ras�yla sonradan artt�rma veya sonradan azaltma i�lemleri
denir. Bir de�i�keni �nceden artt�rma, de�i�kenin 1 att�r�lmas�na, sonra g�z�kt��� ifadede bu
yeni de�erin kullan�lmas�na neden olur. De�i�keni sonradan artt�rma de�i�kenin o andaki de�eri
nin g�z�kt��� ifadede kullan�lmas�na, sonra de�i�ken de�erinin 1 artt�r�lmas�na neden olur.


   ��lem	   �rnek �fade		A��klama		
	++			 ++a	  a'y� 1 artar, sonra a'n�n oldu�u ifadede a'n�n yeni de�erini kullan.

	++			 a++	  a'n�n oldu�u ifadede �imdiki de�erini kullan daha sonra 1 artt�r.		

	--			 --b	  b'yi 1 azalt, sonra b'nin oldu�u ifadede b'nin yeni de�erini kullan.		

	--			 b--	  b'nin oldu�u ifadede �imdiki de�erini kullan daha sonra 1 azalt.




	A�a��daki kodda i�lemin �nceden artt�rma ve sonradan artt�rma durumlar� aras�ndaki fark
	g�sterilmi�tir. c de�i�kenini sonradan artt�rmak, printf ifadesinde kullan�ld�ktan sonra
	artt�r�lmas�na neden olur. c de�i�keni �nceden artt�rma, printf ifadesinde kullan�lmadan
	�nce artt�r�lmas�na neden olur.
*/

#include <stdio.h>

int main(void) {

	int c;

	//sonradan arttirma 
	c = 5;
	printf("%d\n", c);
	printf("%d\n", c++); //yazd�r�ld�ktan sonra bir artt�
	printf("%d\n\n", c);

	//onceden arttirma
	c = 5;
	printf("%d\n", c);
	printf("%d\n", ++c); // yazmadan �nce bir artt�
	printf("%d\n\n", c);
	
}

//NOT: Tekil i�lemler, araya bir bo�ul b�rakl�madan direkt olarak teriminin yan�na yerle�tirilir.

/*
C, bazi atama ifadelerini kýsaltmak için bir kaç atama iþlemi sunar. Örneðin, c = c + 3;
ifadesi c += 3;

gibi += toplama atama iþlemi ile kýsaltýlabilir. += iþlemi, iþlemin saðýndaki ifadenin deðerini
iþlemin solundaki deðiþkenin deðeri ile toplar ve sonucu iþlemin solundaki deðiþkende saklar.
Ýþlemin +,-,*,/ veya % ikili iþlemlerden birinin olduðu 
deðiþken = deðiþken iþlem ifade;
þeklindeki herhangi bir ifade 
deðiþken iþlem = ifade; 
halinde yazýlabilir

Bu nedenle c += 3 atamasý c'ye 3 ekler. 

Kabul:  c = 3, d = 5, e = 4, f = 6, g= 12; ise aþaðýdaki gibi atama örnekleri oluþur.

Atama Ýþlemi	Örnek Ýfade		Açýklama		Atamalar
	+=			 c += 7			c = c + 7		c`ye 10

	-=			 d -= 4			d = d - 4		d`ye 1

	*=			 e *= 5			e = e * 5		e`ye 20

	/=			 f /= 3			f = f / 3		f`ye 2

	%=			 g %= 9			g = g % 9		g`ye 3


*/


/*
C ayrýca ++, tekil bir artýrma ve --, tekil bir azaltma iþlemine sahiptir. Eðer bir c deðiþkeni
1 attýrýlacaksa, c = c + 1 veya c += 1 ifadeleri yerine ++ bir arttýrma iþlemi kullanýlabilir.
Eðer bir arttýrma veya azalatma iþlemi bir deðiþkenden önce gelirse, bunlara sýrasýyla önceden
arttýrma veya önceden azaltma iþlemleri denir. Eðer bir arttýrma veya azaltma iþlemi bir 
deðiþkenden sonra gelirse, bunlara sýrasýyla sonradan arttýrma veya sonradan azaltma iþlemleri
denir. Bir deðiþkeni önceden arttýrma, deðiþkenin 1 attýrýlmasýna, sonra gözüktüðü ifadede bu
yeni deðerin kullanýlmasýna neden olur. Deðiþkeni sonradan arttýrma deðiþkenin o andaki deðeri
nin gözüktüðü ifadede kullanýlmasýna, sonra deðiþken deðerinin 1 arttýrýlmasýna neden olur.


   Ýþlem	   Örnek Ýfade		Açýklama		
	++			 ++a	  a'yý 1 artar, sonra a'nýn olduðu ifadede a'nýn yeni deðerini kullan.

	++			 a++	  a'nýn olduðu ifadede þimdiki deðerini kullan daha sonra 1 arttýr.		

	--			 --b	  b'yi 1 azalt, sonra b'nin olduðu ifadede b'nin yeni deðerini kullan.		

	--			 b--	  b'nin olduðu ifadede þimdiki deðerini kullan daha sonra 1 azalt.




	Aþaðýdaki kodda iþlemin önceden arttýrma ve sonradan arttýrma durumlarý arasýndaki fark
	gösterilmiþtir. c deðiþkenini sonradan arttýrmak, printf ifadesinde kullanýldýktan sonra
	arttýrýlmasýna neden olur. c deðiþkeni önceden arttýrma, printf ifadesinde kullanýlmadan
	önce arttýrýlmasýna neden olur.
*/

#include <stdio.h>

int main(void) {

	int c;

	//sonradan arttirma 
	c = 5;
	printf("%d\n", c);
	printf("%d\n", c++); //yazdýrýldýktan sonra bir arttý
	printf("%d\n\n", c);

	//onceden arttirma
	c = 5;
	printf("%d\n", c);
	printf("%d\n", ++c); // yazmadan önce bir arttý
	printf("%d\n\n", c);
	
}

//NOT: Tekil iþlemler, araya bir boþul býraklýmadan direkt olarak teriminin yanýna yerleþtirilir.

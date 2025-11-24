#include <stdio.h>

int main()
{
	int x = 1;
	int y = 2;
	
	//printf("%d", ++(x + y)); --> HATALI

	int z = x + y;
	printf("%d", ++z); // ----> DOGRU KULLANIM

}
//Burada ++(x+y) ifadesi hatalidir. Cunku ++ operatoru degistirilebilir 
// (lvalue) ifadelerle kullanilabilir, ancak (x + y) ifadesi degistirilebilir degildir.
// Bu nedenle, derleyici bu satiri isleme alirken hata verecektir.
// Bu kodu duzeltmek icin, degistirilebilir bir ifade kullanmak gerekir.
// 

// ++x;      gecerli
// ++(x);   gecerli
// ++(x + y);  GECERSIZ → cunku x+y bir degisken degil, HESAPLANMIS bir degerdir

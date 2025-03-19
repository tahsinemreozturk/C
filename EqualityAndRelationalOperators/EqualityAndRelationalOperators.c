#include <stdio.h>

int main ( void )
{
	int num1, num2;
	
	printf("Enter two integer, and I will tell you\n");
	printf("the relationship they satisfy:");

	scanf_s("%d%d", &num1, &num2);

	if (num1 < num2) {
		printf("%d is less than %d\n", num1, num2);
	}	

	if (num1 > num2) {
		printf("%d is greater than %d\n", num1, num2);
	}

	if (num1 == num2) {
		printf("%d is equal  to %d\n", num1, num2);
	}

	if (num1 != num2) {
		printf("%d is not equal to %d\n", num1, num2);
	}

	return 0;
}



/* 
* == eþittir
* != eþit deðildir
* >  büyüktür
* <  küçüktür
* >= büyük veya eþit
* <= küçük veya eþit


Ýþlemler           Ýþlem Yönü
  ()				Soldan Saða
  * / %				Soldan Saða
  + -				Soldan Saða
  < <= > >=			Soldan Saða
  == !=				Soldan Saða
  =					Saðdan Sola





  Güvenlik Bilgisi

  printf() kullanýrken, format string vulnerability (format string açýðý)
  oluþabilir. Eðer printf() doðrudan kullanýcýdan gelen veriyi format
  specifier (%s, %d vb.) olmadan alýrsa, saldýrgan kötü amaçlý giriþ 
  yaparak bellek eriþim ihlalleri yaratabilir.



  puts(), özellikle format string saldýrýlarýna karþý printf()'ten daha
  güvenlidir ve otomatik olarak yeni satýr eklediði için bazý durumlarda
  daha okunaklý kod yazýlmasýný saðlar. 
  \n karakteri, genellikle güvenli olsa da, buffering problemlerine
  veya komut enjeksiyonu risklerine yol açabilir. 
  Özellikle kullanýcý girdileri sistem komutlarýnda kullanýlýyorsa 
  dikkat edilmelidir.



*/
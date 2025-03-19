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
* == e�ittir
* != e�it de�ildir
* >  b�y�kt�r
* <  k���kt�r
* >= b�y�k veya e�it
* <= k���k veya e�it


��lemler           ��lem Y�n�
  ()				Soldan Sa�a
  * / %				Soldan Sa�a
  + -				Soldan Sa�a
  < <= > >=			Soldan Sa�a
  == !=				Soldan Sa�a
  =					Sa�dan Sola





  G�venlik Bilgisi

  printf() kullan�rken, format string vulnerability (format string a����)
  olu�abilir. E�er printf() do�rudan kullan�c�dan gelen veriyi format
  specifier (%s, %d vb.) olmadan al�rsa, sald�rgan k�t� ama�l� giri� 
  yaparak bellek eri�im ihlalleri yaratabilir.



  puts(), �zellikle format string sald�r�lar�na kar�� printf()'ten daha
  g�venlidir ve otomatik olarak yeni sat�r ekledi�i i�in baz� durumlarda
  daha okunakl� kod yaz�lmas�n� sa�lar. 
  \n karakteri, genellikle g�venli olsa da, buffering problemlerine
  veya komut enjeksiyonu risklerine yol a�abilir. 
  �zellikle kullan�c� girdileri sistem komutlar�nda kullan�l�yorsa 
  dikkat edilmelidir.



*/
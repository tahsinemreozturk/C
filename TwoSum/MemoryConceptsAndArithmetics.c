#include <stdio.h>


// Ko�ul ifadelerinden sonra 2. dereceden polinom hesaplayan bir program yaz.
int main(void) {

	int sum, difference, multiplication, division, mod ;
	int int1, int2;

	printf("#### The sum, difference, product, quotient, and remainder of the two entered numbers will be calculated #### \n");

	printf("Please enter the first value: ");
	scanf_s("%d", &int1);
	printf("Please enter the second value: ");
	scanf_s("%d", &int2);

	sum = int1 + int2;
	difference = int1 - int2;
	multiplication = int1 * int2;
	division = int1 / int2;
	mod = int1 % int2;


	printf("Sum: %d\n", sum);
	printf("Difference: %d\n", difference);
	printf("Multiplication: %d\n", multiplication);
	printf("Division: %d\n", division);
	printf("Mod: %d\n", mod);


	return 0;

}


//Bir de�i�ken ol�u�turuldu�unda haf�zada o de�i�ken i�in yer a��l�r. De�i�kene de�er 
// atand�k�a haf�zdaki alan, yeni veriyle eskisini yer de�i�tirir. 

/*
	�o�u C program� hesaplamalar� C aritmetik i�lemlerini kullanarak yapar. Cebirden farkl�
	olarak C' de �arpma ve b�lme i�leminin sembol� farkl�d�r. B�lmede kalan % ile, 
	�arpma * i�areti ile g�sterilir.


	Toplama   +
	��karma	  -
	�arpma    *
	B�lme     /
	Kalan     %


	��LEM �NCEL��� KURALLARI
	1. �nce parantez i�erisindeki i�lemler yap�l�r. Parantezler en y�ksek �nceliklildir.
	2. Sonra �arpma, B�lme ve Kalan i�lemleri yap�l�r. Bunlar�n �ncelikleri e�ittir. Soldan
	   sa�a do�ru yap�l�r.
	3. Sonra toplama ve ��karma. ��lem soldan sa�a do�ru yap�l�r. �ncelikleri e�ittir.
	4. Son olarak atama(=) i�lemi yap�l�r. En d���k �ncelikli i�lem atamad�r.


	()  Parantezler
	*	�arpma	
	/	B�lme
	%	Mod/Kalan alma
	+	Toplama
	-	��karma
	=	Atama
	
	*/
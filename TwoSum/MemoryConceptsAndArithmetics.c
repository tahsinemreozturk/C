#include <stdio.h>


// Koþul ifadelerinden sonra 2. dereceden polinom hesaplayan bir program yaz.
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


//Bir deðiþken olýuþturulduðunda hafýzada o deðiþken için yer açýlýr. Deðiþkene deðer 
// atandýkça hafýzdaki alan, yeni veriyle eskisini yer deðiþtirir. 

/*
	Çoðu C programý hesaplamalarý C aritmetik iþlemlerini kullanarak yapar. Cebirden farklý
	olarak C' de çarpma ve bölme iþleminin sembolü farklýdýr. Bölmede kalan % ile, 
	çarpma * iþareti ile gösterilir.


	Toplama   +
	Çýkarma	  -
	Çarpma    *
	Bölme     /
	Kalan     %


	ÝÞLEM ÖNCELÝÐÝ KURALLARI
	1. Önce parantez içerisindeki iþlemler yapýlýr. Parantezler en yüksek önceliklildir.
	2. Sonra Çarpma, Bölme ve Kalan iþlemleri yapýlýr. Bunlarýn öncelikleri eþittir. Soldan
	   saða doðru yapýlýr.
	3. Sonra toplama ve çýkarma. Ýþlem soldan saða doðru yapýlýr. Öncelikleri eþittir.
	4. Son olarak atama(=) iþlemi yapýlýr. En düþük öncelikli iþlem atamadýr.


	()  Parantezler
	*	Çarpma	
	/	Bölme
	%	Mod/Kalan alma
	+	Toplama
	-	Çýkarma
	=	Atama
	
	*/
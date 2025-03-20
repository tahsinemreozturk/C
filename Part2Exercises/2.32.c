#include <stdio.h>

int main(void)
{
	printf("This program will calculate body mass index\n");

	float kilo, boy, vki;

	printf("Please enter your height in meters: ");
	scanf_s("%f", &boy);

	printf("Please enter your weight in kilograms: ");
	scanf_s("%f", &kilo);

	float boykare = boy * boy;

	vki = kilo / boykare;

	printf("Your body mass index: %.2f\n\n\n\n",vki);

	printf("BMI Values\n");
	printf("Underweight :\tless than 18,5\n");
	printf("Normal :\tbetween 18,5 and 24,9\n");
	printf("Overweight :\tbetween 25 and 29,9\n");
	printf("Obese :  \t30 or greater\n");



}
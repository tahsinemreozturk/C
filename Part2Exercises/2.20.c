#include <stdio.h>

int main(void)
{
	float piNumber = 3.14159;
	float radius, diameter, circumference, area;

	printf("This program calculates the diameter, circumference and area of ??the circle with the entered radius information.\n");

	printf("Enter Radius Value: ");
	scanf_s("%f", &radius);

	printf("Circle diameter is %f.\n", radius * 2);
	printf("Circle circumference is %f\n", 2 * piNumber * radius);
	printf("Circle area is %f.\n\n", piNumber * radius * radius);
	
	return 0;

}
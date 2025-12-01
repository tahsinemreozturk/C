//#include <stdio.h>
//
//int main()
//{
//	int number, digit1, digit2, digit3, digit4;
//	int temp;
//
//	printf("Enter the 4-digit integer value you will send: ");
//	scanf_s("%d", &number);
//
//	digit4 = number % 10;
//	number = number / 10;
//	digit3 = number % 10;
//	number = number / 10;
//	digit2 = number % 10;
//	number = number / 10;
//	digit1 = number % 10;
//
//	digit4 = (digit4 + 7) % 10;
//	digit3 = (digit3 + 7) % 10;
//	digit2 = (digit2 + 7) % 10;
//	digit1 = (digit1 + 7) % 10;
//
//
//	temp = digit1;
//	digit1 = digit3;
//	digit3 = temp;
//
//	temp = digit2;
//	digit2 = digit4;
//	digit4 = temp;
//	
//	printf("Encrypted number: %d%d%d%d\n", digit1, digit2, digit3, digit4);
//
//	return 0;
//}
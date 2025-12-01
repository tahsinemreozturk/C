#include <stdio.h>

int main()
{
	int password;
	int digit1, digit2, digit3, digit4;
	int temp;


	printf("Enter the encrypted 4-digit number: ");
	scanf_s("%d", &password);

	digit1 = password / 1000;
	digit2 = (password / 100) % 10;
	digit3 = (password / 10) % 10;
	digit4 = password % 10;


	temp = digit1;
	digit1 = digit3;
	digit3 = temp;

	temp = digit2;
	digit2 = digit4;
	digit4 = temp;

	digit1 = (digit1 + 3) % 10;
	digit2 = (digit2 + 3) % 10;
	digit3 = (digit3 + 3) % 10;
	digit4 = (digit4 + 3) % 10;

	printf("Decrypted number: %d%d%d%d\n", digit1, digit2, digit3, digit4);
	return 0;
}
//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//	double amount;
//	double principal = 1000.00;
//	double rate ;
//	unsigned int year;
//
//	
//	printf("%4s%10s%21s\n", "Year", "Rate", " Amount on deposit");
//	printf("-------- -------- ---------------------------\n");
//
//	for (year = 1; year <= 10; ++year)
//	{
//		for (rate = 0.05; rate <= 0.10; rate += 0.01)
//		{
//			amount = principal * pow(1.0 + rate, year);
//			// rate * 100 ekleyerek hangi faiz oraný olduðunu gösterdik
//			printf("%4u%9.0f%%%21.2f\n", year, rate * 100, amount);
//		}
//		puts("");
//	}
//}
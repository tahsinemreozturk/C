//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int productNo;
//	int quantity;
//	double price;
//	double totalSales = 0.0;
//
//
//	for (i = 1; i <= 7; i++)
//	{
//		printf("\nEnter product number (1-5) for day %d: ", i);
//	    scanf("%d", &productNo);
//
//		printf("Enter quantity sold: ");
//		scanf("%d", &quantity);
//
//		switch (productNo)
//		{
//			case 1:
//				price = 2.98;
//				break;
//			case 2:
//				price = 4.50;
//				break;
//			case 3:
//				price = 9.98;
//				break;
//			case 4:
//				price = 4.49;
//				break;
//			case 5:
//				price = 6.87;
//				break;
//			default:
//				printf("Invalid product number.\n");
//				price = 0.0;
//				quantity = 0;
//				break; // Skip to next iteration
//		}
//
//		totalSales += price * quantity;
//	}
//
//	printf("\nTotal sales for the week: %.2f TL\n", totalSales);
//
//	return 0;
//	
//}
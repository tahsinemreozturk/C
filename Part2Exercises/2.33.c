#include <stdio.h>

int main(void)
{
    int cost, distance, fuelPrice, averageFuelConsumption, parkingFee, tollFee;

    printf("Enter the daily distance you drive: \n");
    scanf_s("%d", &distance);

    printf("Enter the fuel price: \n");
    scanf_s("%d", &fuelPrice);

    printf("Enter your average fuel consumption: \n");
    scanf_s("%d", &averageFuelConsumption);

    printf("Enter your daily parking fee: \n");
    scanf_s("%d", &parkingFee);

    printf("Enter your daily toll fee: \n");
    scanf_s("%d", &tollFee);

    cost = ((distance / 100) * fuelPrice * averageFuelConsumption) + parkingFee + (tollFee * 2);

    printf("Your daily commuting cost: %d\n\n\n", cost);

    return 0;
}

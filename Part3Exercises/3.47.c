#include <stdio.h>
int main()
{
	printf("Hedef Kalp Atis Hizi Hesaplayici\n");

	int birthDay, birthMonth, birthYear;
	int age;
	int currentDay, currentMonth, currentYear;
	int maxHeartRate;
	int targetMin, targetMax;

	printf("Enter your birth date  (day month year): ");
	scanf_s("%d %d %d", &birthDay, &birthMonth, &birthYear);

	printf("Enter today`s date (day month year): ");
	scanf_s("%d %d %d", &currentDay, &currentMonth, &currentYear);

	age = currentYear - birthYear;

	if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay ))
	{
		age--;
	}

	maxHeartRate = 220 - age;
	targetMin = (int)(maxHeartRate * 0.5);
	targetMax = (int)(maxHeartRate * 0.85);

	printf("\nYour age: %d \n", age);
	printf("Your Maximum Heart Rate: %d bpm\n", maxHeartRate);
	printf("Your Target Heart Rate Range: Min => %d - %d <= Max bpm\n",targetMin, targetMax);

	return 0;
}
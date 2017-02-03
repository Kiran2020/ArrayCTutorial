#include <stdio.h>
#define SIZE 10

// function prototype
float calculate_average(int num[]);

int main(void)
{
	// declaration array
	int num[SIZE];

	// initialize 
	for (int i = 0; i < SIZE; i++)
	{
		// request user for data
		printf("Enter any number: ");
		scanf("%d", &num[i]);
	}

	// calculate average 
	float average = calculate_average(num);

	// print average
	printf("Average: %f\n", average);
}

float calculate_average(int num[])
{
	float sum = 0;

	// loop throught each element of array
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + num[i];
	}

	float average = sum / SIZE;

	return average;
}


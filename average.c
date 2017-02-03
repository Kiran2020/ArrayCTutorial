#include <stdio.h>
#define SIZE 10
/**
* Average of 10 numbers in one dimensional array.
*
* Passing Array to a function 
* Array is passed by reference
*/

// function prototype
float find_average(int num[]);

int main(void)
{
	// declare array
	int num[SIZE];


	for (int i = 0; i < SIZE; i++)
	{
		// prompt user for input
		printf("Enter any positive integer: ");
		// store in array
		scanf("%d", &num[i]);
	}

	// calculate average
	float average = find_average(num); // base address of array is passed

	// display average
	printf("Average = %f\n", average);
}


float find_average(int num[])
{
	int sum = 0;
	
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + num[i];
	}

	float average = (float) sum / SIZE;

	return average;
}

#include <stdio.h>
#define SIZE 10

/**
* To do List:
* 1. Declare Array(done)
* 2. Populate Array with user input (done)
* 3. Calculate Average.
*    3.1. Loop throught each of array and calculate sum
*    3.2. sum / array size = average
*    3.3. return average
* 4. Display Average.
*/

// function prototype
float caculate_average(int num[]);

int main(void) 
{
	// Declare Array
	int num[SIZE];

	// populate array
	int i;
	for (i = 0; i < SIZE; i++)
	{
		// ask user for value
		printf("Enter any value: ");
		scanf("%d", &num[i]);
	}

	// caculate average
	float average = caculate_average(num);

	// display
	printf("Average = %f\n", average);
}

float caculate_average(int num[])
{
	int i;
	float sum = 0;
	// loop through each element in array
	for (i = 0; i < SIZE; i++) 
	{
		// caculate sum
		sum = sum + num[i];
	}

	// caculate average
	float average = sum / SIZE;

	// return average
	return average;
}


#include <stdio.h>
#define SIZE 10

/**
* Another way of initializing array 
*/
int main(void) 
{
	// declare array
	int num[SIZE];

	// initialize elements of array 0 to n
	for (int i = 0; i < SIZE; i++) 
	{
		num[i] = i;
	}

	// display initilize array 0 to n
	for (int i = 0; i < SIZE; i++)
	{
		printf("Element[%i] is %i\n", i, num[i]);
	}
	
}

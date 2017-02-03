#include <stdio.h>

/**
*
* Declaring arrays, 
* Initializing arrays,
* Accessing arrays
*/
int main(void)
{
	// declaring array and initialization
	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // num  is an array of 10 intergers


	// accessing arrays element
	printf("Element[%i] is %i\n", 0, num[0]);
	printf("Element[%i] is %i\n", 1, num[1]);
	printf("Element[%i] is %i\n", 9, num[9]); 
}

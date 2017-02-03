#include <stdio.h>
#define SIZE 2

/**
* To do List
* 1. Declare 2-d array
* 2. Populate 2-d array
* 3. Display
*/

// function prototype
void display(int num[][SIZE]);

int main(void)
{
	// Declare array
	int num[SIZE][SIZE];

	// populate array
	int i, j;
	for (i = 0; i < SIZE; i++)
	{
		for(j = 0; j < SIZE; j++)
		{
			// ask user for data
			printf("Enter any number: ");
			scanf("%d", &num[i][j]);
		}
	}

	// display
	display(num);
}

void display(int num[][SIZE])
{
	int i, j;
	for(i = 0; i < SIZE; i++)
	{
		for(j = 0; j < SIZE; j++)
		{
			printf("%5d", num[i][j]);
		}

		printf("\n");
	}	
}
#include <stdio.h>

# define SIZE 3

/**
* Multi-dimensional array
*/
void display(int num[][SIZE]); // function prototype
int main(void)
{
	// declare 2-d array
	int num[SIZE][SIZE];

	// initialize array
	for (int i = 0; i < SIZE; i++) 
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("Enter any number: ");
			scanf("%d", &num[i][j]);
		}
	}

	// display 2d array
	display(num);
}

void display(int num[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%3d", num[i][j]);
		}
		
		printf("\n");
	}
}

#include <stdio.h>

/**
* Multiplication of two matrix
*
* To do List 
* 1. Declare and initialization of Array
* 2. Multiply A and B and store in C.
*    2.1. Extract row value of A and each column value of B 
*    2.2. Calculate sum
*    2.3. Store sum in C in appropriate place. 
* 3. Display C.
*/
void multiply(int A[][3], int B[][2], int C[][2]);
void display(int C[][2]);

int main(void)
{
	// declaration and initialization
	int A[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	int B[3][2] = {
		{7, 8},
		{9, 10},
		{11, 12}
	};
	int C[2][2];

	// multiply 
	multiply(A, B, C);

	// display
	display(C);
	
}

void multiply(int A[][3], int B[][2], int C[][2])
{	

	// multiplication logic	
	for (int i = 0; i < 2; i++) 
	{	
		for (int j = 0; j < 2; j++)
		{
			int sum = 0;
			for (int k = 0; k < 3; k++) 
			{
				sum = sum + A[i][k] * B[k][j];
			}
			C[i][j] = sum;
		}

	}
}

void display(int C[][2])
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%5d", C[i][j]);
		}

		printf("\n");
	}
}

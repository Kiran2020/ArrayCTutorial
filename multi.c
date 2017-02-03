#include <stdio.h>

/**
* To do List
* 1. Array Declare
* 2. Array Initialize
* 3. Multiply
* 4. Display
*
*/

void multiply(int A[][3], int B[][2], int C[][2]);
void display(int C[][2]);

int main(void)
{

	// declare and initialize
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
	int i, j, k;
	// multiplication logic
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			int sum = 0;
			for (k = 0; k < 3; k++)
			{
				sum = sum + A[i][k] * B[k][j];
			}

			C[i][j] = sum;
		}
	}
}

void display(int C[][2])
{
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%5d", C[i][j]);
		}

		printf("\n");
	}
}
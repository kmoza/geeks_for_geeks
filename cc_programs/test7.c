#include<stdio.h>

#define N 4

void multiplyArray(int A[][N], int B[][N], int C[][N])
{
	int i, j, k;

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			C[i][j] = 0;
			for(k = 0; k < N; k++)
			{
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
		}
	}

}

int main()
{
	int A[N][N] = { 
			{1, 1, 1, 1},
			{2, 2, 2, 2},
			{3, 3, 3, 3},
			{4, 4, 4, 4}
		      };

	int B[N][N] = {
			{2, 2, 2, 2},
			{3, 3, 3, 3},
			{4, 4, 4, 4},
			{5, 5, 5, 5}
		      };

	int C[N][N];

	int i,j;

	multiplyArray(A, B, C);

	//print array
	for(i = 0; i < N; i++)
	{
		for(j = 0; j<N;j++)
		{
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}




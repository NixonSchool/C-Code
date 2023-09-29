#include <stdio.h>
#define ROW 3
#define COL 4

int main()
{
	int matrix1[ROW][COL];
	int matrix2[ROW][COL];
	int matrix3[ROW][COL];
	int i, j;

    printf("Enter the values for matrix1(%d*%d): \n", ROW, COL);
	//take user input for matrix1
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}

	printf("=================================\n");

	printf("Enter the values for matrix2(%d*%d): \n", ROW, COL);
	//take user input for matrix2
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			scanf("%d", &matrix2[i][j]);
		}
	}

		//addition
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	printf("The resultant matrix3 is: \n");
	//add the two matrices to give matrix3
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{

			printf("%5d", matrix3[i][j]);

		}
		printf("\n");
	}
}

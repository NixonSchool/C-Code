

/*
Multiplication of matrices requires that the number of columns in first matrix should be equal to the number of rows in second matrix.
*/

/* This is the wrong code from the book, doesn't work, corrected version is found below
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2

int main()
{
	int mat1[ROW1][COL1], mat2[ROW2][COL2], mat3[ROW1][COL2];
	int i, j, k;
	printf("Enter the matrix mat1(%d*%d) row-wise: \n", ROW1, COL1);
	for (i = 0; i < ROW1; i++)
	{
		for (j = 0; j < COL1; j++)
			scanf_s("%d", &mat1[i][j]);
	}
	printf("Enter the matrix mat2(%d*%d) row-wise: \n", ROW2, COL2);
	for (i = 0; i < ROW2; i++)
	{
		for (j = 0; j < COL2; j++)
			scanf_s("%d", &mat2[i][j]);
	}
	//multiplication
	for (i = 0; i < ROW1; i++)
	{
		mat3[i][j] = 0;
		for (k = 0; k < COL1; k++)
			mat3[i][j] = mat1[i][k] * mat2[k][j];
	}
	printf("The Resultant matrix mat3 is: \n");
	for (j = 0; j < COL2; j++)
	{
		printf("%5d", mat3[i][j]);
	}
	printf("\n");
	return 0;
}

*/

#include <stdio.h>

#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2

int main() {
    int mat1[ROW1][COL1], mat2[ROW2][COL2], mat3[ROW1][COL2];
    int i, j, k;

    printf("Enter the matrix mat1(%d*%d) row-wise: \n", ROW1, COL1);
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL1; j++)
            scanf_s("%d", &mat1[i][j]);
    }

    printf("Enter the matrix mat2(%d*%d) row-wise: \n", ROW2, COL2);
    for (i = 0; i < ROW2; i++) {
        for (j = 0; j < COL2; j++)
            scanf_s("%d", &mat2[i][j]);
    }

    // Multiplication
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) { // Initialize mat3 element to 0
            mat3[i][j] = 0;
            for (k = 0; k < COL1; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("The Resultant matrix mat3 is: \n");
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            printf("%5d", mat3[i][j]);
        }
        printf("\n"); // Add a newline after each row
    }

    return 0;
}



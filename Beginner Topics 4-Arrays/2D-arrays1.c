#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4

//Program to print out a matrix
int main()
{
    int mat[ROW][COL], i, j;
    printf("Enter the elements of the matrix(%d*%d) row-wise:\n", ROW, COL);
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++) //you don't need brackets
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("The matrix that you have entered is: \n");
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("%5d", mat[i][j]);
        }
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}

/*

This C code is a program that takes input from the user to create a 2D matrix (a matrix with rows and columns) and then displays the matrix. Here's a step-by-step explanation of what the code does:

It includes two standard C libraries, <stdio.h> and <stdlib.h>.

It defines constants ROW and COL with values 3 and 4, respectively. These constants represent the number of rows and columns for the 2D matrix.

Inside the main function:

It declares a 2D integer array mat with dimensions specified by ROW and COL.
It uses nested loops to read input from the user for each element of the matrix:
The outer loop iterates through the rows (i), from 0 to ROW - 1.
The inner loop iterates through the columns (j), from 0 to COL - 1.
It prompts the user to enter each element of the matrix and stores the input in mat[i][j].
After reading the matrix elements, it enters another set of nested loops to display the matrix:

Again, the outer loop iterates through the rows (i), from 0 to ROW - 1.
The inner loop iterates through the columns (j), from 0 to COL - 1.
It prints each element of the matrix using printf with the %5d format specifier, which ensures that each integer occupies at least 5 characters, adding leading spaces if necessary.
After printing a row, it adds a newline character (\n) to move to the next row.
Finally, it prints "Hello world!" to indicate the end of the program and returns 0 to indicate successful execution.

*/

/*

The %5d format specifier in the printf function is used to format the output so that each integer value in the matrix is printed in a field that is at least 5 characters wide. Here's why this formatting is used:

Alignment: It ensures that the numbers are right-aligned within their respective fields. This makes the output look neat and organized, with the numbers lined up in columns.

Fixed Width: It enforces a fixed width for each number, even if the numbers have varying lengths. This can be particularly useful when dealing with tabular data or matrices because it ensures that each column has consistent spacing.

Padding: If a number has fewer digits than the width specified by %5d, it will be padded with leading spaces to reach the specified width. This padding helps in maintaining a uniform appearance in the output.

So, %5d is used for formatting purposes to make the matrix display more readable and structured. It's a common practice when working with tabular data or matrices to ensure that elements are presented in an organized and visually appealing manner.

*/

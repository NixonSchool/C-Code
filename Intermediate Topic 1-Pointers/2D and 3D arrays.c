// C program to store temperature of two cities of a week and display it.
#include <stdio.h>
const int CITY = 2;
const int WEEK = 7;
int main()
{
  int temperature[CITY][WEEK];

  // Using nested loop to store values in a 2d array
  for (int i = 0; i < CITY; ++i)
  {
    for (int j = 0; j < WEEK; ++j)
    {
      printf("City %d, Day %d: ", i + 1, j + 1);
      scanf("%d", &temperature[i][j]);
    }
  }
  printf("\nDisplaying values: \n\n");

  // Using nested loop to display vlues of a 2d array
  for (int i = 0; i < CITY; ++i)
  {
    for (int j = 0; j < WEEK; ++j)
    {
      printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
    }
  }
  return 0;
}


==========================================
==========================================
==========================================

// C program to find the sum of two matrices of order 2*2

#include <stdio.h>
int main()
{
  float a[2][2], b[2][2], result[2][2];

  // Taking input using nested for loop
  printf("Enter elements of 1st matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Enter a%d%d: ", i + 1, j + 1);
      scanf("%f", &a[i][j]);
    }

  // Taking input using nested for loop
  printf("Enter elements of 2nd matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Enter b%d%d: ", i + 1, j + 1);
      scanf("%f", &b[i][j]);
    }

  // adding corresponding elements of two arrays
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      result[i][j] = a[i][j] + b[i][j];
    }

  // Displaying the sum
  printf("\nSum Of Matrix:");

  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("%.1f\t", result[i][j]);

      if (j == 1)
        printf("\n");
    }
  return 0;
}


==========================================
==========================================
==========================================

//3D arrays

// C Program to store and print 12 values entered by the user

#include <stdio.h>
int main()
{
  int test[2][3][2];

  printf("Enter 12 values: \n");

  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 2; ++k)
      {
        scanf("%d", &test[i][j][k]);
      }
    }
  }

  // Printing values with the proper index.

  printf("\nDisplaying values:\n");
  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 2; ++k)
      {
        printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
      }
    }
  }

  return 0;
}


==========================================
==========================================
==========================================

//Changing values inside the array
//Below means 3 rows, 2 columns

int arr[3][2] = {
    {2,3}, {5,6},{9,10}

    };
/*

-------------------------------------

How to read a 2D array: Here we have 2 external brackets(ignore those ones). Then we have 3 items inside them, each containing 2 items. Thus, 3 by 2 array.

-------------------------------------

In this 2D array, you have:

3 rows (indexed as 0, 1, and 2).
2 columns (indexed as 0 and 1).

So, arr[0][0] represents the element in the first row and the first column, which is 2.

Similarly, arr[1][1] represents the element in the second row and the second column, which is 6.

--------------------------------------

We can change the values like:

Remember that indices start from 0. So, in the example above, if you want to access the element in the second row and the first column, you use arr[1][0], which gives you 5.

In summary, when working with arrays of arrays (multidimensional arrays), you use two indices to access elements. The first index specifies the row, and the second index specifies the column. Indices start from 0, so the first row/column is at index 0, the second row/column is at index 1, and so on.


*/


arr[2][2] = 40;
arr[3][2] = 80;

printf("The new value for arr[2][2] is %d\n.", arr[2][2]);
printf("The new value for arr[3][2] is %d\n.", arr[2][2]);
















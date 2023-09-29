#include <stdio.h>
#include <stdlib.h>

void min_max_array()
{
	int i;
	int j = 0;
	int min, max;
	int array6[10] = { 2 , 5, 4, 1, 8, 9, 11 , 6, 3 , 7 };

	min = max = array6[0]; //both max and min are assigned the first array value

    for (i = 0; i < 10; i++)
    {
        if (array6[i] < min)
            min = array6[i];

        if (array6[i] > max)
            max = array6[i];
    }
    printf("The minimum in the array is: %d\nThe maximum in the array %d\n", min, max);


}

void reverse_array()
{
	int i, j;
	int temp;
	int array7[10] = { 2 , 5, 4, 1, 8, 9, 11 , 6, 3 , 7 };

	for (i = 0, j = 9; i < j; i++ , j--)
	{
		temp = array7[i];
		array7[i] = array7[j];
		array7[j] = temp;

	}
	printf("After reversing the array is: ");
	for (i = 0; i < 10; i++)
		printf("%d", array7[i]);
	printf("\n");
}

int add(int array[], int n)
{
    //we passed the array name,and its size above
    int i;
    int sum = 0;
    for(i = 0; i < n; i++)
    {
        sum = sum + array[i]; //sum += array[i];
    }
    return sum;

}


int two_d_arrays()
{
	int array8[4][5] = {
	    {1,2,3,4,5},
	    {6,7,8,9,10},
	    {11,12,13,14,15},
	    {16,17, 18, 19,20}};

		int i, j;
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 5; j++)
			{
				printf("%d ", array8[i][j]);

			}
		}
}


int main()
{
    int a[] = {2,32,345,234,12,632,46};
    int b[] = {54, 2345,5, 856, 34,96,435, 23, 123,746};
    int c[] = {23, 2};

    // Calculate and print the sum of elements for each array
    printf("Sum of elements of array a: %d\n", add(a, 5));
    printf("Sum of elements of array b: %d\n", add(b, 8));
    printf("Sum of elements of array c: %d\n", add(c, 10));
    printf("\n");
    reverse_array();
    printf("\n");
    two_d_arrays();
    return 0;
}

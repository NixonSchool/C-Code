#include <stdio.h>


void second_array()
{
	//Here I just want to loop through the array, asking the user for values.
	int array2[5];
	int i;


	for (i = 0; i < 5; i++)
	{
		printf("Enter 5 numbers, 1 at at a time,and press enter after each entry: ");
		scanf_s("%d", &array2[i]);
		
	}
	
}

int main()
{
	int sum;
	int array[5];
	second_array();
	printf("Enter the first number: ");
	scanf_s("%d", &array[0]);

	printf("Enter the second number: ");
	scanf_s("%d", &array[1]);

	printf("Enter the third number: ");
	scanf_s("%d", &array[2]);

	printf("Enter the fourth number: ");
	scanf_s("%d", &array[3]);

	printf("Enter the fifth number: ");
	scanf_s("%d", &array[4]);

	sum = array[0] + array[1] + array[2] + array[3] + array[4];
	printf("The sum of the 5 numbers is: %d\n", sum);

	printf("\n");

	/*
	
	//altering something inside the array.
	int change1;
	change1 = array[0 * 10];
	printf("The new value of the first number is: %d\n", change1);
	
	*/

	//Altering the values of array indexes
	int change1;
	change1 = array[0] *= 10;
	printf("The new value for first number is: %d\n", change1);
	
	int change2;
	change2 = array[1] += 1;
	printf("The new value for the second number is: %d\n", change2);
	
	return 0;
	
}

/*

Check on array bound checking, so that we can't bypass the size of array.

*/

/*

Reading the values in an array
Displaying the values of an array
Adding the values of an array


*/

void reading_array_values()
{
	int array3[17];
	int i;
	
	for (i = 0; i < 17; i++)
	{
		scanf("%d", &array3[i]);
	}
}

void displaying_array_values()
{
	int array4[19] = {0};
	int i;
	for (i = 0; i < 19; i++)
	{
		printf("%d", array4[i]);
	}
}

void adding_array_values()
{
	int array5[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		int sum = 0;
		sum += array5[i]; //sum = array[1] + array[i] + .....
	}
}

/*

The expression sum += array5[i]; is a shorthand way of updating 
the sum variable by adding the value of array5[i] to it. 
It is equivalent to writing sum = sum + array5[i];.

Here's how it works step by step:

sum is an accumulator variable initialized to some initial value (usually 0).

array5[i] refers to the value at the i-th index of the array array5.

+= is the addition assignment operator, which adds the value on the right
(in this case, array5[i]) to the variable on the left (in this case, sum)
and assigns the result back to the variable on the left (sum).

So, sum += array5[i]; means "take the current value of sum, 
add array5[i] to it, and store the result back in sum."

This is commonly used in loops when you want to accumulate 
a sum of values, as it's more concise than writing 
sum = sum + array5[i]; each time.

*/

/*

Initializing arrays like this means all values will be initialized to zero.

*/

int ages[] = { 0 };

int old_men[5] = { 90, 88 }; //will assign the rest of the values zeros.

//int young_ment[5] = { 1, 2, 3, 4,5 6,7,8 }; compiler will show error.

/*

Copying the values of the array to another array, 

we don't assign one array to another, we use for loop

*/
void copy_array()
{
	int a[5] = { 234,234,23,4234,234 };
	int b[5] = {0};
	int i;
	for (i = 0; i < 5; i++)
	{
		b[i] = a[i];
	}
}

/*

The code you provided is correct for copying the contents of one array (a) into another array (b). However, there are a few things to keep in mind:

Array Size: Yes, for this code to work correctly, both arrays (a and b) should be of the same size. In your code, both a and b are of size 5, which is consistent.

Loop Limit: The loop should iterate from 0 to size - 1, where size is the size of the arrays. In your code, you have for (i = 0; i < 5; i++), which is correct because both a and b have a size of 5.

Initialization: You've correctly initialized b to all zeros using int b[5] = {0};. This step is essential to avoid copying uninitialized values from a.

Assignment: Inside the loop, you're copying elements from a to b using b[i] = a[i];. This is the correct way to copy elements.

So, if you always want to copy one array into another, and both arrays are of the same size, you can use this loop-based approach as shown in your code. It's a valid and efficient way to copy arrays in C

*/


/*

Program to find the maximum and the minimum integer in an array

*/

void min_max_array()
{
	int i, j;
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

/*
Reversing the elements in the array
*/


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


/*
Another method for reversing the elements in the array
*/
void reverse_array2() {
	int array7[10] = { 2, 5, 4, 1, 8, 9, 11, 6, 3, 7 };
	int reversed_array[10];
	int i, j = 9;

	for (i = 0; i < 10; i++) {
		reversed_array[j] = array7[i];
		j--;
	}

	printf("After reversing the array is: ");
	for (i = 0; i < 10; i++)
		printf("%d ", reversed_array[i]);
	printf("\n");
}

/*
Decimal to Binary
*/



// Function to convert decimal to binary
void decimalToBinary(int n) {
	int binary[32]; // Assuming 32-bit binary representation
	int i = 0;

	while (n > 0) {
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}

	printf("Binary equivalent: ");
	for (int j = i - 1; j >= 0; j--) {
		printf("%d", binary[j]);
	}
	printf("\n");
}

int main() {
	int decimalNumber;

	printf("Enter a decimal number: ");
	scanf("%d", &decimalNumber);

	decimalToBinary(decimalNumber);

	return 0;
}



/*
* 
Here, we define a function named decimalToBinary, which takes an integer n as an argument. This function is responsible for converting the decimal number into its binary representation.

We declare an array binary to store the binary digits. We assume a 32-bit binary representation, so the array can hold up to 32 binary digits (adjust the size as needed).

We use a while loop to repeatedly divide the decimal number n by 2 and store the remainder (0 or 1) as binary digits in the binary array. The loop continues until n becomes 0.

Inside the loop, binary[i] is set to the remainder when n is divided by 2, and then n is updated by dividing it by 2. This process extracts the binary digits from right to left.

We increment i to keep track of the number of binary digits stored.

After the loop, we print the binary equivalent by iterating through the binary array in reverse order (from the most significant digit to the least significant digit) and printing each digit using printf.

*/

/*
* 
In the main function:

We declare an integer variable decimalNumber to store the user's input, which is the decimal number we want to convert to binary.

We prompt the user to enter a decimal number using printf.

We read the user's input using scanf and store it in the decimalNumber variable.

Finally, we call the decimalToBinary function, passing the decimalNumber as an argument to convert it to binary and print the result.

This program converts a decimal number to binary by repeatedly dividing the decimal number by 2 and storing the remainders as binary digits. It then prints the binary equivalent in reverse order.

*/

/*
Next, we want to search for a particular item in the array
*/

#define SIZE 10

int main() {
	int arr[SIZE] = { 23, 12, 56, 98, 76, 14, 65, 11, 19, 45 };
	int item, i;

	printf("Enter the item to be searched: ");
	scanf("%d", &item);

	for (i = 0; i < SIZE; i++) {
		if (item == arr[i]) {
			printf("%d found at position %d\n", item, i + 1);
			break;
		}
	}

	if (i == SIZE) {
		printf("Item %d not found in array\n", item);
	}

	return 0;
}
/*
Explanation:

This program searches for a specific item in an array of integers.

We define a macro SIZE to represent the size of the array. In this case, it's set to 10.

We declare an integer array arr of size SIZE and initialize it with some values.

We declare two integer variables: item to store the item to be searched for and i for looping through the array.

We prompt the user to enter the item they want to search for and read it using scanf.

We use a for loop to iterate through each element of the array.

Inside the loop, we check if the current element arr[i] is equal to the item we're searching for. If it is, we print a message indicating that the item is found at position i + 1 (since array indices start from 0). We then break out of the loop.

After the loop, we check if i is equal to SIZE. If it is, that means we've searched the entire array without finding the item, so we print a message indicating that the item was not found in the array.

This program performs a linear or sequential search by comparing each element of the array with the item to be searched until it finds a match or exhausts the entire array.

*/

/*
Pass elements of an array to a function then check if odd or even
*/
#include<stdio.h>

// Function to check if a number is even or odd
void check(int num) {
	if (num % 2 == 0) {
		printf("%d is even\n", num);
	}
	else {
		printf("%d is odd\n", num);
	}
}

int main() {
	int arr[10];
	int i;

	printf("Enter the array elements: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		check(arr[i]); // Passing individual array elements to the function
	}

	return 0;
}

/*
Now, let's talk about passing the whole 1-D array to a function:
*/

#include<stdio.h>

// Function to process a 1-D array
void processArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[10];
	int i;

	printf("Enter the array elements: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	processArray(arr, 10); // Passing the whole array to the function

	return 0;
}

/*
* 
Explanation:

In this program, we have a function named processArray that takes two arguments: an integer array arr[] and an integer size representing the size of the array.

In the main function, we declare an integer array arr of size 10 to store user input.

We use a for loop to read 10 integers from the user and store them in the arr array.

After reading the array elements, we call the processArray function and pass the entire arr array along with its size (10) as arguments to the function.

Inside the processArray function, we iterate through the elements of the array and print them. This allows us to process the entire array within the function.

*/

/*


We have studied that changes made in formal arguments do not affect the actual arguments, but this is not the case while passing an array to a function. The mechanism of passing an array, to a function is quite different from that ofpassing .a simple variable. We have studied earlier that in the case of simple variables, the called function creates a copy of the variable and works on it, so any changes, made in the function do not affect the original variable. When an array is passed as an actual argument, the called function actually gets access to the original array and works on it, so any changes made inside the function affect the original array. Here is a program in which an array is pass~d to a function.

*/

#include <stdio.h>

// Function to add 10 to each element of the array
void addTenToElements(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		arr[i] += 10; // Modifying the original array elements
	}
}

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int i;

	printf("Original array: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	addTenToElements(arr, 5); // Passing the entire array to the function

	printf("Modified array: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]); // Printing the modified array
	}
	printf("\n");

	return 0;
}

/*

Explanation:

In this program, we have a function named addTenToElements that takes two arguments: an integer array arr[] and an integer size representing the size of the array.

In the main function, we declare an integer array arr with initial values.

We print the original array.

After printing the original array, we call the addTenToElements function and pass the entire arr array along with its size (5) as arguments to the function.

Inside the addTenToElements function, we iterate through the elements of the array and add 10 to each element. These changes affect the original array since the function has access to the original array, not a copy.

Finally, we print the modified array to see the changes.

The key point to note here is that when you pass an array to a function, you are passing a reference to the original array, not a copy. Therefore, any modifications made to the array inside the function directly affect the original array.

*/

#include <stdio.h>

// Function to calculate the sum of squares of array elements
void func(int val[]) {
	int sum = 0, i;

	for (i = 0; i < 6; i++) {
		val[i] = val[i] * val[i]; // Squaring each element of the array
		sum += val[i]; // Adding the squared value to the sum
	}
	printf("The sum of squares = %d\n", sum);
}

int main() {
	int i, arr[6] = { 1, 2, 3, 4, 5, 6 };

	// Printing the original contents of the array
	printf("Contents of array before: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	// Calling the function to calculate the sum of squares
	func(arr);

	// Printing the modified contents of the array
	printf("Contents of array after: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}


/*
Explanation:

In this program, we have a function named func that takes an integer array val[] as an argument.

In the main function, we declare an integer array arr with initial values.

We print the original contents of the array before calling the func function.

Inside the func function, we iterate through the elements of the array and square each element. We also calculate the sum of squared values.

After calling the func function, we print the modified contents of the array, which now contain the squared values.

The key point to understand here is that when you pass an array to a function, you are passing a reference to the original array. Any changes made to the array inside the function affect the original array.

In this program, the function squares each element of the array and calculates the sum of squared values. The original array is modified with squared values, which is evident when we print the contents of the array after calling the function.

*/


/*

Explanation:

In this program, we have a function named add that calculates the sum of elements in an integer array. It takes two parameters: arr[], which is the array to be processed, and n, which is the number of elements in the array.

In the main function, we declare three different integer arrays (a, b, and c) of different sizes and with different values.

We call the add function for each array, passing the array and its size as arguments. The add function calculates the sum of elements for each array and returns the result.

We print the sum of elements for each array using printf.

The key idea here is that the add function is designed to work with arrays of different sizes. It calculates the sum of elements for any integer array you pass to it by specifying the array and its size as arguments. This demonstrates the flexibility of functions when working with arrays of varying sizes.

*/

#include <stdio.h>

// Function to calculate the sum of elements in an array
int add(int arr[], int n) {
	int i, sum = 0;

	for (i = 0; i < n; i++) {
		sum += arr[i]; // Adding each element of the array to the sum
	}
	return sum;
}

int main() {
	int a[5] = { 2, 4, 6, 8, 10 };
	int b[8] = { 1, 3, 5, 7, 9, 11, 13, 15 };
	int c[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// Calculate and print the sum of elements for each array
	printf("Sum of elements of array a: %d\n", add(a, 5));
	printf("Sum of elements of array b: %d\n", add(b, 8));
	printf("Sum of elements of array c: %d\n", add(c, 10));

	return 0;
}

/*
In 2D-Arrays we have two subscripts array[row number][column number];
*/

/*

// Reading values into arr
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("Enter the value for arr[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

*/

/*

 // Displaying values of arr (optional)
	printf("Values in arr:\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n"); // Move to the next row
	}

*/


int two_d_arrays()
{
	int array8[4][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17, 18, 19,20} };

	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d-", array8[i][j]);

		}
	}
}

#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4

//Program to print out a matrix
int main()
{
	int mat[ROW][COL], i, j;
	printf("Enter the elements of the matrix(%d*%d) row-wise:\n", ROW, COL);
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++) //you don't need brackets
		{
			scanf("%d", &mat[i][j]);
		}
	}
	printf("The matrix that you have entered is: \n");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
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

 In 2-D arrays it is optional to specify the first dimension but the second dimension should always be present. eg int array[][4] = {};
*/

/*

The %5d format specifier in the printf function is used to format the output so that each integer value in the matrix is printed in a field that is at least 5 characters wide. Here's why this formatting is used:

Alignment: It ensures that the numbers are right-aligned within their respective fields. This makes the output look neat and organized, with the numbers lined up in columns.

Fixed Width: It enforces a fixed width for each number, even if the numbers have varying lengths. This can be particularly useful when dealing with tabular data or matrices because it ensures that each column has consistent spacing.

Padding: If a number has fewer digits than the width specified by %5d, it will be padded with leading spaces to reach the specified width. This padding helps in maintaining a uniform appearance in the output.

So, %5d is used for formatting purposes to make the matrix display more readable and structured. It's a common practice when working with tabular data or matrices to ensure that elements are presented in an organized and visually appealing manner.

*/
#define ROW 3
#define COL 4
void three_matrices()
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
		printf("\n"); //if you place this in the wrong spot, that is inside the inner loop, you will have matrix 3 printed out wrongly.
	}
}
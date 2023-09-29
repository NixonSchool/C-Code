/*

Certainly, let's break down the concept of an array of pointers and the code example:

Array of Pointers:

An array of pointers is an array where each element is a pointer. These pointers can hold the addresses of variables of the appropriate type. The syntax for declaring an array of pointers is similar to regular arrays, but with an asterisk (*) before the array name.

For example, to declare an array of size 10 that contains integer pointers, you can write:

*/

int *arrp[10];

/*

In this declaration, arrp is an array of 10 integer pointers.

Code Example - Array of Pointers:

Now, let's look at the provided code example:

*/

#include <stdio.h>

int main() {
    int *pa[3]; // Declaring an array of 3 integer pointers
    int i, a = 5, b = 10, c = 15;

    // Assigning addresses of variables to the array elements
    pa[0] = &a;
    pa[1] = &b;
    pa[2] = &c;

    // Printing the addresses and values using a loop
    for (i = 0; i < 3; i++) {
        printf("pa[%d] = %u \t", i, pa[i]); // Printing the addresses
        printf("*pa[%d] = %d\n", i, *pa[i]); // Printing the values pointed to by the pointers
    }

    return 0;
}

/*

In this code:

An array of 3 integer pointers pa is declared.

Three integer variables a, b, and c are declared and initialized with values 5, 10, and 15, respectively.

The addresses of these variables are assigned to the elements of the pa array.

A for loop is used to iterate through the array of pointers and print both the addresses (pa[i]) and the values pointed to by the pointers (*pa[i]).

When you run this program, it will print the addresses and values of the variables pointed to by the array of pointers. This demonstrates how an array of pointers can be used to store and access addresses of variables.

-------------------------------------------------

Code Example - Array of Pointers:


*/

#include <stdio.h>

int main() {
    int i, arr[4] = {5, 10, 15, 20}; // An array of integers 'arr'
    int *pa[4]; // An array of 4 integer pointers 'pa'

    // Assigning addresses of 'arr' elements to 'pa' array
    for (i = 0; i < 4; i++) {
        pa[i] = &arr[i];
    }

    // Printing the addresses and values using a loop
    for (i = 0; i < 4; i++) {
        printf("pa[%d] = %u \t", i, pa[i]); // Printing the addresses
        printf("*pa[%d] = %d\n", i, *pa[i]); // Printing the values pointed to by the pointers
    }

    return 0;
}


/*

In this code:

An array of 4 integers arr is declared and initialized with values {5, 10, 15, 20}.

An array of 4 integer pointers pa is declared.

Using a for loop, the addresses of the elements of the arr array are assigned to the elements of the pa array. Each element of pa now contains the address of an element of arr.

Another for loop is used to iterate through the pa array, printing both the addresses (pa[i]) and the values pointed to by the pointers (*pa[i]).

When you run this program, it will print the addresses and values of the arr elements using an array of pointers pa.

This illustrates how an array of pointers can be used to hold addresses of elements from another array or variables.


-----------------------------------

Let's break down and explain the code example you provided, which involves an array of pointers to access elements of a 2-D array:

Code Example - Array of Pointers with 2-D Array:


*/


#include <stdio.h>

int main() {
    int i, j, arr[3][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33}
    };

    int *pa[3]; // An array of 3 integer pointers

    // Assigning addresses of the 0th element of each row to 'pa' array
    for (i = 0; i < 3; i++) {
        pa[i] = arr[i];
    }

    // Accessing and printing elements of 'arr' using 'pa'
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", pa[i][j]); // Accessing and printing using 'pa'
        }
        printf("\n");
    }

    return 0;

}


/*

Explanation:

A 2-D array arr with 3 rows and 4 columns is declared and initialized.

An array of 3 integer pointers pa is declared.

Using a for loop, the addresses of the 0th element of each row of the arr 2-D array are assigned to the elements of the pa array.

This makes each pa[i] element point to the beginning of the corresponding row in arr.

Another set of nested for loops is used to iterate through the pa array and access elements of the arr 2-D array.

By using pa[i][j], it effectively accesses the jth element of the ith 1-D array in arr.

When you run this program, it will print the elements of the arr 2-D array using an array of pointers pa, demonstrating how you can access elements of a 2-D array using an array of pointers.

*/

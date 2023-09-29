#include <stdio.h>
#include <stdlib.h>

/*

Let's dive into pointers and three-dimensional arrays in C programming. I'll explain it in a way that's accessible both to beginners and more experienced programmers.

Understanding Three-Dimensional Arrays
A three-dimensional (3D) array in C can be thought of as an array of 2D arrays. In your example:

You can initialize a three-dimensional array in a similar way to a two-dimensional array. Here's an example,

int test[2][3][4] = {
    {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
    {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}

    };

Let's apply the method we used to determine array[i][j] in 2D arrays to 3D arrays which is: array[i][j][k].

We first have two main brackets {} enclosing everything, ignore those ones, then we have the other 2 main brackets enclosing 3 1D arrays each, which have 4 items each. That's how you read the 3D array above.

*/
int arr[2][3][2] = {
    {{5,10}, {6,11},{7,12}},
    {{20,30},{21,31},{22,32}}

    };


/*

You're absolutely correct! You've correctly identified how to read and understand a 3D array in C programming. Let's break it down step by step:

In your example, you have an array called test which is a 3D array. Here's how you can read it:

First Bracket Pair {}: These are the outermost brackets and can be ignored for now. They enclose the entire 3D array.

Second Bracket Pair {}: Inside the first set of brackets, you have another pair of brackets. Each of these represents a 2D array.

Innermost Brackets {}: Within each of the 2D arrays, you have the innermost brackets. These enclose individual 1D arrays.

So, to access an element in your test array, you would use three indices: test[i][j][k], where i selects the 2D array, j selects the 1D array within that 2D array, and k selects the element within that 1D array.

For example, if you want to access the element 23 in the second 2D array (index 1), in the first 1D array (index 0) within that 2D array, you would use:

*/


arr; //Points to the 0th 2D array

arr+i; //Points to the ith 2D array

*(arr+i); //Gives base address of ilh 2-D array, so points to Oth element of ith 2D array, each element of 2D array is a 1D array, so it points to Oth 1D array of ith 2D array.

*(arr+i)+j //Points to jth 1D array of ith 2D array.

*(*(arr+i)+j) //Gives base address of jth 1D array of ith 2D array, so. it points to Oth element of jth 1D array of ith 2D array.

*(*(arr+i)+j)+k //Points to kth element of jth 1D array of ith 2D array.

*(*(*(arr+i)+j)+k) //Gives the value of kth element of jth 1D array of ith 2D array.

/*
So we can see that the pointer expression *(*(*(arr+i)+j)+k) is equivalent to the subscript expression arr[iJ[j][k). Earlier we have seen that the expression *(arr+i) is equivalent to arr[i] and the expression *(*(arr+i)+j) is equivalent to arr[iJ[j]. So we can say that arr[i] represents the base address of ith 2D array and arr[i][j] represents the represents the base address of the jth 1D array of ith 2D array.

"In summary, the pointer expression *(*(*(arr+i)+j)+k) is equivalent to the subscript expression arr[i][j][k]. This equivalence is a fundamental concept, highlighting how pointers can be used to access elements within multi-dimensional arrays, making your code more flexible and efficient."

*/

#include <stdio.h>

int main() {
    int arr[2][3][2] = {
        {{5, 10}, {6, 11}, {7, 12}},
        {{20, 30}, {21, 31}, {22, 32}}
    };

    int i, j, k;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 2; k++) {
                printf("%d\t", *(*(*(arr + i) + j) + k));
            }
            printf("\n");
        }
        printf("..\n");
    }

    return 0;
}



/*

----------------------------------

printf("\n"); why is that usually written outsie the loop??

-----------------------------------

The printf("\n"); statement is commonly written outside the innermost loop for a specific reason related to formatting and readability. Let's explore why it's often placed outside the loop and how it affects the output:

In the code you provided, the innermost loop is responsible for printing the elements of each 1D array within the 3D array. Each iteration of the innermost loop prints one element followed by a tab character (\t). The tab character is used to separate the elements, providing a neat and aligned output.

However, after each 1D array is fully printed (i.e., after the innermost loop completes), it's typical to insert a newline character (\n) to move to the next line. This newline character creates a visual separation between different sets of data, making the output more organized and easier to read.

If you were to place printf("\n"); inside the innermost loop, you would get a newline character after every element, which would result in a less structured and less readable output. By placing it outside the innermost loop, you achieve the desired formatting: each 1D array is printed on a separate line, and there's a clear distinction between sets of data.

In summary, the placement of printf("\n"); outside the innermost loop is a formatting choice that helps create a well-structured and readable output for arrays or data sets. It's a common practice in programming to improve the visual representation of data.

-----------------------------------

so i can try it inside the loop see how wrong out put it gives, then i will change back???

Absolutely, trying it inside the loop to see the difference in output is a great way to understand the impact of its placement. You'll likely notice that with printf("\n"); inside the innermost loop, you'll get a newline after every element, which can make the output less structured and harder to read.

Experimenting with code and observing the results is an excellent way to gain a deeper understanding of how different elements in a program affect its behavior and output. Feel free to try it both ways and compare the outputs. If you have any questions or want further clarification on the results, don't hesitate to ask. Learning through experimentation is a valuable part of programming.

-----------------------------------

*/















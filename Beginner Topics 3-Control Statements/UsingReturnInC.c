#include <stdio.h>
#include <stdlib.h>


/*

In C programming, the return statement is used to terminate a function and return a value to the caller. Here are the common places where you can use the return statement in C:

At the End of a Function: The most common usage of return is at the end of a function to specify the return value. For example:

*/
int addition(int a , int b)
{
    return a + b;
}

/*

In this case, the function add returns the result of a + b.

Early Return in a Function: You can use return at any point within a function to exit early. For example:


*/

int division(int a, int b)
{
    if(b == 0)
    {
        return 0; //return an error value upon division by zero
    }
    return a/b;
}

/*

Here, if b is zero, the function returns 0 immediately, indicating a division by zero error.

Returning From main(): In the main() function of a C program, you can use return to specify an exit status. Conventionally, return 0 indicates a successful execution, and any other non-zero value indicates an error.


*/

/*

Returning From a switch Statement: You can use return to exit from a switch statement early and return a value.


*/
int getValue(int choice)
{
    switch(choice)
    {
    case 1:
        return 10;
    case 2:
        return 20;
    default:
        return -1; //return -1 for invalid choice
    }
}

/*

In this example, the function returns values based on the choice parameter.

Returning a Function Pointer: In more advanced cases, you can use return to return a function pointer. This is less common but allows for dynamic behavior based on the returned function pointer.


*/

int (*operation)(int, int);
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    if(a == 0)
    {
        printf("Enter a valid number, zero not allowed.");
        return 2; //to show invalid digit was entered.
    }
    return a - b;

}

/*

These are some common uses of the return statement in C programming. It's important to note that the return type of the function should match the type of value you're returning, and in the case of main(), returning 0 typically signifies a successful program execution.


*/

/*

In the showMessage() function, there is no value being returned because it has a return type of void. The return; statement is used to exit the function early. It's not required in this case because the function would automatically exit when it reaches the end, but you can use it for clarity or in more complex control flow situations.


*/

void showMessage()
{
    printf("Hey, jackie!");
    return; //Exiting the function early without returning a value
}
int main()
{
    printf("Hello world!\n");
    showMessage();
    return 0; //Indicates successful execution
}

/*


In C programming, the return statement is used to return values from functions or to exit a function. Here's a breakdown of the return statements you provided:

return 1;
This statement returns the integer value 1 from the current function. It's a common practice to return 1 to indicate success or that a function completed its task without errors.

return ~;
This statement appears to be using the ~ operator, which is a bitwise NOT operator. However, it's not clear what value you want to return here. You should replace ~ with an actual value or expression that evaluates to a valid return type.

return ( x+y'|'z );
This statement seems to have a syntax error with the '!' character. If you intend to perform arithmetic operations with x, y, and z, you should use valid operators like +, -, *, or /. Additionally, ensure that the expression inside the parentheses evaluates to the correct return type for the function.

return ( 3 * sum(a, b) );
This statement returns the result of multiplying 3 by the value returned by the sum(a, b) function. It's a valid return statement if the sum function returns a value compatible with multiplication by 3.

Keep in mind that the specific behavior of these return statements may depend on the context within a function, the function's return type, and the types of variables involved.


*/

if (y1 < y2) {
    return 1;
} else if (y1 > y2) {
    return -1;
}

if (m1 < m2) {
    return 1;
} else if (m1 > m2) {
    return -1;
}

if (d1 < d2) {
    return 1;
} else if (d1 > d2) {
    return -1;
}

return 0;

/*

This code compares two dates represented by y1, m1, and d1 with another date represented by y2, m2, and d2. It returns 1 if the first date is greater, -1 if the second date is greater, and 0 if the two dates are equal.

Please ensure that the variables y1, m1, d1, y2, m2, and d2 are properly defined and contain valid date components for this code to work correctly.


*/

#include <stdio.h>

long int factorial(int n); // Function prototype

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("No factorial of a negative number.\n");
    else
        printf("Factorial of %d is %ld\n", num, factorial(num));
}

long int factorial(int n) {
    int i;
    long int fact = 1;

    if (n == 0)
        return 1;

    for (i = n; i > 1; i--) {
        fact *= i;
    }

    return fact;
}

/*

Here's what this code does:

It includes the necessary header file <stdio.h>.

It declares a function prototype for factorial, which tells the compiler that there will be a function named factorial that takes an integer n as an argument and returns a long int.

In the main function, it prompts the user to enter a number (num) and reads the input.

It checks if num is less than 0, in which case it prints a message that there is no factorial for negative numbers.

If num is not negative, it calculates the factorial of num by calling the factorial function and prints the result.

The factorial function takes an integer n as input, initializes a variable fact to 1, and calculates the factorial using a for loop. If n is 0, it returns 1 (since 0! is defined as 1). Otherwise, it calculates the factorial and returns the result.

This code demonstrates the concept of using functions to calculate the factorial of a number and how to handle function arguments and return values.


*/

/*

In mathematics, the factorial of a non-negative integer n, denoted as n!, is the product of all positive integers from 1 to n.


*/




























































#include <stdio.h>

// Function declarations
void first_function();
int second_function(int num1, int num2);

int main() {
    printf("Hello world!\n");

    first_function();

    int result = second_function(10, 2);

    if (result == -1) {
        printf("Error: Division by zero!\n");
    } else {
        printf("Result of division: %d\n", result);
    }

    return 0;
}

void first_function() {
    printf("Hey, I'm the first function!\n");
}

int second_function(int num1, int num2) {
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num2 == 0) {
        return -1;
    }

    return num1 / num2;
}

/*

I understand the confusion. The reason you're entering numbers in both main and as arguments to second_function is because the function second_function is designed to take input interactively from the user.

Here's what's happening:

In main, you initially call second_function(10, 2);, where 10 and 2 are just placeholder values. These values don't actually get used because inside second_function, you're asking the user to enter new values using scanf.

When second_function is called, it prompts the user to enter two numbers (num1 and num2) through scanf. These are the values that will be used for the division operation inside second_function.

So, the purpose of second_function is to allow the user to input values for num1 and num2. You can call it with placeholder values as you did initially, but the function will override those values with the user's input.

If you don't want the user to input values interactively and prefer to use the initial values (10 and 2 in your case), you can modify second_function like this:


*/

int second_function(int num1, int num2) {
    if (num2 == 0) {
        return -1;
    }

    return num1 / num2;
}

/*

This way, it will use the values you pass when calling the function without asking the user for input.


The placement of function declarations in C is important for the proper functioning of your program. Here are some key points regarding function declarations in C:

Function Declarations Should Be Placed Before Usage: In C, if you are calling a function before defining it, you should declare the function prototype (also known as a function declaration) before using it. This tells the compiler about the function's return type and the types of its arguments.

Typically Declare Functions Before main(): It's a common practice to declare all your functions before the main() function. This way, the function declarations are accessible to all functions in your program.

Declaration vs. Definition: Declaration is a statement that tells the compiler about the function's name, return type, and the types of its parameters. Definition, on the other hand, is the actual implementation of the function. You need to declare a function if you want to use it before defining it. If the function definition occurs before the function call, a separate declaration is not needed.

Function Return Types: If a function returns int or char, it is not necessary to declare it because C assumes that any function without an explicit return type returns an int. However, it's still good practice to declare all your functions, even those returning int or char, to catch potential mismatches in argument types.

Functions with No Arguments: When declaring a function that takes no arguments, you can use either empty parentheses or void inside the parentheses. Using void is recommended to make it clear that the function doesn't take any arguments.


*/


/*

In C and C++ programming, functions like main, main1, and main2 can all return the same value, which is typically 0, without any issues. However, whether they should return the same value or different values depends on the purpose and design of your program.

Here's an explanation of when and why you might choose to have functions return the same or different values:

Returning 0 for All Functions:

If all three functions, main, main1, and main2, serve similar roles or complete similar tasks, it's common to have them return 0.
Returning 0 typically indicates that the program has run successfully without any errors. This is a common convention in C and C++.
This approach is suitable when you don't need to distinguish between different outcomes or error conditions, and you want a simple way to indicate success.
Example:

*/


int main() {
    // Your code here
    return 0;
}

int main1() {
    // Your code here
    return 0;
}

int main2() {
    // Your code here
    return 0;
}


/*

Returning Different Values for Different Outcomes:

If these functions perform distinct tasks or have different exit conditions, you may want to return different values to indicate different outcomes.

For example, you might return non-zero values to indicate specific error conditions or to convey different information about the program's execution.

This approach allows you to handle different cases more precisely and can help you diagnose issues when things don't go as expected.
Example:

*/


int main() {
    // Your code here
    return 0; // Successful execution
}

int main1() {
    // Your code here
    return 1; // Indicates a specific error or outcome
}

int main2() {
    // Your code here
    return 2; // Indicates a different outcome
}


/*

In summary, whether you should have functions return the same value or different values depends on your program's design and requirements.

Using 0 as a return value for success is a common convention, but you have the flexibility to use different values to convey specific information about the function's execution.

*/

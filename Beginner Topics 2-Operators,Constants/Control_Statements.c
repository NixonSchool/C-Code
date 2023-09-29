#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

/*

Control statements in the C programming language are used to control the flow of a program's execution. They allow you to make decisions, create loops, and perform conditional branching. Control statements are essential for writing programs that can perform different actions based on specific conditions. Here's an overview of the main control statements in C:

if Statement:

The if statement is used to perform a conditional test and execute a block of code if the condition is true.


*/


if (condition) {
    // Code to be executed if the condition is true
}


/*

if-else Statement:

The if-else statement allows you to execute one block of code if a condition is true and another block if the condition is false.


*/

if (condition) {
    // Code to be executed if the condition is true
} else {
    // Code to be executed if the condition is false
}


/*

if-else if-else Statement:

You can use multiple else if blocks to test multiple conditions in sequence.

*/

if (condition1) {
    // Code to be executed if condition1 is true
} else if (condition2) {
    // Code to be executed if condition2 is true
} else {
    // Code to be executed if none of the conditions are true
    //Else doesn't have condition, that's why we don't use ()
}



/*

switch Statement:

The switch statement is used to select one of many code blocks to be executed based on the value of an expression.


*/

switch (expression) {
    case value1:
        // Code to be executed if expression equals value1
        break;
    case value2:
        // Code to be executed if expression equals value2
        break;
    default:
        // Code to be executed if expression doesn't match any case
}


/*

while Loop:

The while loop executes a block of code repeatedly as long as a specified condition is true.


*/

while (condition) {
    // Code to be executed while the condition is true
}


/*
do-while Loop:

The do-while loop is similar to the while loop, but it ensures that the code block is executed at least once before checking the condition.]


*/

do {
    // Code to be executed at least once
} while (condition);


/*

for Loop:

The for loop provides a compact way to iterate over a range of values or repeat a block of code a specified number of times.
c


*/


for (initialization; condition; increment/decrement) {
    // Code to be executed as long as the condition is true
}


/*

break Statement:

The break statement is used to exit the current loop or switch statement prematurely.

*/

while (1) {
    // Some code
    if (condition) {
        break; // Exit the loop
    }
}

/*

continue Statement:

The continue statement is used to skip the current iteration of a loop and continue with the next iteration.

These control statements provide the building blocks for creating complex and flexible program logic in the C programming language. You can combine them to implement a wide range of algorithms and decision-making processes in your C programs.


*/

for (int i = 0; i < 5; i++) {
    if (i == 2) {
        continue; // Skip iteration when i equals 2
    }
    // Code here will be executed for all values of i except 2
}


/*

Continuing from the previous explanation, let's delve a bit deeper into the continue statement in C.

continue Statement:

The continue statement is used within loops (such as for, while, or do-while) to skip the current iteration and proceed to the next iteration of the loop. When encountered, it causes the loop to immediately jump to the next iteration, bypassing any remaining code within the current iteration. This can be useful when you want to skip specific iterations based on certain conditions.

Here's a simple example using a for loop to print even numbers between 1 and 10 while skipping odd numbers:


*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue; // Skip odd numbers
        }
        printf("%d\n", i); // Print even numbers only
    }
    return 0;
}


/*

In this example, when i is an odd number, the continue statement is encountered, and the loop proceeds to the next iteration without executing the printf statement. As a result, only even numbers are printed.

The continue statement is particularly handy when you need to apply specific conditions within a loop and avoid executing certain code portions for particular cases, making your code more efficient and concise.

Remember that the continue statement is only applicable within loops, and it doesn't work outside of loop constructs.



*/


/*

Nested Loops:

In complex programs, you may encounter nested loops, where one loop is placed inside another. Be careful with the control flow and ensure you understand the order of execution of nested loops.


*/
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
        // Code here
    }
}


/*
Loop Labels (Goto Statement):

C allows you to use labels with the goto statement to transfer control to a specific location in your code. While this can be powerful, it can also lead to hard-to-read and error-prone code if not used judiciously. It's generally best to avoid using goto.

*/

for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
        if (some_condition) {
            goto exit; // Jump to the 'exit' label
        }
    }
}
exit:
// Code to be executed after the 'goto' statement


/*

Switch Fallthrough:

In a switch statement, if you don't use break after a case, control will fall through to the next case. This behavior can be used for executing multiple case labels together, but it can also lead to unintended results if not managed properly.

*/
switch (value) {
    case 1:
        printf("One ");
    case 2:
        printf("Two ");
        break;
    default:
        printf("Default ");
}


/*
Dangling else Problem:

When using nested if-else statements without proper indentation, you might run into the "dangling else" problem, where it's not clear which if corresponds to which else.
Proper indentation helps resolve this issue.

*/

if (condition1)
    if (condition2)
        // Code A
else
    // Code B

/*

Ternary Operator (Conditional Operator):

The ternary operator (? :) is a concise way to write conditional expressions.
While it's not inherently tricky, complex ternary expressions can become hard to read. Use it judiciously for clarity.


*/

int result = (condition) ? true_value : false_value;


/*
Multiple Conditionals in a Single Line:

While it's possible to write multiple conditionals in a single line, it can make your code less readable.
Use this sparingly and consider breaking it into multiple lines for clarity.

*/
int x = (a > b) ? ((c > d) ? c : d) : ((e > f) ? e : f);


/*
Control Statements in Macros:

Macros can be used to create powerful abstractions, but be cautious when using control statements inside macros. Debugging and understanding macro-generated code can be challenging.

*/
#define MAX(a, b) ((a > b) ? a : b)

int result = MAX(x, y);


/*

Short-Circuit Evaluation:

Logical operators (&& and ||) use short-circuit evaluation.
This means that they don't evaluate the second operand if the result can be determined from the first operand. Understand this behavior when writing complex conditions.
*/
if (ptr != NULL && ptr->data > 0) {
    // Code
}


/*

These advanced topics in control statements are important to be aware of as you work on more complex C programs. Proper understanding and careful usage will help you write reliable and maintainable code.
*/


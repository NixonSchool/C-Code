#include <stdio.h>

/*

The continue statement is used in C to skip the current iteration of a loop (either for, while, or do-while) and proceed with the next iteration. It is typically used within loop constructs to control the flow of the loop based on certain conditions. The continue statement is useful when you want to skip some part of the loop's logic for a specific iteration but continue with the next iteration.

Here's an example to illustrate the usage of the continue statement:

In this example, the for loop iterates from 1 to 10. When i is an even number (i.e., i % 2 == 0 is true), the continue statement is encountered, and the loop skips the printf statement for that iteration. As a result, only odd numbers are printed.

Output:

1 3 5 7 9

Key points about the continue statement:

It is used to skip the current iteration and move to the next iteration of the loop.
It works with for, while, and do-while loops.
It is often used in conjunction with conditional statements (if) to control which iterations are skipped.
It can help improve code efficiency by avoiding unnecessary calculations or processing for specific cases within a loop.

*/

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            // Skip even numbers
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}

void goto_function() {
    FILE* file = fopen("example.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file.\n");
        goto cleanup;
    }

    // File processing code goes here.

cleanup:
    if (file != NULL) {
        fclose(file);
    }
    return 0;
}


/*

n this example, the program jumps to the label using goto if num is equal to 1. As a result, the second printf statement is executed.

Error Handling with goto:

*/

void goto_function_2() {
    int num = 1;

    if (num == 1) {
        goto label;
    }

    printf("This will not be executed.\n");

label:
    printf("This will be executed because of the goto statement.\n");

    return 0;
}

/*
* 
* In this example, goto is used for error handling. If the file cannot be opened, the program jumps to the cleanup label to close the file before exiting.

While these examples demonstrate the use of goto, it's important to note that alternative approaches using structured control flow (e.g., if-else, while loops) are often preferred for better code readability and maintainability.

The goto statement in C allows for unconditional jumps to labeled statements within the same function. While goto can be a powerful tool for controlling program flow, it is often considered bad practice and can lead to code that is difficult to understand and maintain. The use of goto can make the code less structured and more error-prone.

There are several reasons why the use of goto is discouraged in modern programming:

Readability and Maintainability: Code that uses goto statements can be challenging to read and understand, making it harder to maintain and debug. It can lead to "spaghetti code," where the flow of execution is difficult to follow.

Structured Programming: Structured programming principles advocate using structured control flow constructs like loops and conditional statements (e.g., for, while, if-else) to make code more organized and comprehensible.

Error-Prone: Misusing goto can easily introduce subtle bugs and logic errors into your code. It can lead to issues such as infinite loops or unexpected jumps.

Portability: Code that relies heavily on goto statements may not be portable across different compilers and platforms, as the behavior of goto can vary.

Alternative Constructs: In most cases, you can achieve the same functionality as goto using more structured constructs like loops and conditional statements, which are generally safer and more maintainable.

While there may be some rare situations where the use of goto is justified, it's advisable to avoid it in favor of structured programming constructs. Modern programming languages provide robust alternatives that make code more understandable and maintainable without the need for goto.



*/

/*

The label can be placed anywhere. 
If the label is after the goto then the control 
is transferred forward and it is known as forward
jump or forward goto, and if the label is before 
the got6 then the control is transferred backwards 
and it is known as backward. jump or backward goto. 
In forward goto, the statements between goto and label
will not be executed and in backward goto statements 
between goto and label will be executed repeatedly. 
More than one goto can be associated with the same
label but we cannot have same label at more than one place.
The control can be transferred only within a function using
goto statement.(Concept of functions will be introduced 
in further chapters) There should always be a statement after any label. 
If label is at the end of program, and no statements are to be 
written after it, we can write the null statement (single semicolon)
after the label because a program can't end with a label. 
The use of 'goto' should be avoided, as it is difficult to
understand where the control is being transferred. 
Sometimes it leads to "spaghetti" code, which is not understandable
and is very difficult to debug and maintain. 
We can always perform all our jobs without using' 
goto, and the use of goto is not favoured in structured programming. 
Although the use of goto is not preferred but there is a situation
where goto can actually make the code simpler 'and more readable.
This situation arises when we have to exit from deeply nested loops.
To exit from a single loop we can use the break statement, 
but in nested loops break will take the control only out of the innermost loop.

*/

void goto_function_3()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        goto even;

    }
    else
    {
        goto odd;
    }

    even: 
        printf("Number is even.");
    
    odd:
        printf("Number is odd.");
        goto end;

    end:
        printf("\n");
}

//Check date is valid


void date_check() {
    int d, m, y;
    int flag = 1, isleap = 0;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);

    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
        isleap = 1; // Check if it's a leap year
    }

    if (y <= 1850 || y >= 2050) {
        flag = 0; // Year is out of the valid range
    }
    else if (m < 1 || m > 12) {
        flag = 0; // Month is out of the valid range
    }
    else if (d < 1) {
        flag = 0; // Day cannot be less than 1
    }
    else if (m == 2) {
        if (d > 28) {
            flag = 0; // February has at most 28 days
        }
        if (d == 29 && isleap) {
            flag = 1; // Leap year can have 29 days in February
        }
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d > 30) {
            flag = 0; // April, June, September, November have at most 30 days
        }
    }
    else {
        if (d > 31) {
            flag = 0; // All other months have at most 31 days
        }
    }

    if (flag == 0) {
        printf("Not a valid date\n");
    }
    else {
        printf("Valid Date\n");
    }

    return 0;
}

/*

It reads the day, month, and year from the user.

It checks if the year is a leap year based on the leap year rules.

It then checks if the year is within the valid range (1850 to 2050) and if the month is within the range (1 to 12).

It verifies that the day is not less than 1.

It checks the specific cases for February, April, June, September, and November to ensure that the day is within the valid range for those months.

If all checks pass, it considers the date valid; otherwise, it considers it not valid.

Finally, it prints whether the date is valid or not based on the flag variable.

*/


/*

In the provided C code, the flag and isleap variables are used as flags to keep track of whether certain conditions are met during the date validation process. Here's an explanation of what each flag is used for:

flag: This variable is used to determine whether the date is valid or not. It starts with an initial value of 1, assuming that the date is valid by default. However, if any of the validation conditions fail, flag is set to 0, indicating that the date is not valid.

isleap: This variable is used to check if the given year is a leap year. It starts with an initial value of 0, indicating that it's not a leap year. If the year meets the criteria for a leap year (as determined by the leap year rules), isleap is set to 1, indicating that the year is a leap year.

Here's how these flags are used in the code:

flag is initially set to 1 assuming the date is valid.
If any of the conditions for year, month, or day fail, flag is set to 0, indicating that the date is not valid.
If the year is a leap year, isleap is set to 1.
Based on the values of flag and isleap, the code determines whether the date is valid or not and prints the appropriate message.
These flags help in managing the validation process and keeping track of whether specific conditions have been met during the validation checks. If any condition fails, the flag is set to indicate that the date is not valid.

*/
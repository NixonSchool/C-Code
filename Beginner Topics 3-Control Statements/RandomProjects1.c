#include <stdio.h>


//program to check if the number the user enters only has 3 digits,else it exits.
int main()
{
	int number;
	int allowed[10] = {001, 002, 003, 004, 005, 006, 007, 008, 009};

	printf("Enter the number: \n");
	scanf_s("%d", &number);
    if (number < 100 && number <= 999 || allowed)
	{
		printf("The number is 3 digits and is %d\n", number);
	}
	else {
		printf("Wrong value, must have three digits. Press enter to exit....");
		getchar();
	}

	return 0;
}

/*

I see what you're trying to do by using an array to 
check for allowed three-digit numbers. 
However, there are some issues with your code. 
You can't use leading zeros in integer literals 
(e.g., 001, 002) because they will be interpreted as octal values. 
Instead, you can store the allowed three-digit numbers as regular 
integers in the array. Also, you need to modify your if condition 
to check whether the entered number is present in the list of allowed numbers.
Here's an updated version of your code:

*/



void check_numbers2() {
    int number;
    int allowed[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number >= 100 && number <= 999) {
        // Check if the entered number is in the list of allowed numbers
        int isAllowed = 0;
        for (int i = 0; i < sizeof(allowed) / sizeof(allowed[0]); i++) {
            if (number == allowed[i]) {
                isAllowed = 1;
                break;
            }
        }

        if (isAllowed) {
            printf("The number is 3 digits and is %d\n", number);
        }
        else {
            printf("The number is 3 digits, but it's not in the list of allowed numbers.\n");
        }
    }
    else {
        printf("Wrong value, must have three digits.\n");
    }

    return 0;
}


//Condition checker

int main() {
    int m, n, p, num;
    int i, k, d1, d2, d3;

    for (num = 100; num <= 999 / 3; num++) {
        for (i = num; i <= 3 * num; i += num) {
            k = i;
            d1 = k % 10;
            k /= 10;
            d2 = k % 10;
            k /= 10;
            d3 = k % 10;

            if (d1 == d2 || d2 == d3 || d3 == d1)
                goto nextnum;
        }

        for (m = num; m > 0; m /= 10) {
            d1 = m % 10;

            for (n = num * 2; n > 0; n /= 10) {
                d2 = n % 10;

                for (p = num * 3; p > 0; p /= 10) {
                    d3 = p % 10;

                    if (d1 == d2 || d2 == d3 || d3 == d1)
                        goto nextnum;
                }
            }
        }

        printf("%d %d %d\t", num, num * 2, num * 3);
    }

nextnum:
    return 0;
}


//corrected version of the above code

#include <stdio.h>

int main() {
    int num, i, k, d1, d2, d3;

    // Loop A generates three-digit numbers starting from 100 to 333
    for (num = 100; num <= 333; num++) {

        // Loop B checks for different digits in i=num, i=2*num, and i=3*num
        for (i = num; i <= 3 * num; i += num) {
            k = i;
            d1 = k % 10;
            k /= 10;
            d2 = k % 10;
            k /= 10;
            d3 = k % 10;

            // Check if any two digits are the same
            if (d1 == d2 || d2 == d3 || d3 == d1)
                goto nextnum; // If two digits are the same, skip this number
        }

        // Loops C, D, and E compare digits of different numbers
        for (int m = num; m > 0; m /= 10) {
            d1 = m % 10;

            for (int n = num * 2; n > 0; n /= 10) {
                d2 = n % 10;

                for (int p = num * 3; p > 0; p /= 10) {
                    d3 = p % 10;

                    // Check if any two digits are the same
                    if (d1 == d2 || d2 == d3 || d3 == d1)
                        goto nextnum; // If two digits are the same, skip this number
                }
            }
        }

        // If no two digits are the same in all checks, print the numbers
        printf("%d %d %d\t", num, num * 2, num * 3);

    nextnum:
        continue; // Continue to the next iteration of Loop A
    }

    return 0;
}

/*

Loop A: This loop generates three-digit numbers, starting from 100 and ending at 333. The upper limit of 333 is chosen because for numbers greater than 333, when you triple the number (3 * num), it will no longer be a three-digit number. So, Loop A ensures that you only consider three-digit numbers.

Loop B: Loop B is nested inside Loop A and runs three times for each value of 'num': once for 'i' equal to 'num', once for 'i' equal to '2 * num', and once for 'i' equal to '3 * num'. Within Loop B, 'k' represents the current number 'i', and 'd1', 'd2', and 'd3' represent its individual digits. The loop checks whether any two digits within a single number are the same. If any two digits are found to be the same, it uses the goto statement to skip the current number and moves to the next iteration of Loop A.

Loops C, D, E: These are nested loops within Loop A as well. Loop C iterates through the digits of 'num', Loop D through '2 * num', and Loop E through '3 * num'. Within these loops, 'd1', 'd2', and 'd3' represent the digits of 'num', '2 * num', and '3 * num' respectively. The purpose of these loops is to check whether any two digits from different numbers ('num', '2 * num', '3 * num') are the same. If any two digits from different numbers are the same, the goto statement is used to skip the current number, and Loop A proceeds to the next iteration.

Printing: If none of the 'goto' statements are triggered, it means that no two digits are the same in all checks. In this case, the code prints the numbers 'num', '2 * num', and '3 * num'.

This code effectively generates and checks three-digit numbers and prints the numbers that meet the specified criteria, avoiding numbers with repeating digits. However, it's important to note that using goto statements for control flow is generally discouraged in modern programming due to its potential to make code less readable and harder to maintain. Consider using other control structures like loops and conditional statements to achieve the same result in a more structured way.


*/

//Let's find the LCM and the HCF of given numbers.

#include <stdio.h>

int main() {
    int x, y, a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    a = x;
    b = y;

    // Calculate LCM
    while (a != b) {
        if (a < b)
            a += x;
        else
            b += y;
    }

    printf("LCM of %d and %d is %d\n", x, y, a);

    a = x;
    b = y;

    // Calculate HCF
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    printf("HCF of %d and %d is %d\n", x, y, a);

    return 0;
}

/*

Certainly, let's break down the code step by step:

Input: The program starts by asking the user to input two numbers. These numbers are stored in the variables x and y.

Initialization: Two variables a and b are initialized with the values of x and y, respectively. These variables are used to perform the calculations for LCM and HCF while preserving the original values of x and y.

LCM Calculation:

A while loop is used to calculate the LCM.
In each iteration of the loop, it checks if a is not equal to b.
If a is smaller than b, it means we add x to a to make it closer to the LCM. This is because the LCM is a multiple of both x and y, so we keep adding x to a until they are equal.
If b is smaller than a, it means we add y to b in a similar way.
The loop continues until a and b are equal, at which point a contains the LCM.
Printing LCM: The program then prints the calculated LCM using the formula: "LCM of x and y is a."

HCF (GCD) Calculation:

Another while loop is used to calculate the HCF (Highest Common Factor) or GCD (Greatest Common Divisor).
Similar to the LCM calculation, it checks if a is not equal to b.
If a is greater than b, it subtracts b from a repeatedly until they are equal. This is based on the Euclidean algorithm for finding the GCD.
If b is greater than a, it subtracts a from b in a similar manner.
The loop continues until a and b are equal, at which point a contains the HCF (GCD).
Printing HCF: Finally, the program prints the calculated HCF using the formula: "HCF of x and y is a."

This code effectively calculates and displays both the LCM and HCF of the two input numbers using loops and mathematical operations.

*/

//Must repeat the coding for the book C in depth from page 70 to 120, to deal with looping and such.

//Triangle pattern using for loops.


#include <stdio.h>

int main() {
    int n = 5; // Number of rows in the triangle

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}



//Number pattern

#include <stdio.h>

int main() {
    int n = 5; // Number of rows in the pattern

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

//Diamond pattern

#include <stdio.h>

int main() {
    int n = 5; // Number of rows in the diamond

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*

This code will print a diamond pattern of stars.You can modify the 
values of n and adjust 
the loops to control the size and shape of the patterns as needed.

*/ 


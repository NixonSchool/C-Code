#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a  = 10;
    a = a++*a--;
    printf("%d\n", a);
    return 0;
}


/*

int a = 10;: You initialize an integer variable a with the value 10.

a = a++ * a--;: This line contains an expression with post-increment (a++) and post-decrement (a--) operators.

a++: This is the post-increment operator. It means that the current value of a (which is 10) will be used in the expression, and then a will be incremented by 1. So, in this expression, it's as if you are using the value 10, and a becomes 11 afterward.

a--: This is the post-decrement operator. Similar to post-increment, it uses the current value of a in the expression (which is now 11 after the post-increment operation), and then a will be decremented by 1. So, in this expression, it's as if you are using the value 11, and a becomes 10 afterward.

a++ * a--: The expression becomes 10 * 11, as explained above.

printf("%d\n", a);: This line prints the value of a after the expression evaluation. Since a was set to 10 * 11 in the previous step, it will have the value 110.

So, when you run this code, it will print 110. The key to understanding this result is recognizing that post-increment and post-decrement operators first use the current value and then perform the increment or decrement operation afterward.


*/

void do_math()
{
    int a = 2, b = 2, x, y;
    x = 4* (++a * 2+3);
    printf("a = %d, b = %d, x = %d, y = %d\n", a, b, x, y);
}

/*

there is a significant difference between post-increment/decrement and pre-increment/decrement operators in programming languages like C, C++, Java, and others.

Post-Increment/Decrement:

Post-increment (x++) and post-decrement (x--) operators increase or decrease the value of a variable x but return the original value of x before the increment or decrement.
They first use the current value of x in an expression and then increment or decrement x by 1.
Example:

int x = 5;
int y = x++; // y = 5, x = 6

=====================================

Pre-Increment/Decrement:

Pre-increment (++x) and pre-decrement (--x) operators also increase or decrease the value of a variable x but return the updated value of x after the increment or decrement.
They first increment or decrement x by 1 and then use the updated value in an expression.
Example:

int x = 5;
int y = ++x; // y = 6, x = 6

The key difference lies in the order of operations. Post-increment/decrement uses the current value and then updates it, while pre-increment/decrement updates the value first and then uses it. Depending on your program's logic, you may choose one over the other. Pre-increment/decrement is generally preferred when you want to modify a variable's value and immediately use the updated value in an expression. Post-increment/decrement is used when you need the original value before modification.


===================================================

Post-Increment (x++):

Post-increment means that the current value of the variable x is used in an expression, and then the value of x is increased by 1.
It is used like this: x++ or variableName++.
Example in C++:
int x = 5;
int y = x++; // y gets the original value of x (5), and then x is incremented to 6.

===================================================

Pre-Increment (++x):

Pre-increment means that the value of x is increased by 1 first, and then the updated value is used in an expression.
It is used like this: ++x or ++variableName.
Example in C++:

int x = 5;
int y = ++x; // x is incremented to 6, and then y gets the updated value of x (6).


===================================================

Post-Decrement (x--):

Post-decrement means that the current value of the variable x is used in an expression, and then the value of x is decreased by 1.
It is used like this: x-- or variableName--.
Example in C++:

int x = 5;
int y = x--; // y gets the original value of x (5), and then x is decremented to 4.


===================================================

Pre-Decrement (--x):

Pre-decrement means that the value of x is decreased by 1 first, and then the updated value is used in an expression.
It is used like this: --x or --variableName.
Example in C++:

int x = 5;
int y = --x; // x is decremented to 4, and then y gets the updated value of x (4).


===================================================

The main difference between post-increment/decrement and pre-increment/decrement lies in when the actual increment or decrement operation occurs relative to when the value is used in an expression:

Post-increment/decrement performs the increment or decrement after the current value is used in the expression.

Pre-increment/decrement performs the increment or decrement before the updated value is used in the expression.

So, which one to use depends on your specific use case. If you need the original value before modification, use post-increment/decrement. If you need the updated value immediately, use pre-increment/decrement.


===================================================


*/


void do_math2() {
    int a = 3, b = 4, c = 3, d = 4, x, y;

    // Corrected logical AND (&&) and logical OR (||) operators are used.
    x = (a == 5) && (b == 7);
    y = (c == 5) || (d == 8);

    printf("a=%d, b=%d, c=%d, d=%d, x=%d, y=%d\n", a, b, c, d, x, y);

    // Reset variables a, b, c, d
    a = 3, b = 4, c = 3, d = 4;

    x = (a == 6) && (b == 9);
    y = (c == 6) || (d == 10);

    printf("a=%d, b=%d, c=%d, d=%d, x=%d, y=%d\n", a, b, c, d, x, y);
}

/*

Variable Initialization: Inside the do_math2() function, several integer variables (a, b, c, d, x, and y) are declared and initialized with specific values.

Logical Expressions and Assignments:

x = (a == 5) && (b == 7);: Here, x is assigned the result of the logical AND (&&) operation between two expressions. It checks if a is equal to 5 and if b is equal to 7. If both conditions are true, x will be set to 1 (true); otherwise, it will be set to 0 (false).

y = (c == 5) || (d == 8);: Similarly, y is assigned the result of the logical OR (||) operation between two expressions. It checks if c is equal to 5 or if d is equal to 8. If either condition is true, y will be set to 1 (true); otherwise, it will be set to 0 (false).

Printing the Results: After evaluating the logical expressions and assigning values to x and y, the printf function is used to display the values of a, b, c, d, x, and y. This helps you see the outcome of the logical operations.

Variable Reset: The values of a, b, c, and d are reset to their initial values (3 and 4) to demonstrate the next set of logical expressions.

Second Set of Logical Expressions and Assignments: The second set of logical expressions and assignments is similar to the first set but with different values and conditions. The results are stored in x and y again.

Printing the Results (Again): The values of a, b, c, d, x, and y are printed again to show the results of the second set of logical operations.

When you run the do_math2() function, it will evaluate these logical expressions and print the results for each set, showing how the values of x and y change based on the conditions specified in the expressions. This code demonstrates the use of logical AND and logical OR operators along with variable assignments and comparisons.

*/



// Function 1
void do_math1() {
    int a = -3;
    a *= -a - a + !a;
    printf("%d\n", a);
}


/*

int a = -3;: This line declares an integer variable a and initializes it with the value -3.

a *= -a - a + !a;: In this line, you are performing several operations on the variable a:

-a negates the value of a, making it positive (3).
-a again negates the value of a, making it negative again (-3).
!a evaluates to 0 because a is not zero (it's -3), and the logical NOT operator (!) negates the value.

The expressions are then combined as follows:
a *= (-3) - (-3) + 0;
a *= (-3) + 3;
a *= 0; // Any value multiplied by 0 is 0.

So, a is assigned the value 0.

printf("%d\n", a);: Finally, you print the value of a using printf. In this case, a has been calculated to be 0, so it will print 0 followed by a newline.

So, when you call the do_math1() function, it initializes a with -3, performs the specified mathematical operations, and prints the result, which is 0.


*/

// Function 2
void do_math2() {
    int a = 2, b = 1, c, d;
    c = a < b;
    d = (a > b) && (c < b);
    printf("c=%d, d=%d\n", c, d);
}

// Function 3
void do_math3() {
    int a = 9, b = 15, c = 16, d = 12, e, f;
    e = !(a < b && b < c);
    f = (a > b) ? a - b : b - a;
    printf("e=%d, f=%d\n", e, f);
}

/*

int a = 9, b = 15, c = 16, d = 12, e, f;: This line declares several integer variables (a, b, c, d, e, and f) and initializes them with specific values (a = 9, b = 15, c = 16, d = 12). The variables e and f are declared but not yet initialized.

e = !(a < b && b < c);: In this line, you calculate the value of e based on a logical expression:

a < b && b < c checks if both a is less than b and b is less than c. In this case, the expression evaluates to true (1) because 9 < 15 and 15 < 16 are both true.

! is the logical NOT operator, which negates the result of the expression. Since the expression is true, ! turns it into false (0).

Therefore, e is assigned the value 0.

f = (a > b) ? a - b : b - a;: This line calculates the value of f based on a conditional (ternary) expression:

(a > b) checks if a is greater than b, which is not the case (9 is not greater than 15), so the condition is false (0).

The ternary operator ? : is used here. If the condition is true, it evaluates the expression before :; otherwise, it evaluates the expression after :.

In this case, the condition is false, so it evaluates b - a.

b - a calculates the absolute difference between b and a, which is 15 - 9, resulting in 6.

Therefore, f is assigned the value 6.

printf("e=%d, f=%d\n", e, f);: Finally, you print the values of e and f using printf. The output will be "e=0, f=6" because e is 0 and f is 6.

So, when you call the do_math3() function, it initializes variables, evaluates logical and conditional expressions, and prints the values of e and f.


*/

// Function 4
void do_math4() {
    int a = 5;
    a = 6;
    a = a + 5 * a;
    printf("a=%d\n", a);
}

/*

int a = 5;: You declare and initialize an integer variable a with the value 5.

a = 6;: Here, you change the value of a to 6. The previous value of 5 is overwritten.

a = a + 5 * a;: In this line, you update the value of a based on the expression:

5 * a multiplies the current value of a (which is now 6) by 5, resulting in 30.

a + 30 adds 30 to the current value of a (which is 6), resulting in 36.

The updated value 36 is assigned back to a.

printf("a=%d\n", a);: Finally, you print the updated value of a, which is 36. So, the output of this function will be "a=36".

*/


// Function 5
void do_math5() {
    int a = 5, b = 5;
    printf("%d\n", a);
    printf("%d\t", ++a);
    printf("%d\t", b--);
    printf("%d\t", a);
    printf("%d\n", b);
}


/*


int a = 5, b = 5;: You declare and initialize two integer variables, a and b, both with the initial value 5.

printf("%d\n", a);: This line prints the initial value of a, which is 5. So, the first output will be "5" followed by a newline.

printf("%d\t", ++a);: Here, you increment a using the pre-increment operator (++a) before printing it. This increments a to 6, and you print it with a tab separator. The output will be "6\t".

printf("%d\t", b--);: This line uses the post-decrement operator (b--) to decrement b after printing it. The current value of b is 5, so it gets printed with a tab separator, and then b is decremented to 4. The output will be "5\t".

printf("%d\t", a);: Here, you print the current value of a, which is 6. The output will be "6\t".

printf("%d\n", b);: Finally, you print the current value of b, which is 4. The output will be "4" followed by a newline.

So, when you call the do_math5() function, it initializes variables, performs pre-increment and post-decrement operations, and prints the values of a and b at different points in the code. The output will be "5\n6\t5\t6\t4\n".


*/

// Function 6
void do_math6() {
    int x, y, z;
    x = 8++;
    y = ++x++;
    z = (x + y)--;
    printf("x=%d, y=%d, z=%d\n", x, y, z);
}

/*

int x, y, z;: You declare three integer variables x, y, and z without initializing them. Their initial values are undefined.

x = 8++;: In this line, you attempt to increment the value of x using the post-increment operator (8++). However, this is not valid because you cannot use the post-increment operator on a non-lvalue (a value that cannot be on the left side of an assignment). It will result in a compilation error.

y = ++x++;: This line contains another invalid operation. You are trying to apply both pre-increment (++x) and post-increment (x++) to x simultaneously, which is not allowed. This will also result in a compilation error.

z = (x + y)--;: Similar to the previous lines, you are attempting to use both a post-decrement (--) and an addition operation on (x + y), which is not allowed. This will result in a compilation error.

printf("x=%d, y=%d, z=%d\n", x, y, z);: You try to print the values of x, y, and z, but since the previous operations were invalid and would cause compilation errors, these variables will remain uninitialized and hold undefined values.

Given the issues with the code, it won't compile successfully or execute as intended. To fix this code, you should use valid operations and consider the rules of incrementing and decrementing variables.


*/


// Function 7
void do_math7() {
    int a = 4, b = 8, c = 3, d = 9, z;
    z = a++ + ++b * c-- --d;
    printf("a=%d, b=%d, c=%d, d=%d, z=%d\n", a, b, c, d, z);
}

/*


int a = 4, b = 8, c = 3, d = 9, z;: You declare several integer variables (a, b, c, d, and z) and initialize them with specific values (a = 4, b = 8, c = 3, d = 9). The variable z is declared but not yet initialized.

z = a++ + ++b * c-- --d;: In this line, you calculate the value of z based on a complex expression involving increment and decrement operators, as well as multiplication and addition:

a++: This is a post-increment operation, which means that the current value of a (which is 4) is used in the expression, and then a is incremented to 5. So, this part of the expression evaluates to 4.

++b: This is a pre-increment operation, so b is incremented to 9, and this part evaluates to 9.

c--: This is a post-decrement operation, which means that the current value of c (which is 3) is used in the expression, and then c is decremented to 2. So, this part of the expression evaluates to 3.

--d: This is another post-decrement operation, so the current value of d (which is 9) is used in the expression, and then d is decremented to 8. This part evaluates to 9.

Now, the expression becomes 4 + 9 * 3 - 9, which simplifies to 4 + 27 - 9, resulting in 22.

Finally, z is assigned the value 22.

printf("a=%d, b=%d, c=%d, d=%d, z=%d\n", a, b, c, d, z);: You print the values of a, b, c, d, and z. After evaluating the expression, a has been incremented to 5, b is 9, c has been decremented to 2, d is 8, and z is 22.

So, when you call the do_math7() function, it initializes variables, performs the complex expression calculation, and prints the updated values of a, b, c, d, and z. The output will be "a=5, b=9, c=2, d=8, z=22".


*/

// Function 8
void do_math8() {
    int a = 14, b, c;
    a = a % -5;
    b = a / 3;
    c = a / 5 % 3;
    printf("a=%d, b=%d, c=%d\n", a, b, c);
}

/*

int a = 14, b, c;: You declare three integer variables a, b, and c. a is initialized with the value 14, while b and c are declared but not yet initialized.

a = a % -5;: In this line, you calculate the value of a using the modulo operator %. It calculates the remainder of a divided by -5. Since the modulo operator works with the sign of the dividend (a in this case), the result will have the same sign as a. So, a modulo -5 is equivalent to 14 modulo 5, which is 4. Therefore, a is updated to 4.

b = a / 3;: Here, you calculate the value of b by dividing a (which is now 4) by 3. The result of this division is 1, and b is assigned the value 1.

c = a / 5 % 3;: In this line, you calculate the value of c based on two consecutive operations:

a / 5 divides a (which is 4) by 5, resulting in 0. So, c is temporarily assigned the value 0.

0 % 3 calculates the remainder of 0 divided by 3, which is 0. Therefore, c is updated to 0.

printf("a=%d, b=%d, c=%d\n", a, b, c);: Finally, you print the values of a, b, and c. After the calculations, a is 4, b is 1, and c is 0.

So, when you call the do_math8() function, it initializes variables, performs the modulo and division operations, and prints the updated values of a, b, and c. The output will be "a=4, b=1, c=0".


*/

// Function 9
void do_math9() {
    int a = 15, b = 13, c = 16, x, y;
    x = a - 3 % 2 + c * 2 / 4 % 2 + b / 4;
    y = a = b + 5 - b + 9 / 3;
    printf("x=%d, y=%d\n", x, y);
}


/*

int a = 15, b = 13, c = 16, x, y;: You declare several integer variables (a, b, c, x, and y) and initialize a, b, and c with specific values (a = 15, b = 13, c = 16). The variables x and y are declared but not yet initialized.

x = a - 3 % 2 + c * 2 / 4 % 2 + b / 4;: In this line, you calculate the value of x based on a complex expression involving modulo and division operations:

3 % 2 calculates the remainder of 3 divided by 2, which is 1.

a - 1 subtracts 1 from the current value of a (which is 15), resulting in 14.

c * 2 multiplies c (which is 16) by 2, resulting in 32.

4 % 2 calculates the remainder of 4 divided by 2, which is 0.

b / 4 divides b (which is 13) by 4, resulting in 3.

The expression then becomes 14 + 32 / 0 + 3, which is invalid because you cannot divide by zero. This part of the expression is undefined and will result in an error.

y = a = b + 5 - b + 9 / 3;: In this line, you calculate the value of y based on a series of operations:

b + 5 - b calculates b (which is 13) plus 5 minus b again, which simplifies to 5.

9 / 3 divides 9 by 3, resulting in 3.

The entire expression becomes a = 5 + 3, which sets a to 8, and then y is assigned the value of a, which is 8.

printf("x=%d, y=%d\n", x, y);: Finally, you print the values of x and y. However, due to the division by zero error in the calculation of x, the program may not reach this point, and you might get a runtime error.

To fix the issue, you should revise the expression for x to avoid division by zero.

*/

// Function 10
void do_math10() {
    int x, y, z, k = 10;
    k += (x = 5, y = x + 2, z = x + y);
    printf("x=%d, y=%d, z=%d, k=%d\n", x, y, z, k);
}

/*

int x, y, z, k = 10;: You declare several integer variables (x, y, z) and initialize k with the value 10. The variables x, y, and z are declared but not yet initialized.

k += (x = 5, y = x + 2, z = x + y);: In this line, you calculate the value of k by using a series of assignments separated by commas within parentheses:

x = 5 assigns the value 5 to the variable x.

y = x + 2 assigns the result of x + 2 (which is 7) to the variable y.

z = x + y assigns the result of x + y (which is 5 + 7 = 12) to the variable z.

The overall expression (x = 5, y = x + 2, z = x + y) evaluates to 12, which is then added to the current value of k (10). So, k is updated to 22.

printf("x=%d, y=%d, z=%d, k=%d\n", x, y, z, k);: Finally, you print the values of x, y, z, and k. After the calculations, x is 5, y is 7, z is 12, and k is 22.

So, when you call the do_math10() function, it initializes variables, performs a series of assignments and additions, and prints the updated values of x, y, z, and k. The output will be "x=5, y=7, z=12, k=22".


*/



void do_math12() {
    int a = 9;
    char ch = 'A';
    a = a + ch + 24;
    printf("%d,%c\t%d,%c\n", ch, ch, a, a);
}


/*

int a = 9;: You declare an integer variable a and initialize it with the value 9.

char ch = 'A';: You declare a character variable ch and initialize it with the character 'A'.

a = a + ch + 24;: In this line, you perform a series of operations involving a, ch, and the integer 24. Let's break it down:

a + ch adds the value of a (which is 9) to the ASCII value of the character ch (which is 'A', equivalent to the ASCII value 65). So, a + ch evaluates to 9 + 65, which is 74.

74 + 24 calculates the sum of 74 and 24, resulting in 98.

Finally, a is assigned the value 98.

printf("%d,%c\t%d,%c\n", ch, ch, a, a);: This line prints the values of ch and a along with their ASCII equivalents. The format string specifies two placeholders for integers (%d) and two for characters (%c). Here's what it prints:

%d,%c is replaced with the ASCII value of ch (65) and the character 'A'.

%d,%c is replaced with the value of a (98) and the character 'b' (since 98 is the ASCII value for lowercase 'b').

So, the output of this code will be: "65,A 98,b". This output displays the ASCII values and characters corresponding to ch and a.


*/

int a, b, c, d;
a = b = c = d = 4;
a *= b + 1;
c += d *= 3;
printf("a=%d, c=%d\n", a, c);


/*

int a, b, c, d;: You declare four integer variables a, b, c, and d without initializing them. Their initial values are undefined.

a = b = c = d = 4;: In this line, you initialize all four variables with the value 4. This is achieved through a series of assignment expressions, starting from the rightmost assignment (d = 4) and propagating the value to the left.

d = 4 assigns the value 4 to d.
c = d assigns the value of d (which is now 4) to c.
b = c assigns the value of c (which is also 4) to b.
Finally, a = b assigns the value of b (which is 4) to a. Now, all four variables (a, b, c, and d) have the value 4.
a *= b + 1;: In this line, you perform a compound assignment operation on a. It is equivalent to a = a * (b + 1).

b + 1 calculates the value 4 + 1, which is 5.
a * 5 multiplies the current value of a (which is 4) by 5, resulting in 20.
Finally, a is updated to 20.
c += d *= 3;: In this line, you perform another compound assignment operation on c, and you also update the value of d.

d *= 3 multiplies the current value of d (which is 4) by 3, resulting in 12. At this point, d is updated to 12.
c += 12 adds the value 12 to the current value of c (which is 4), resulting in 16. c is updated to 16.
printf("a=%d, c=%d\n", a, c);: Finally, you print the values of a and c. After the operations, a is 20, and c is 16.

So, when you run this code, it initializes the variables, performs the compound assignments, and prints the updated values of a and c. The output will be: "a=20, c=16".



*/

void do_math13() {
    int a, b, c, d;
    a = b = c = d = 4;
    a *= b + 1;
    c += d *= 3;
    printf("a=%d, c=%d\n", a, c);
}


/*

You declare four integer variables a, b, c, and d without initializing them. Their initial values are undefined.

a = b = c = d = 4;: In this line, you initialize all four variables with the value 4. This is achieved through a series of assignment expressions, similar to what was explained in the previous response.

d = 4 assigns the value 4 to d.
c = d assigns the value of d (which is now 4) to c.
b = c assigns the value of c (which is also 4) to b.
Finally, a = b assigns the value of b (which is 4) to a. Now, all four variables (a, b, c, and d) have the value 4.
a *= b + 1;: In this line, you perform a compound assignment operation on a. It is equivalent to a = a * (b + 1).

b + 1 calculates the value 4 + 1, which is 5.
a * 5 multiplies the current value of a (which is 4) by 5, resulting in 20.
Finally, a is updated to 20.
c += d *= 3;: In this line, you perform another compound assignment operation on c, and you also update the value of d.

d *= 3 multiplies the current value of d (which is 4) by 3, resulting in 12. At this point, d is updated to 12.
c += 12 adds the value 12 to the current value of c (which is 4), resulting in 16. c is updated to 16.
printf("a=%d, c=%d\n", a, c);: Finally, you print the values of a and c. After the operations, a is 20, and c is 16.



*/

int a = 5, b = 10, temp;
temp = a, a = b, b = temp;
printf("a=%d, b=%d\n", a, b);


/*

Variable Swapping Code:

You declare two integer variables a and b and initialize them with the values 5 and 10, respectively.

temp = a, a = b, b = temp;: In this line, you perform variable swapping using a temporary variable temp. This is a common technique to swap the values of two variables without losing data.

temp = a assigns the value of a (which is 5) to the variable temp. Now, temp holds the value 5.
a = b assigns the value of b (which is 10) to a. Now, a holds the value 10.
b = temp assigns the value of temp (which is 5) back to b. Now, b holds the value 5.
printf("a=%d, b=%d\n", a, b);: Finally, you print the values of a and b. After the variable swapping, a is 10, and b is 5.

So, the output of the combined code will be:

a=20, c=16
a=10, b=5
This output reflects the updated values of a, c, b, and temp after the operations in both code blocks.


*/

void do_math14() {
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a=%d, b=%d\n", a, b);
}


/*

You declare two integer variables, a and b, and initialize them with the values 5 and 10, respectively.

You declare an integer variable temp without initializing it.

temp = a; assigns the value of a (which is 5) to the variable temp. Now, temp holds the value 5.

a = b; assigns the value of b (which is 10) to a. Now, a holds the value 10.

b = temp; assigns the value of temp (which is 5) back to b. Now, b holds the value 5.

printf("a=%d, b=%d\n", a, b); prints the updated values of a and b. After the swapping, a is 10, and b is 5.





*/

int a = 10, b = 3, max;
a > b ? max = a : max = b;
printf("%d\n", max);


/*

Variable Comparison and Assignment:You declare two integer variables, a and b, and initialize them with the values 10 and 3, respectively.

You declare an integer variable max without initializing it.

a > b ? max = a : max = b; is a ternary conditional expression (a > b ?) that compares a and b. If a is greater than b, it assigns the value of a to max; otherwise, it assigns the value of b to max.

In this case, a is greater than b, so max is assigned the value a, which is 10.
printf("%d\n", max); prints the value of max, which is 10.

So, the output of the combined code will be:

a=10, b=5
10




*/
void do_math15() {
    int a = 10, b = 3, max;
    max = (a > b) ? a : b;
    printf("%d\n", max);
}

/*


You declare two integer variables, a and b, and initialize them with the values 10 and 3, respectively.

You declare an integer variable max without initializing it.

max = (a > b) ? a : b; is an expression that compares a and b. If a is greater than b, it assigns the value of a to max; otherwise, it assigns the value of b to max.

In this case, a is greater than b, so max is assigned the value a, which is 10.
printf("%d\n", max); prints the value of max, which is 10.

*/

int a = 3, b = 4, c = 3, d = 4, x, y;
x = (a = 5) && (b = 7);
y = (c = 5) || (d = 8);
printf("a=%d, b=%d, c=%d, d=%d, x=%d, y=%d\n", a, b, c, d, x, y);

/*

You declare four integer variables, a, b, c, and d, and initialize them with the values 3, 4, 3, and 4, respectively.

You declare two integer variables, x and y, without initializing them. Their initial values are undefined.

(a = 5) && (b = 7);: In this line, you use the && (logical AND) operator to perform two assignments and a logical operation. Let's break it down:

a = 5 assigns the value 5 to a. Now, a is 5.
b = 7 assigns the value 7 to b. Now, b is 7.
(a = 5) && (b = 7) evaluates to 1 because both assignments were successful (non-zero values represent true in C). So, x is assigned the value 1.
(c = 5) || (d = 8);: In this line, you use the || (logical OR) operator to perform two assignments and a logical operation. Let's break it down:

c = 5 assigns the value 5 to c. Now, c is 5.
d = 8 assigns the value 8 to d. Now, d is 8.
(c = 5) || (d = 8) evaluates to 1 because at least one of the assignments was successful (non-zero value represents true in C). So, y is assigned the value 1.
printf("a=%d, b=%d, c=%d, d=%d, x=%d, y=%d\n", a, b, c, d, x, y);: Finally, you print the values of a, b, c, d, x, and y. After the operations, a is 5, b is 7, c is 5, d is 8, x is 1, and y is 1.

Second Block of Code:


*/

x = (a == 6) && (b = 9);
y = (c == 6) || (d = 10);
printf("a=%d, b=%d, c=%d, d=%d, x=%d, y=%d\n", a, b, c, d, x, y);


/*


(a == 6) && (b = 9);: In this line, you use the && operator to perform a comparison and an assignment. Let's break it down:

a == 6 compares the value of a (which is 5) with 6. This comparison is false (0) because a is not equal to 6.
(b = 9) assigns the value 9 to b. Now, b is 9.
(a == 6) && (b = 9) evaluates to 0 because the first part is false. So, x is assigned the value 0.
(c == 6) || (d = 10);: In this line, you use the || operator to perform a comparison and an assignment. Let's break it down:

c == 6 compares the value of c (which is 5) with 6. This comparison is false (0) because c is not equal to 6.
(d = 10) assigns the value 10 to d. Now, d is 10.
(c == 6) || (d = 10) evaluates to 1 because the second part is true (the assignment was successful). So, y is assigned the value 1.
printf("a=%d, b=%d, c=%d, d=%d, x=%d, y=%d\n", a, b, c, d, x, y);: Finally, you print the values of a, b, c, d, x, and y. After the operations, a is 5, b is 9, c is 5, d is 10, x is 0, and y is 1.

So, the output of the combined code will be:


a=5, b=9, c=5, d=10, x=0, y=1

*/

void do_math17() {
    int a = 3, b = 4, c = 3, d = 4, x, y;
    x = (a = 5) && (b = 7);
    y = (c = 5) || (d = 8);
    printf("a=%d, b=%d, c=%d, d=%d, x=%d, y=%d\n", a, b, c, d, x, y);
    x = (a == 6) && (b = 9);
    y = (c == 6) || (d = 10);
    printf("a=%d, b=%d, c=%d, d=%d, x=%d, y=%d\n", a, b, c, d, x, y);
}

/*
You declare four integer variables, a, b, c, and d, and initialize them with the values 3, 4, 3, and 4, respectively.

You declare two integer variables, x and y, without initializing them. Their initial values are undefined.

x = (a = 5) && (b = 7);: In this line, you use the && (logical AND) operator to perform two assignments and a logical operation. Let's break it down:

a = 5 assigns the value 5 to a. Now, a is 5.
b = 7 assigns the value 7 to b. Now, b is 7.
(a = 5) && (b = 7) evaluates to 1 because both assignments were successful (non-zero values represent true in C). So, x is assigned the value 1.
y = (c = 5) || (d = 8);: In this line, you use the || (logical OR) operator to perform two assignments and a logical operation. Let's break it down:

c = 5 assigns the value 5 to c. Now, c is 5.
d = 8 assigns the value 8 to d. Now, d is 8.
(c = 5) || (d = 8) evaluates to 1 because the first assignment was successful (non-zero value represents true in C). So, y is assigned the value 1.
You use printf to print the values of a, b, c, d, x, and y. After the operations, a is 5, b is 7, c is 5, d is 8, x is 1, and y is 1.

x = (a == 6) && (b = 9);: In this line, you use the && operator to perform a comparison and an assignment. Let's break it down:

a == 6 compares the value of a (which is 5) with 6. This comparison is false (0) because a is not equal to 6.
(b = 9) assigns the value 9 to b. Now, b is 9.
(a == 6) && (b = 9) evaluates to 0 because the first part is false. So, x is assigned the value 0.
y = (c == 6) || (d = 10);: In this line, you use the || operator to perform a comparison and an assignment. Let's break it down:

c == 6 compares the value of c (which is 5) with 6. This comparison is false (0) because c is not equal to 6.
(d = 10) assigns the value 10 to d. Now, d is 10.
(c == 6) || (d = 10) evaluates to 1 because the second part is true (the assignment was successful). So, y is assigned the value 1.
You use printf again to print the updated values of a, b, c, d, x, and y.

So, the output of the do_math17() function will be:

a=5, b



===========================================

QUESTIONS ANSWERED:

===========================================
Enter'the temperature in Celsius and convert that into Fahrenheit.
Accept the radius of the circle and calculate the area and perimeter of the circle.
Write a program to accept the number in decimal and print the number in octal and hexadecimal.
,
Accept any five digit number and print the value of remainder after dividing by 3.
Accept any two numbers, if the first number is greater than second then print the sum of these
two numbers, otherwise print their difference. Write this program using ternary operator.
Write a program'to accept the principal, rate, and number of years and find out the simple interest.
Accepts marks in five subject and calculate the total percentage marks.
*/

#include <stdio.h>

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    double fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}

int main() {
    double celsius, fahrenheit;

    // Input the temperature in Celsius
    printf("Enter the temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Call the conversion function
    fahrenheit = celsiusToFahrenheit(celsius);

    // Display the result
    printf("%.2lf degrees Celsius is equal to %.2lf degrees Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}


//===========================================================


#include <stdio.h>
#include <math.h>

int main() {
    double radius, area, perimeter;

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate area and perimeter
    area = M_PI * pow(radius, 2);
    perimeter = 2 * M_PI * radius;

    // Display results
    printf("Area of the circle: %.2lf square units\n", area);
    printf("Perimeter of the circle: %.2lf units\n", perimeter);

    return 0;
}


//===========================================================

#include <stdio.h>

int main() {
    int decimalNumber;

    // Input a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Convert and display in octal and hexadecimal
    printf("Octal representation: %o\n", decimalNumber);
    printf("Hexadecimal representation: %X\n", decimalNumber);

    return 0;
}


//===========================================================

#include <stdio.h>

int main() {
    int number;

    // Input a five-digit number
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    // Calculate and display remainder after dividing by 3
    int remainder = number % 3;
    printf("Remainder after dividing by 3: %d\n", remainder);

    return 0;
}


//===========================================================

#include <stdio.h>

int main() {
    int num1, num2, result;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and display sum or difference using ternary operator
    result = (num1 > num2) ? num1 + num2 : num1 - num2;
    printf("Result: %d\n", result);

    return 0;
}


//===========================================================


#include <stdio.h>

int main() {
    double principal, rate, time, simpleInterest;

    // Input principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Display simple interest
    printf("Simple Interest: %.2lf\n", simpleInterest);

    return 0;
}



//===========================================================

#include <stdio.h>

int main() {
    int marks[5];
    int totalMarks = 0;

    // Input marks in five subjects
    printf("Enter marks in five subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }

    // Calculate and display total percentage marks
    float percentage = (float)totalMarks / 5;
    printf("Total Percentage Marks: %.2f%%\n", percentage);

    return 0;
}


//===========================================================









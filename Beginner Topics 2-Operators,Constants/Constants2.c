#include <stdio.h>
#include <stdlib.h>

/*

#define name value
where name is the name of the symbolic constant and
value is the value of the constant.
The name must be an identifier, and the
value can be any constant expression.

*/


#define NAME "Nixon"
#define PI 3.142
#define MAX 100
#define CH 'a'

int main()
{
    char my_name[20] = NAME;
    int d = MAX;
    double circumference = PI * d;
    char letter = CH;

    printf("My first name is: %s\n", my_name);
    printf("The circumference of the circle is: %lf\n", circumference);
    printf("The letter requested is: %c\n", letter);
    printf("The maximum value that was used to compute circumference was: %d\n", d);

    return 0;
}

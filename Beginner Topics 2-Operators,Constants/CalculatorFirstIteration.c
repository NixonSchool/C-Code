#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main()
{
    //we're using long long so that it can be 16 bytes which can store a very huge number
    long long int a;
    long long int b;
    double power;
    int is_infinite;

    //calculate the long long int size using <limits.h>
    printf("The minimum value for long long int is: %lld\n", LLONG_MIN);
    sleep(2);
    printf("The maximum value for long long int is: %lld\n", LLONG_MAX);
    sleep(2);
    printf("\n");

    printf("-----------------------------------\n");
    printf("\n");
    while(1)
    {
        printf("Enter the number to calculate the power: \n");
        scanf("%lld", &a);

        printf("Enter the power itself(the one superscript): \n");
        scanf("%lld", &b);

        power = pow(a, b);

        //using is infinite to check if the number we find after calculating power is infinitely large
        is_infinite = isinf(power);
        printf("The number is infinite and can't be printed on normal calculator.");

        printf("\n");

        printf("The power is: %lllf\n", power);

    }

    return 0;
}

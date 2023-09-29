#include <stdio.h> //standard input output header file
#include <stdbool.h> //make sure you include boolean header file

/*

    Let's move on to booleans, and in C booleans are not internally supported
    First you import the header file <stdbool.h>
    C uses integers to represent booleans, where 0 is false and non zero is
    true, meaning even  negative numbers can be used to represent true values.

    So, this is going to be a simple login system that applies booleans in C.
    */

//don't forget these are character arrays and need [] to function
const char correct_username[] = "Nixon Ekirapa";
const char correct_password[] = "Rennex@123";

/*

When you are using scanf to read input into character arrays (strings),
you don't need to use the address operator (&). This is because the name
of an array essentially represents the address of its first element.
So, if you use the name of the character array, you are already passing
the address of the first element, which is what scanf expects

  */


int main()
{
    //variables for user input
    char userName[80]; //case sensitive
    char password[30];
    bool isAuthenticated = false;

    //ask user for the userName and password
    printf("Enter your first two names: ");
    scanf("%[^\n]", userName); //don't use & in character arrays
    printf("\n");

    printf("Enter your password: ");
    scanf("%s", password); //no need for &
    printf("\n");

    /*You don't need to use the == operator within strcmp.
    strcmp(string1, string2)

    if(strcmp(userName == correct_username) && (strcmp(password == correct_password)))
       {
           isAuthenticated = true;
           printf("Welcome to Rennex Techlabs software!");
       }
    else{
        printf("Login failed, provide the right credentials!");
    }

    */

    if(strcmp(userName, correct_username) == 0  && (strcmp(password, correct_password) == 0))
       {
           isAuthenticated = true;

       }
    if(isAuthenticated)
    {
        printf("Welcome to Rennex Techlabs software!");
    }

    //else does not use () coz it does not have its own condition to check for.
    //it just provides an alternative codeblock to execute.

    else{
        printf("Login failed, provide the wrong credentials!");
    }

    return 0;
}


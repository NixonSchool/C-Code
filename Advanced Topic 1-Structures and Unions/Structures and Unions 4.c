/*

Certainly, let's clean up the notes and provide a more organized explanation of passing a structure variable as an argument to a function.

Passing Structure Variable As an Argument

When dealing with structures, it can become cumbersome to pass individual members of a structure as function arguments, especially if the structure has many members. Additionally, passing individual members may lose the relationship between those members. To address this, you can pass the whole structure as an argument to a function.

Here's a program to illustrate how a structure variable can be sent to a function as an argument:

*/

#include <stdio.h>

// Define the structure 'student'
struct student {
    char name[20];
    int rollno;
    int marks;
};

// Function to display student information
void display(struct student stu) {
    printf("Name: %s\n", stu.name);
    printf("Roll number: %d\n", stu.rollno);
    printf("Marks: %d\n", stu.marks);
}

int main() {
    // Create structure variables
    struct student stu1 = {"John", 12, 87};
    struct student stu2 = {"Mary", 18, 90};

    // Call the display function with structure variables as arguments
    display(stu1);
    display(stu2);

    return 0;
}

/*

In this program:

We define a structure student with three members: name, rollno, and marks.

We declare a function display that takes a struct student as an argument. Inside the function, we can access and display the members of the structure.

In the main function, we create two structure variables stu1 and stu2 and initialize them with student information.

We call the display function twice, passing stu1 and stu2 as arguments. The function displays the information for each student.

Note that when you pass a structure variable as an argument to a function, a copy of the whole structure is made inside the function.

Any changes made to the copy inside the function do not affect the original structure variable in the calling function.

This is because structures are passed by value in C, and you are working with a local copy of the structure.

These notes provide a clearer explanation of how to pass a structure variable as an argument to a function.

---------------------------------------

Let's clean up and provide a clearer explanation of passing pointers to structures as arguments to functions:

Passing Pointers to Structures as Arguments

When dealing with large structures, it's not efficient to pass the entire structure as a function argument because it involves making a copy of the entire structure, which can be slow and memory-consuming. Instead, it's often better to pass a pointer to the structure, which improves execution speed.

You can access the members of the structure variable inside the calling function using the arrow operator (->). In this case, any changes made to the structure variable inside the called function will be reflected in the original structure variable in the calling function since you are working with the original data.

Here's a program to illustrate how a pointer to a structure variable can be passed as an argument to a function:

*/

#include <stdio.h>

// Define the structure 'student'
struct student {
    char name[20];
    int rollno;
    int marks;
};

// Function to increment 'marks' by 1 using a pointer to the structure
void inc_marks(struct student *stu) {
    (stu->marks)++;
}

// Function to change the name of the student and return the modified structure
struct student change(struct student stu) {
    strcpy(stu.name, "Updated Name");
    return stu;
}

// Function to display student information using a pointer to the structure
void display(struct student *stuptr) {
    printf("Name: %s\n", stuptr->name);
    printf("Roll number: %d\n", stuptr->rollno);
    printf("Marks: %d\n", stuptr->marks);
}

int main() {
    struct student stu1 = {"John", 12, 87};
    struct student stu2 = {"Mary", 18, 90};

    // Pass pointers to structures to functions
    inc_marks(&stu1);
    inc_marks(&stu2);

    // Display student information
    display(&stu1);
    display(&stu2);

    // Change the name of the students using a function
    stu1 = change(stu1);
    stu2 = change(stu2);

    // Display modified information
    display(&stu1);
    display(&stu2);

    return 0;
}

/*

In this program:

We define a structure student with three members: name, rollno, and marks.

We declare functions inc_marks, change, and display that work with pointers to struct student.

We create two structure variables stu1 and stu2 and initialize them with student information.

We pass pointers to the structures to the functions inc_marks and display using the & operator.

We call the inc_marks function to increment the marks member using pointers.

We call the change function to modify the name of the students using a pointer and display the modified information.

This program demonstrates how to use pointers to structures as arguments to functions and how changes made using pointers affect the original structure variables.

-------------------------------------------

In the above example, the inc_marks() function takes a pointer to a structure as an argument and increments the marks member of the structure. The display() function takes a pointer to a structure as an argument and prints the members of the structure to the console.

Benefits of Passing Pointers to Structures

There are two main benefits to passing pointers to structures as arguments to functions:

Efficiency: Passing a pointer to a structure is more efficient than passing the structure itself because it avoids the need to copy the structure to the function's stack frame.

Modularity: Passing a pointer to a structure allows the function to modify the original structure. This can be useful for functions that need to update the state of a structure.
Conclusion

Passing pointers to structures as arguments to functions is a common and efficient practice in C programming. It allows us to avoid the overhead of copying large structures and to modify the original structures from within functions.

---------------------------------------------

Returning a Structure Variable From a Function

Structure variables can be returned from functions just like any other variable. The returned value can be assigned to a structure of the appropriate type.

Here's a program to illustrate how a structure variable can be returned from a function:

*/

#include <stdio.h>

// Define the structure 'student'
struct student {
    char name[20];
    int rollno;
    int marks;
};

// Function to increment 'marks' by 5 and decrement 'rollno' by 10
struct student change(struct student stu) {
    stu.marks = stu.marks + 5;
    stu.rollno = stu.rollno - 10;
    return stu;
}

// Function to display student information
void display(struct student stu) {
    printf("Name: %s\n", stu.name);
    printf("Roll number: %d\n", stu.rollno);
    printf("Marks: %d\n", stu.marks);
}

int main() {
    struct student stu1 = {"John", 12, 87};
    struct student stu2 = {"Mary", 18, 90};

    // Change student information using a function
    stu1 = change(stu1);
    stu2 = change(stu2);

    // Display modified information
    display(stu1);
    display(stu2);

    return 0;
}

/*

Name: John
Roll number: 2
Marks: 92
Name: Mary
Roll number: 8
Marks: 95


--------------------------------------------

In this program:

We define a structure student with three members: name, rollno, and marks.

We declare a function change that takes a struct student as an argument and returns a modified structure variable.

We declare a function display that displays the student information.

We create two structure variables stu1 and stu2 and initialize them with student information.

We call the change function to modify the marks and rollno members of the students and return the modified structures. We assign the returned structures to stu1 and stu2.

Finally, we call the display function to display the modified information of both students.

This program demonstrates how to return a structure variable from a function and assign it to another structure variable of the same type. The changes made to the structure within the function are reflected in the original structure variables.

--------------------------------------------

In the above example, the change() function takes a structure variable as an argument and increments the marks member of the structure and decrements the rollno member of the structure by 10. The function then returns the modified structure variable.

The main function then calls the change() function with the stu1 and stu2 structure variables as arguments. The modified structure variables are then assigned to the stu1 and stu2 structure variables, respectively.

Finally, the main function calls the display() function with the stu1 and stu2 structure variables as arguments to print the members of the structure variables to the console.

Conclusion

Returning structure variables from functions is a common and efficient practice in C programming. It allows us to pass complex data structures between functions without having to copy the structures.

---------------------------------------

Returning a Pointer to a Structure From a Function.

Pointers to structures can also be returned from functions. In the following program, the function func returns a pointer to a structure.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define the structure 'student'
struct student {
    char name[20];
    int rollno;
    int marks;
};

// Function to display student information using a pointer to a structure
void display(struct student *stuptr) {
    printf("Name: %s\n", stuptr->name);
    printf("Roll number: %d\n", stuptr->rollno);
    printf("Marks: %d\n", stuptr->marks);
}

// Function that returns a pointer to a structure
struct student *func() {
    struct student *ptr;

    // Allocate memory for a student structure
    ptr = (struct student *)malloc(sizeof(struct student));

    // Initialize the structure members
    strcpy(ptr->name, "Joseph");
    ptr->rollno = 15;
    ptr->marks = 98;

    // Return the pointer to the created structure
    return ptr;
}

int main() {
    struct student *stuptr;

    // Call the 'func' function to get a pointer to a structure
    stuptr = func();

    // Display student information using the pointer
    display(stuptr);

    // Free the allocated memory
    free(stuptr);

    return 0;
}


/*


In this program:

We define a structure student with three members: name, rollno, and marks.

We declare a function display that takes a pointer to a struct student as an argument and displays the student information.

We declare a function func that returns a pointer to a struct student. Inside this function, we allocate memory dynamically for a struct student, initialize its members, and return the pointer to the newly created structure.

In the main function, we declare a pointer to a struct student called stuptr.

We call the func function to get a pointer to a newly created student structure and assign it to stuptr.

Finally, we call the display function to display the student information using the pointer. After that, we free the dynamically allocated memory using the free function to avoid memory leaks.

This program demonstrates how to return a pointer to a structure from a function and use it to access and manipulate the structure's data.

-----------------------------------------

Passing an Array of Structures as an Argument.

Just as we can pass individual elements of an array to a function, we can also pass an array of structures to a function, where each element of the array is of structure type.


*/

#include <stdio.h>

// Define the structure 'student'
struct student {
    char name[20];
    int rollno;
    int marks;
};

// Function to display a single student's information
void display(struct student stu);

// Function to decrement marks of all students in an array of structures
void dec_marks(struct student stuarr[]);

int main() {
    int i;
    struct student stuarr[3] = {
        {"Mary", 12, 98},
        {"John", 11, 97},
        {"Tom", 13, 89}
    };

    // Call the 'dec_marks' function to decrement marks
    dec_marks(stuarr);

    // Display the modified student information
    for (i = 0; i < 3; i++) {
        display(stuarr[i]);
    }

    return 0;
}

// Function to decrement marks of all students in an array of structures
void dec_marks(struct student stuarr[]) {
    int i;
    for (i = 0; i < 3; i++) {
        stuarr[i].marks = stuarr[i].marks - 10;
    }
}

// Function to display a single student's information
void display(struct student stu) {
    printf("Name: %s\t", stu.name);
    printf("Roll number: %d\t", stu.rollno);
    printf("Marks: %d\n", stu.marks);
}


/*

In this program:

We define a structure student with three members: name, rollno, and marks.

We declare two functions: display and dec_marks.

In the main function, we create an array stuarr of three struct student elements, initializing each element with student information.

We call the dec_marks function to decrement the marks of all students in the stuarr array.

Finally, we display the modified student information by calling the display function in a loop.

The key concept here is that we can pass an array of structures to a function, and any changes made to the elements of the array inside the called function are reflected in the original array.

This allows for efficient manipulation of multiple data records.

-------------------------------------------

I see that you've provided a program that calculates the total marks and grades of students, sorts the records based on their total marks, and prints out the sorted records. This program appears to be well-structured and functional. Here's a cleaned-up version of your program with some explanations:

-------------------------------------------

*/

#include <stdio.h>
#define N 5

// Define a structure 'student' to hold student information
struct student {
    char name[20];
    int rollno;
    int marks[6];
    int total;
    char grade;
};

// Function to display student information
void display(struct student arr);

// Function to calculate the total marks and assign grades
void calculate(struct student arr[]);

// Function to sort students based on total marks
void sort(struct student arr[]);

int main() {
    struct student stu[N], temp;
    int i, j;

    // Input student information
    for (i = 0; i < N; i++) {
        printf("Enter name: ");
        scanf("%s", stu[i].name);
        printf("Enter rollno: ");
        scanf("%d", &stu[i].rollno);
        stu[i].total = 0;

        printf("Enter marks in 6 subjects: ");
        for (j = 0; j < 6; j++) {
            scanf("%d", &stu[i].marks[j]);
        }
    }

    // Calculate total marks and assign grades
    calculate(stu);

    // Sort students based on total marks
    sort(stu);

    // Display sorted student records
    for (i = 0; i < N; i++) {
        display(stu[i]);
    }

    return 0;
}

// Function to calculate total marks and assign grades
void calculate(struct student stu[]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < 6; j++) {
            stu[i].total += stu[i].marks[j];
        }
        if (stu[i].total > 500) {
            stu[i].grade = 'A';
        } else if (stu[i].total > 400) {
            stu[i].grade = 'B';
        } else if (stu[i].total > 250) {
            stu[i].grade = 'C';
        } else {
            stu[i].grade = 'D';
        }
    }
}

// Function to sort students based on total marks
void sort(struct student stu[]) {
    int i, j;
    struct student temp;
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (stu[i].total < stu[j].total) {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }
}

// Function to display student information
void display(struct student stu) {
    printf("Rollno: %d\t", stu.rollno);
    printf("Name: %s\t", stu.name);
    printf("Total: %d\t", stu.total);
    printf("Grade: %c\n\n", stu.grade);
}



/*

This program defines a struct student to store student information, including name, roll number, marks, total marks, and grade. It then takes input for student records, calculates the total marks and assigns grades, sorts the students based on total marks, and finally displays the sorted records. The program is well-structured and should work as intended.

------------------------------------------

Let's break down and explain the program step by step:

Structure Definition:

We start by defining a structure named student that represents a student's information. It includes the following members:

name: A character array to store the student's name (up to 20 characters).
rollno: An integer to store the student's roll number.
marks: An integer array to store marks in 6 subjects.
total: An integer to store the total marks.
grade: A character to store the grade assigned to the student.

Function Prototypes:

Next, we declare function prototypes for three functions that will be defined later:
void display(struct student arr);: This function will display student information.
void calculate(struct student arr[]);: This function will calculate total marks and assign grades.
void sort(struct student arr[]);: This function will sort students based on total marks.
Main Function:

In the main function, we declare an array of struct student named stu with a size of N (defined as 5 using #define N 5).

We use a for loop to input student information:
Name, roll number, and marks in 6 subjects are taken as input for each student.
The calculate function is called to calculate the total marks and assign grades.
The sort function is called to sort the students based on their total marks.
Finally, we display the sorted student records using the display function.
calculate Function:

The calculate function takes an array of struct student as input and calculates the total marks for each student.
It also assigns grades ('A', 'B', 'C', or 'D') based on the total marks.
The function uses nested for loops to iterate through students and subjects to calculate the total marks.
sort Function:

The sort function takes an array of struct student as input and sorts the students based on their total marks in descending order.
It uses nested for loops and swaps students when necessary to sort them.
display Function:

The display function takes a single struct student as input and displays the student's roll number, name, total marks, and grade.
Output:

The program displays the sorted student records, showing each student's roll number, name, total marks, and grade.

In summary, this program defines a student structure, inputs information for multiple students, calculates their total marks and assigns grades, sorts the students based on total marks, and finally displays the sorted student records. It's a practical example of using structures to organize and process data.


*/

#include <stdio.h>
#include <string.h>

#define N 5

// Define a structure for representing dates
struct date {
    int day;
    int month;
    int year;
};

// Define a structure for representing an employee
struct employee {
    char name[20];
    struct date dob;   // Date of birth
    struct date doj;   // Date of joining
    int salary;
};

// Function to compare two dates
int datecmp(struct date date1, struct date date2) {
    if (date1.year != date2.year) {
        return date1.year - date2.year;
    }
    if (date1.month != date2.month) {
        return date1.month - date2.month;
    }
    return date1.day - date2.day;
}

// Function to display an employee's details
void display(struct employee emp) {
    printf("Name: %s\n", emp.name);
    printf("Date of Birth: %d/%d/%d\n", emp.dob.day, emp.dob.month, emp.dob.year);
    printf("Date of Joining: %d/%d/%d\n", emp.doj.day, emp.doj.month, emp.doj.year);
    printf("Salary: %d\n", emp.salary);
    printf("\n");
}

// Function to sort employees by name
void sort_name(struct employee emp[]) {
    int i, j;
    struct employee temp;

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (strcmp(emp[j].name, emp[j + 1].name) > 0) {
                // Swap the two employees
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct employee emp[N];
    int i;

    // Input employee details
    for (i = 0; i < N; i++) {
        printf("Enter name: ");
        scanf("%s", emp[i].name);
        printf("Enter date of birth (dd/mm/yy): ");
        scanf("%d/%d/%d", &emp[i].dob.day, &emp[i].dob.month, &emp[i].dob.year);
        printf("Enter date of joining (dd/mm/yy): ");
        scanf("%d/%d/%d", &emp[i].doj.day, &emp[i].doj.month, &emp[i].doj.year);
        printf("Enter salary: ");
        scanf("%d", &emp[i].salary);
    }

    // Sort employees by name
    sort_name(emp);

    // Display sorted employees
    printf("Sorted Employees by Name:\n");
    for (i = 0; i < N; i++) {
        display(emp[i]);
    }

    return 0;
}


/*

It seems you've provided a program that deals with sorting records of employees based on different keys such as name, date of birth, date of joining, and salary. Let's break down the program and explain it step by step:

struct employee: This structure defines the attributes of an employee, including their name (char name[20]), date of birth (struct date dob), date of joining (struct date doj), and salary (int salary).

struct date: This is another structure used to represent dates with three integer members: day, month, and year.

The program defines several functions, including:

sort_name: Sorts the records by the employee's name.
sort_dob: Sorts the records by the employee's date of birth.
sort_doj: Sorts the records by the employee's date of joining.
sort_salary: Sorts the records by the employee's salary.
display: Displays the sorted records.
datecmp: Compares two dates to help with sorting.
Inside the main function, the program enters an infinite loop (while (1)) to continuously prompt the user for choices.

The user can choose from the following options:

Sort by name.
Sort by date of birth.
Sort by date of joining.
Sort by salary.
Exit the program.
Depending on the user's choice, the corresponding sorting function is called (sort_name, sort_dob, sort_doj, or sort_salary). The sorted records are then displayed using the display function.

The program continues to loop until the user selects the "Exit" option.

The key functionality of this program lies in the sorting functions (sort_name, sort_dob, sort_doj, and sort_salary). These functions sort the employee records based on the chosen key (name, date of birth, date of joining, or salary) and display the sorted records.

The program allows the user to interactively sort and view employee records based on different criteria, making it a useful tool for managing and analyzing employee data.

------------------------------------------------

Part 2 of the above code..............

It seems like you want a program that allows you to input employee records and then sort them based on different criteria such as name, date of birth, date of joining, and salary. Here's the code for such a program:

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 5

// Define a structure for representing dates
struct date {
    int day;
    int month;
    int year;
};

// Define a structure for representing an employee
struct employee {
    char name[20];
    struct date dob;   // Date of birth
    struct date doj;   // Date of joining
    int salary;
};

// Function to compare two dates
int datecmp(struct date date1, struct date date2) {
    if (date1.year != date2.year) {
        return date1.year - date2.year;
    }
    if (date1.month != date2.month) {
        return date1.month - date2.month;
    }
    return date1.day - date2.day;
}

// Function to display employee details
void display(struct employee emp) {
    printf("Name: %s\n", emp.name);
    printf("Date of Birth: %d/%d/%d\n", emp.dob.day, emp.dob.month, emp.dob.year);
    printf("Date of Joining: %d/%d/%d\n", emp.doj.day, emp.doj.month, emp.doj.year);
    printf("Salary: %d\n", emp.salary);
    printf("\n");
}

// Function to sort employees by name
void sort_name(struct employee emp[]) {
    int i, j;
    struct employee temp;

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (strcmp(emp[j].name, emp[j + 1].name) > 0) {
                // Swap the two employees
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
}

// Function to sort employees by date of birth
void sort_dob(struct employee emp[]) {
    int i, j;
    struct employee temp;

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (datecmp(emp[j].dob, emp[j + 1].dob) > 0) {
                // Swap the two employees
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
}

// Function to sort employees by date of joining
void sort_doj(struct employee emp[]) {
    int i, j;
    struct employee temp;

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (datecmp(emp[j].doj, emp[j + 1].doj) > 0) {
                // Swap the two employees
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
}

// Function to sort employees by salary
void sort_salary(struct employee emp[]) {
    int i, j;
    struct employee temp;

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (emp[j].salary < emp[j + 1].salary) {
                // Swap the two employees
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct employee emp[N];
    int i, choice;

    // Input employee details
    for (i = 0; i < N; i++) {
        printf("Enter name: ");
        scanf("%s", emp[i].name);
        printf("Enter date of birth (dd/mm/yy): ");
        scanf("%d/%d/%d", &emp[i].dob.day, &emp[i].dob.month, &emp[i].dob.year);
        printf("Enter date of joining (dd/mm/yy): ");
        scanf("%d/%d/%d", &emp[i].doj.day, &emp[i].doj.month, &emp[i].doj.year);
        printf("Enter salary: ");
        scanf("%d", &emp[i].salary);
    }

    while (1) {
        printf("\n1. Sort by name\n");
        printf("2. Sort by date of birth\n");
        printf("3. Sort by date of joining\n");
        printf("4. Sort by salary\n");
        printf("5. Exit\n");
        printf("6. Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                sort_name(emp);
                break;
            case 2:
                sort_dob(emp);
                break;
            case 3:
                sort_doj(emp);
                break;
            case 4:
                sort_salary(emp);
                break;
            case 5:
                exit(0);
            default:
                printf("Wrong choice\n");
                break;
        }

        printf("\nSorted Employees:\n");
        display(emp, N);
    }

    return 0;
}

/*

This code allows you to input employee records and then sort them based on your choice of criteria. It includes options to sort by name, date of birth, date of joining, and salary. The sorted employees are displayed after each sorting operation. To exit the program, choose option 5.

I'll explain the key parts of the code, especially the looping sections and how structs are passed as arrays of structs.

Struct Definitions:
*/

struct date {
    int day;
    int month;
    int year;
};

struct employee {
    char name[20];
    struct date dob;   // Date of birth
    struct date doj;   // Date of joining
    int salary;
};


/*

Here, we define two structs: date to represent a date, and employee to represent an employee's information. The employee struct contains two instances of the date struct to store the date of birth (dob) and date of joining (doj).

Input of Employee Details:

*/

for (i = 0; i < N; i++) {
    // Input employee details
    printf("Enter name: ");
    scanf("%s", emp[i].name);
    printf("Enter date of birth (dd/mm/yy): ");
    scanf("%d/%d/%d", &emp[i].dob.day, &emp[i].dob.month, &emp[i].dob.year);
    printf("Enter date of joining (dd/mm/yy): ");
    scanf("%d/%d/%d", &emp[i].doj.day, &emp[i].doj.month, &emp[i].doj.year);
    printf("Enter salary: ");
    scanf("%d", &emp[i].salary);
}


/*

This loop allows you to input details for multiple employees (specified by N). It prompts for the employee's name, date of birth, date of joining, and salary, and stores them in the respective struct members.

Sorting Functions:

sort_name, sort_dob, sort_doj, and sort_salary are functions used to sort the employee records based on different criteria (name, date of birth, date of joining, and salary). They use various sorting algorithms to rearrange the array of employee structs.

Sorting Loops:

*/

void sort_name(struct employee emp[]) {
    int i, j;
    struct employee temp;

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (strcmp(emp[j].name, emp[j + 1].name) > 0) {
                // Swap the two employees
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
}


/*

This is an example of one of the sorting functions (sort_name). It uses the Bubble Sort algorithm to sort the array of employees based on their names in lexicographical order. It compares the names using strcmp and swaps the employees if necessary.

I'll explain the Bubble Sort algorithm in a simple way and then relate it to the code you provided.

Bubble Sort Explained Like a Teen:

Imagine you have a list of numbers written on a piece of paper, and you want to arrange them in ascending order from smallest to largest. Bubble Sort is like a simple game you can play to do that.

Here's how it works:

You start with the first number in the list (the leftmost one).

You compare it to the next number (the one to its right).

If the first number is smaller than the second one, you leave them as they are.

If the first number is larger, you swap them, so the bigger number moves to the right.

Now, you move to the second number in the list and repeat the process with the next number to its right.

You keep doing this for every pair of adjacent numbers in the list, from left to right.

After one pass through the list, the largest number will have "bubbled up" to the end (the rightmost position).

You repeat this process (comparing and swapping) for the entire list multiple times until no more swaps are needed. When this happens, your list is sorted!

Now, How Does This Relate to the Code:

In the sort_name function in your code, it's doing something very similar, but instead of numbers, it's sorting employees based on their names. Here's how it corresponds:

The "list" in this case is an array of employees.

The code starts with the first employee (the leftmost one).

It compares their names with the names of the employees to their right (using strcmp).

If the name of the current employee is lexicographically greater (comes later in the dictionary) than the name of the next employee, it swaps their positions in the array.

It repeats this process for every pair of adjacent employees until no more swaps are needed.

After one pass through the array, the employee with the lexicographically greatest name "bubbles up" to the end of the array.

It keeps doing this until the entire array is sorted in lexicographical order.

So, just like in the game with numbers, Bubble Sort for employee names is a way to rearrange them in alphabetical order by comparing and swapping them until they're in the right order.

Menu and User Choice:

*/

while (1) {
    // Display menu and get user choice
    printf("\n1. Sort by name\n");
    printf("2. Sort by date of birth\n");
    printf("3. Sort by date of joining\n");
    printf("4. Sort by salary\n");
    printf("5. Exit\n");
    printf("6. Enter your choice: ");
    scanf("%d", &choice);

    // Perform sorting based on user choice
    switch (choice) {
        // ...
    }

    // Display sorted employees
    printf("\nSorted Employees:\n");
    display(emp, N);
}


/*

This loop continuously displays a menu of sorting options and allows the user to choose one. Depending on the user's choice, it calls the corresponding sorting function and then displays the sorted employees using the display function.

Display Function:

*/

void display(struct employee emp[], int n) {
    int i;
    printf("NAME\t\tDOB\t\tDOJ\t\tSALARY\n");
    for (i = 0; i < n; i++) {
        // Display employee details
        printf("%s\t\t%d/%d/%d\t%d/%d/%d\t%d\n", emp[i].name, emp[i].dob.day, emp[i].dob.month, emp[i].dob.year, emp[i].doj.day, emp[i].doj.month, emp[i].doj.year, emp[i].salary);
    }
    printf("\n");
}


/*

The display function is used to display employee details. It takes an array of employee structs and the number of elements to display (n).

This code allows you to input employee records, sort them based on different criteria, and continuously repeat the process until you choose to exit. It demonstrates how to work with arrays of structs, sorting functions, and user input in C.

*/



































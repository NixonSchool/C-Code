#include <stdio.h>

//note from this table we learn that we can just printf the value at the end, not a must you start using variables

int main() {
    printf("| Type                | Example           | Explanation                                           |\n");
    printf("|---------------------|-------------------|-------------------------------------------------------|\n");
    printf("| Integer Constant    | %-17d | A whole number without a decimal point.       |\n", 42);
    printf("| Real Constant       | %-17lf | A number with a decimal point.                |\n", 3.14159);
    printf("| Octal Constant      | %-17o | An integer represented in base 8.             |\n", 0754);
    printf("| Decimal Constant    | %-17d | An integer represented in base 10.            |\n", 123);
    printf("| Hexadecimal Constant| %-17x | An integer represented in base 16.            |\n", 0x1A);
    printf("| Character Constant  | %-17c | A single character enclosed in single quotes.|\n", 'A');
    printf("| String Constant     | %-17s | A sequence of characters enclosed in double quotes.|\n", "Hello, World!");

    return 0;
}

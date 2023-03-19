// simple message.c
// print a message

#include <stdio.h> // for printing and getting data -> printf function
main() // main function
{
    printf("Hello World!\n"); // printf function
    printf("%d\n", 123); // integer
    printf("%f\n", 1.23); // floating point -> decimal point

    printf("%c\n", 'a'); // character -> apostrophes
    printf("%s\n", "abc"); // string -> quotation marks

    // ASCII table character
    printf("%c\n", 29); // decimal
    printf("%c\n", 0x1F); // hexadecimal
    return 0;
}

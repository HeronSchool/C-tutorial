// comments.c
// write comments in your C program
// to make your code understandable to people
// explain what is going on
// add comments as you write your code
// you can quickly scan through your code and comments to modify your program
// C ignores comments
                                                            // single line comments
/* DW programming */
/* calculate how many hours are in a month */
                                                            /* multi line comments */
#include <stdio.h>
main()
{
    int numOfDaysInMonth, numOfHoursInMonth, numOfHoursInDay = 24;
    printf("How many days are in a month? ");
    scanf(" %d", &numOfDaysInMonth);

    numOfHoursInMonth = numOfDaysInMonth * numOfHoursInDay; // calculate the total hours in a month

    printf("Hours in a month : %d", numOfHoursInMonth);

    return 0;
}

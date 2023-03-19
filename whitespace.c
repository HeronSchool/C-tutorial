// whitespace.c
// use whitespace to make your code readable
// use spaces, line breaks

#include <stdio.h>
main(){
    int numOfBooks;

    printf("How many books do you have? ");
    scanf(" %d", &numOfBooks);

    printf("You have %d books!", numOfBooks);
    return 0;
}

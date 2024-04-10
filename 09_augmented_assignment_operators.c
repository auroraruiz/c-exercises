#include <stdio.h>

int main(){
    printf("9. Augmented assignment operators");
    printf("\n");
    printf("---------------------------------\n");

    /* 
    augmented assigment operators = used to replace a statement where an operator
                                    takes a variable as one of its arguments
                                    and then assigns the result back to the same variable
                                    x = x + 1
                                    x+=1
    */

    int x = 10;

    x+=2;
    x*=4;
    x%=48;

    printf("Variable: %i",x);
    printf("\n");
    printf("--- Done ---");
    return 0;
}
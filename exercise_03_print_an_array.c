#include <stdio.h>

/*
The sizeof operator
sizeof is an operator that is used to determine the size of a data type or a variable in bytes. 
It returns the size of the operand in terms of bytes.
*/

int main(){
    double* x;
    printf("Size of double*: %zu\n", sizeof(x));
    return 0;
}

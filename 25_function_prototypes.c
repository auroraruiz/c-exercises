#include <stdio.h>
#include <stdbool.h>

/*
Function prototype

It's a function declaration without a body, before the main()
Ensures that callls to a function are made with the correct arguments

Notes:
Many C compilers do not check for parameter matching
Missing arguments will result in unexpected behaviour
A function prototype causes the compiler to flag an error if arguments are missing

Advantages:
1. Easier to navigate a program with main() at the top
2. Helps with debugging
3. Commonly used in header files
*/

void hello(const char *name, int age); //function prototype

int main(){

    printf("25. Function prototypes");
    printf("\n");
    printf("-----------------------\n");
    int age;
    printf("How old are you?\n");
    scanf("%i",&age); //address of the variable age
    char name[20]; // bytes
    printf("What's your name?\n");
    scanf("%4s",&name);
    hello(name, age);
    printf("--- Done ---");
    return 0;
}

void hello(const char *name, int age){
    printf("Hello, %s. ", name);
    printf("You're %i.\n", age);
}
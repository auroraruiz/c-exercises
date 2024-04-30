#include <stdio.h>

void printAge(int age);

void printAgePointer(int* pAge);


int main(){
    printf("47. Pointers");
    printf("\n");
    printf("------------\n");
    /*
    pointer  =  a "variable-like" reference that holds a memory address to anothe variable, array, etc.
                some tasks are performed more easily with pointers
                * = indirection operator (value at address)
    Advantages of using pointers
    - Less time in program execution
    - Working on the original variable
    - With the help of pointers, we can create data structures (linked-list, stack, queue)
    - Returning more than one value from functions
    - Searching and sorting large data very easily
    - dinamically memory allocation
    */
    int age = 21;
    int *pAge = NULL; // Good practice to assign NULL when declaring a pointer
    pAge = &age;
    printf("Value of age: %i\n", age);
    printf("Value at stored address of pAge: %i\n", *pAge); // dereferencing
    printf("Memory address of age: %p\n", &age);
    printf("Value of pAge: %p\n", pAge);

    printf("Size of age: %lu bytes\n", sizeof(age));
    printf("Size of pAge: %lu bytes\n", sizeof(pAge)); // 8 bytes cause we're using a 64-bit based compiler

    printAge(age);
    printAgePointer(pAge);

    //printf("\n");
    printf("--- Done ---");
    return 0;
}


void printAge(int age){
    printf("You're %i years old.\n", age);
}

void printAgePointer(int* pAge){
    printf("You're %i years old.\n", *pAge);
}

#include <stdio.h>

#include <stdio.h>

int main() {
    printf("\nUnderstanding arrays and pointers:\n");
    
    double array[5] = {0,1,2,3,4};
    printf("array = &array[0]\n");
    printf("array =  %12p\n", (void*)array);
    printf("&array[0] = %9p\n", (void*)(&array[0]));
    printf("array + 1 =  %p\n", (void*)(array + 1));
    printf("&array[1] = %9p\n", (void*)&array[1]);
    printf("array + 2 =  %p\n", (void*)(array + 2));
    printf("&array[2] = %9p\n", (void*)&array[2]);

    printf("\n");

    printf("array[2] = %9lf\n", array[2]);
    printf("array[2] = %9lf\n", array+2);
    printf("array[2] = %9lf\n", *(array+2));

    // Define a pointer variable
    double *pointer;

    // Assign a specific memory address to the pointer
    pointer = (double *)(&array[2]); // Example memory address

    // Access the contents of the memory address using the pointer
    double values = *pointer;

    // Print the value
    printf("The value at memory address %p is: %lf\n", pointer, values);

    printf("\n");
    
    int number = 5;
    int* ptr_number = &number;
    printf("The address of number is: %p\n", ptr_number);
    printf("The address of number is: %p\n", &number);

    int number_value = *ptr_number;
    printf("The value at address %p is %i\n", ptr_number, number_value);

    return 0;
}

/*
Notes

A void* is a generic pointer type in C that can point to an object of any type. 
It's often used when you need to work with pointers of unknown or generic type.
 example, in functions that need to work with different types of pointers without knowing the exact type beforehand.
A void* doesn't point to "nothing", but rather it can point to any memory location regardless of the data type it holds.
However, because it doesn't have a specific type associated with it, you need to cast it to the appropriate type before dereferencing it to access the data it points to.
*/
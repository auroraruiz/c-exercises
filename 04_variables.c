#include <stdio.h>

int main(){
    printf("4. Variables");
    printf("\n");
    printf("------------\n");


    /* variable = Allocated in memory to store a value.
                  We refer to a variable's name to access the stored value.  
                  That variable now behaves as if it was the value it conatains.
                  BUT we need to declare what type of data we are storing.
    */

    // Creating a variable is done in two steps
    // 1. Declaration
    // 2. Initialization

    int x; // declaration (creating space in memory to store the value)
    x = 5; // initialization (actually store the value)
    int y = 10;

    // make sure the variable name is descriptive
    // Basic data types:
    int age = 21; //int
    float average = 7.07; //float
    char grade = 'A'; //single character, use single quotes

    // C isn't a OO language so there aren't string data types bc they're technically objects
    char name[] = "Vronnsky"; //array of characters, use double quotes

    // To display the value stored within a variable within a prinf statement we need to use forma specifiers
    printf("Hello, %s.", name);
    printf("\n");
    printf("You are %d years old.", age);
    printf("\n");
    printf("Your average grade is %c.", grade);
    printf("\n");
    printf("Your decimal average is %0.2f.", average);
    printf("\n");
    
    /* 
    A note on ints:
    The %d and %i format specifiers are interchangeable when dealing with integers in printf. 
    However, there is a difference between %d and %i when used with scanf for input. 
    %d expects the input to be in decimal format, while %i allows for input in decimal, octal, 
    or hexadecimal format, based on prefixes like 0x for hexadecimal and 0 for octal.
    */
    printf("--- Done ---");
    return 0;
}
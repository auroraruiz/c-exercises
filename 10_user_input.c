#include <stdio.h>
#include <string.h>


void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF){
        //printf("We're here: %c\n",c);
    }
}

int main(){
    printf("10. User input");
    printf("\n");
    printf("--------------\n");
    /*
    Switch from using output to terminal. 
    1. File
    2. Preferences
    3. Search for "code runner"
    4. Check the "Run in terminal" option
    */
    
    int age;
    printf("How old are you?\n");

    //scanf is used to read input
    /*
    scanf requires pointers as arguments for storing input values. 
    By using the address-of operator, you provide the memory address 
    where scanf should store the integer value it reads from input.*/
    scanf("%i",&age); //address of the variable age
    /* 
    A note on ints:
    The %d and %i format specifiers are interchangeable when dealing with integers in printf. 
    However, there is a difference between %d and %i when used with scanf for input. 
    %d expects the input to be in decimal format, while %i allows for input in decimal, octal, 
    or hexadecimal format, based on prefixes like 0x for hexadecimal and 0 for octal.
    Ex: octal 052 = decimal 42
        hex 0x3a = decimal 58
    */
    printf("Age: %i\n", age);

    char name[25]; // bytes
    printf("What's your name?\n");
    scanf("%4s",&name);
    // scanf("%24s",name); would also work
    // arrays in C are automatically converted to pointers in certain contexts
    printf("Hello, %s!\n",name);

    clearInputBuffer(); // Clear input buffer

    char nameSurname[25]; // bytes
    printf("What's your name and surname?\n");
    // To read whitespaces, use fgets
    fgets(nameSurname, 25, stdin);
    nameSurname[strlen(nameSurname)-1] = '\0';
    printf("Hello, %s! You're the best!\n",nameSurname);

    printf("--- Done ---");
    return 0;
}
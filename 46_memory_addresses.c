#include <stdio.h>

int main(){
    printf("46. Memory addresses");
    printf("\n");
    printf("--------------------\n");
    /*
    memory = an array of bytes within RAM (street)
    memory block = a single unit (byte) within memory, used to hold some value (person)
    memory address = the address of where a memory block is located (house address)
    */
    
    int a = 'X';
    int b = 'Y';
    int c = 'Z';
    int d[3];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
    printf("%d bytes\n", sizeof(d));

    int *pointer_a = &a;

    printf("The memory address of the int %c is: %p\n", *pointer_a, pointer_a);
    printf("The memory address of the int %c is: %p\n", *(&b), &b);
    printf("The memory address of the int %c is: %p\n", *(&c), &c);
    printf("The memory address of the array of ints is: %p\n", *(&d), &d);
    
    printf("--- Done ---");
    return 0;
}
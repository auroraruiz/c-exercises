#include <stdio.h>

int main(){
    printf("6. Format specifiers");
    printf("\n");
    printf("--------------------\n");

    /*
    format specifier % = defines and formats a type of data to be displayed
    
    %c =  character
    %s = string (array of characters)
    %f = float
    %lf = double
    %d or %i = integer

    %.1 = decimal precision
    %1 = minimum field width
    %- = left align
    
    */ 
    float item1 =  5.75;
    float item2 = 10.00;
    float item3 = 100.99;
    double item4 = 1000000.99;

    printf("Item 1: $%18.2f\n", item1);
    printf("Item 2: $%18.2f\n", item2);
    printf("Item 3: $%18.2f\n", item3);
    printf("Item 4: $%18.2lf\n", item4);

    printf("--- Done ---");
    return 0;
}
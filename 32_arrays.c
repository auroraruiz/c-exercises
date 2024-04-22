#include <stdio.h>

int main(){
    printf("32. Arrays");
    printf("\n");
    printf("----------\n");

    // array = a data structure that can store many values of the same data type
    // arrays have a foxed size, we can't change their size after we compile and run a program
    
    double prices1[] = {5.0, 10.0, 15.0, 25.0, 20.0};
    
    double prices2[3];
    prices2[0] = 5.0;
    prices2[1] = 10.0;
    prices2[2] = 15.0;

    double prices3[10] = {5.0, 10.0, 15.0, 25.0, 20.0};

    // index starts at 0
    printf("$%.2lf", prices3[2]); 

    // string =  array of individual characters
    char name[] = "Auro";

    printf("\n");
    printf("--- Done ---");
    return 0;
}
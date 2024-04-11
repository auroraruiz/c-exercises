#include <stdio.h>
#include <stdbool.h> //Header file to work with boolean variables

int main(){
    printf("18_19_20. Logical operators");
    printf("\n");
    printf("---------------------------\n");

    /* logical operators
    - && (AND) checks if two conditions are true
    - || (OR) checks if as least one of two conditions is true
    - ! (NOT) checks if the negation of the condition is true
    */
    float temp = 40;
    bool sunny = true;
    bool cloudy = false;

    if (temp >=0 && temp <= 35 || !cloudy){
        printf("The weather is good!");
    }
    else{
        printf("The weather is bad.");
    }

    printf("\n");
    printf("--- Done ---");
    return 0;
}
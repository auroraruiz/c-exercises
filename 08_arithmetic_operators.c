#include <stdio.h>

int main(){
    printf("8. Aritmetic operators");
    printf("\n");
    printf("----------------------\n");

    /*
    arithmetic operators
    + addition
    - substraction
    * multiplication
    / division
    % modulus
    ++ increment
    -- decrement
    */

    //Increment
    float testvalue = 8.05;
    testvalue++;
    testvalue--;
    testvalue--;
    printf("Test increment/decrement: %.2f\n", testvalue);   

    // Division and types
    int x = 5;
    int y = 2;

    // You need to cast your divisor as a float
    // Casting is a way to explicitly convert a value from one data type to another
    float z = x / (float) y;
    printf("Test division: %.2f\n", z);
    printf("--- Done ---");
    return 0;
}
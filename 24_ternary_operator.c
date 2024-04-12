#include <stdio.h>
#include <stdbool.h>

// Could write int as the return value as well as bool
bool summer(double temp){
    return (temp>30) ? true : false;
}

int main(){
    printf("24. Ternary operator");
    printf("\n");
    printf("--------------------\n");
    double temp = 29;
    printf("Is it summer?: %i",summer(temp));
    printf("\n");
    printf("--- Done ---");
    return 0;
}
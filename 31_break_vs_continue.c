#include <stdio.h>

int main(){
    printf("31. Break vs. continue");
    printf("\n");
    printf("----------------------\n");
    // continue = skips rest of code and forces next iteration of the loop
    // break = exits a loop/ switch

    printf("Break example:\n");
    // This loop will print numbers 0 to 2
    for (int i = 0; i<6; i++){
        if (i == 3){
            break;
        }
        printf("%i\n",i);
    }
    printf("\nContinue example:\n");
    // This loop will print numbers 0 to 5, skipping number 3
    for (int i = 0; i<6; i++){
        if (i == 3){
            printf("\n");
            continue;
        }
        printf("%i\n",i);
    }

    printf("--- Done ---");
    return 0;
}
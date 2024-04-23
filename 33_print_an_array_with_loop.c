#include <stdio.h>

int main(){
    printf("33. Print an array with loop");
    printf("\n");
    printf("----------------------------\n");

    float prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 25.0};
    size_t prices_size = sizeof(prices)/sizeof(prices[0]);

    char space = ' '; // for format

    for (int i = 0; i < prices_size; i++){
        printf("Item %i %8c $%.2f\n", i+1, space, prices[i]);
    }
    
    printf("--- Done ---");
    return 0;
}
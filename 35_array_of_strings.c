#include <stdio.h>
#include <string.h>

int main(){
    printf("35. Array of strings");
    printf("\n");
    printf("--------------------\n");

    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    // In C, you cannot assign an array to another array using the assignment operator directly.
    // We can use the strcpy function
    // Careful to use this strcpy function, it doesn't exactly replace one string with another.
    strcpy(cars[0], "Tesla");

    size_t rows = sizeof(cars)/(sizeof(cars[0]));
    size_t columns = sizeof(cars[0])/sizeof(cars[0][0]);

    // Access and print elements of the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%c ", cars[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        printf("%s\n", cars[i]);
    }

    printf("--- Done ---");
    return 0;
}
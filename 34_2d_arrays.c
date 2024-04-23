#include <stdio.h>

int main(){
    printf("34. 2D arrays");
    printf("\n");
    printf("-------------\n");
    /*
    2D array =  an array where each element is an entire array
                useful if you need a matrix, grid or table of data
    */
    
    // Define a 2D array with 3 rows and 4 columns
    // Declaration of 'matrix' as multidimensional array must have bounds for all dimensions except the first
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    size_t rows = sizeof(matrix)/(sizeof(matrix[0]));
    size_t columns = sizeof(matrix[0])/sizeof(matrix[0][0]);

    matrix[2][3] = 100;

    // In C, you cannot assign an array to another array using the assignment operator directly.
    // matrix[2] = {1,1,1,1}; won't work

    // Access and print elements of the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%-3d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print size of matrix
    printf("Size of matrix: %zu bytes", sizeof(matrix));

    printf("\n");
    printf("--- Done ---");
    return 0;
}
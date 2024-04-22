#include <stdio.h>

int main(){
    printf("30. Nested loops");
    printf("\n");
    printf("----------------\n");
    
    // nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol; 


    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    //getchar();
    printf("Enter the symbol: ");
    scanf(" %c", &symbol); // Note the space before %c

    for (int i = 0; i<rows; i++)
    {
        for (int j=0; j< columns; j++)
        {
            printf("%c ",symbol);
        }
        printf("\n");
    }

    printf("--- Done ---");
    return 0;
}
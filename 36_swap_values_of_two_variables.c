#include <stdio.h>
#include <string.h>

int main(){
    printf("36. Swap values of two variables");
    printf("\n");
    printf("--------------------------------\n");

    int x = 1;
    int y = 2;

    // Can't perform multiple assignation
    // x, y = y, x;

    int aux = x;
    x = y;
    y = aux;

    printf("x: %i\ny: %i\n",x, y);

    char fluid1[15] = "water";
    char fluid2[15] = "soda";

    char aux2[15];
    strcpy(aux2,fluid1);
    strcpy(fluid1, fluid2);
    strcpy(fluid2, aux2);
    
    printf("fluid1: %s\nfluid2: %s\n",fluid1, fluid2);

    printf("--- Done ---");
    return 0;
}
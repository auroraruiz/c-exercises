#include <stdio.h>

int main(){
    printf("7. Constants");
    printf("\n");
    printf("------------\n");
    
    // constant  = fixed value that cannot be altered by the program during its execution
    
    const float PI = 3.141592; 
    // Good practice: name constants with upper case letters

    // PI = 420.69;
    // error: assignment of read-only variable 'PI'
    printf("Constant: %f", PI);

    
    printf("\n");
    printf("--- Done ---");
    return 0;
}
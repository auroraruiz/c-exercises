#include <stdio.h>

int main(){
    printf("15. Switch statements");
    printf("\n");
    printf("---------------------\n");

    /*
    switch = a more efficient alternative to using many "else if" statements
            allows a value to be tested for equality agains many cases
    */
    char grade;

    printf("Enter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Perfect!");
            break;
        case 'B':
            printf("Almost perfect!");
            break;
        default:
            printf("This is the default case.");
    }
    printf("\n");
    printf("--- Done ---");
    return 0;
}
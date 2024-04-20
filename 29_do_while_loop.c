#include <stdio.h>

int main(){
    printf("29. Do while loop");
    printf("\n");
    printf("-----------------\n");

    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always executes a block of code once, THEN checks a condition
    int number = 0;
    int sum = 0;

    do {
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        sum += number;
    } while (number > 0);

    printf("The sum of your numbers is: %d \n",sum-number);
    printf("\n");
    printf("--- Done ---");
    return 0;
}
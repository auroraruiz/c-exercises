#include <stdio.h>
#include <math.h>


int main(){
    printf("13. Hypotenuse calculator program");
    printf("\n");
    printf("---------------------------------\n");

    double cat1; // Cathetus 1
    double cat2; // Cathetus 2
    double hypotenuse;

    printf("Introduce the lenght of the first cathetus:\n");
    scanf("%lf",&cat1);
    //clearInputBuffer();
    printf("Introduce the lenght of the second cathetus:\n");
    scanf("%lf",&cat2);

    // Pythagoream theorem: a^2 = b^2 + c^2
    // where a is the hypotenuse and b and c the catheti
    // of a right triangle
    hypotenuse = sqrt(pow(cat1,2)+pow(cat2,2));
    printf("The hypotenuse of the triangle is: %lf\n", hypotenuse);
    printf("--- Done ---");
    return 0;
}
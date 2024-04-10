#include <stdio.h>
#include <math.h>

int main(){
    printf("12. Circle circumference program");
    printf("\n");
    printf("--------------------------------\n");

    const double PI = 3.141592;
    double radius;
    double circumference;
    double area;

    printf("Introduce the radius of your circle:\n");
    scanf("%lf", &radius);
    circumference = 2 * PI * radius;
    printf("The circumference of the circle is: %lf u\n",circumference);
    area = PI * pow(radius,2);
    printf("The area of the circle is: %lf u^2",area);
    printf("\n");
    printf("--- Done ---");
    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){
    printf("11. Math functions");
    printf("\n");
    printf("------------------\n");

    double A = sqrt(9); // 3
    double B = pow(2,4); // 16
    int C = round(3.14); // 3
    int D = ceil(3.14); // 4
    int E = floor(3.99) ; // 3
    double F = fabs(-100); // 100
    double G = log(3); // 1.09...
    double H = sin(3.14/2); // 1 (radians)
    double I = cos(0); // 1
    double J = tan(0); // 0

    printf("Result: %lf",J);
    printf("\n");
    printf("--- Done ---");
    return 0;
}
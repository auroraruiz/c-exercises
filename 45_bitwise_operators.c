#include <stdio.h>

int main(){
    printf("45. Bitwise operators");
    printf("\n");
    printf("---------------------\n");
    /*
    Bitwise operators = special operators used in bit level programming
                        (knowing binary is important for this topis)
    - & = AND
    - | = OR
    - ^ = XOR
    - << left shift
    - >> right shift
    - ~ complement
    */

    int x = 6;  // 00000110
    int y = 12; // 00001100
    int z = 0;  // 00000000

    z = x & y;  // 00000100 = 4
    printf("AND = %i\n", z);

    z = x | y;  // 00001110 = 14
    printf("OR = %i\n", z);

    z = x ^ y;  // 00001010 = 10
    printf("XOR = %i\n", z);

    z = x << 1; // 00001100 = 12
    printf("SHIFT LEFT = %i\n", z);

    z = y >> 2; // 00000011 = 3
    printf("SHIFT RIGHT = %i\n", z);
 
    z = ~y; // 11110011 = -13
    printf("COMPLEMENT = %i\n", z);

    printf("--- Done ---");
    return 0;
}
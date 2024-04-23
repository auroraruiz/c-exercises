#include <stdio.h>
#include <stdbool.h>

int main(){
    printf("5. Data types");
    printf("\n");
    printf("-------------\n");

    // Data types
    char a  = 'c'; // single character   %c
    char b[] = "Bro"; // array of characters    %s

    float c = 3.141592; // 4 bytes (32 bits of precision) 6-7 digits    %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15-16 digits     %lf
    
    bool e = true; // 1 byte (true or false) - technically we could use one bit instead of one byte     %d
    
    char f = 97; // 1 byte (-128 to +127)  %d or %c
    // %d shows the number
    // %c shows the ascii table char assigned to that number
    unsigned char g = 255; //1 byte (0 to +255)     %d or %c
    // unsigned is a keyword to disregard negative numbers
    // if you go beyond the maximum range, it'll reset to zero 

    short int h = 32767; // 2 bytes(-32,768 to +32,767) %d
    unsigned short int i = 65535; //2 bytes(0 to +65,535) %d
    // overflow if gone beyond range
    // you can call them just "shorts"

    int j  = 84739874; // 4 bytes (-2,147,483,648 to +2,147,483,647)    %d
    unsigned int k = 4294967295; // 4 bytes (0 to 4,294,967,295)     %u
    
    // A regular int is considered a long int 
    long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion)  %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion)  %llu
    
    // Display
    printf("Char: %c\n",a); // single char
    printf("Array of char: %s\n",b); //array of char
    printf("Float: %0.2f\n", c); // float
    printf("Double: %0.15lf\n", d); // double

    printf("Boolean: %d\n",e); //boolean
    printf("Number as char: %c\n",f); //char as numeric value
    printf("Unsigned number as char: %d\n",g); //char as numeric value

    printf("Short int: %d\n",h); // short int
    printf("Unsigned short int: %d\n",i); // unsigned short int
    
    printf("Int: %i\n", j); // int
    printf("Unsigned int: %u\n",k); // unsigned int

    printf("Long long: %lld\n", l); // long long
    printf("Unsigned long long: %llu\n",m); // unsigned long long
    
    printf("--- Done ---");
    return 0;
}
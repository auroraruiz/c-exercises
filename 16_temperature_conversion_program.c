#include <stdio.h>
#include <ctype.h>

float celsisusToFarenheit(float celsius){
    float farenheit = (celsius *(9.0/5.0)) + 32;
    return farenheit;
}

float farenheitToCelsius(float farenheit){
    float celsius = (farenheit - 32) * (5.0/9.0);
    return celsius;
}

int main(){
    printf("16. Temperature conversion program");
    printf("\n");
    printf("----------------------------------\n");
    char unit;
    printf("Please, enter the unit of the temperature to convert\nCelsius (c) or Farenheit (f): ");
    scanf("%c",&unit);
    unit = toupper(unit); // C is case sensitive

    switch(unit){
        float temp_in;
        float temp_out;
        case 'C':
            printf("Please, enter the degrees to convert: ");
            scanf("%f", &temp_in);
            temp_out = celsisusToFarenheit(temp_in);
            printf("%.2f C = %.2f F ", temp_in, temp_out);
            printf("\n");
            printf("--- Done ---");
            break;
        case 'F':
            printf("Please, enter the degrees to convert: ");
            scanf("%f", &temp_in);
            temp_out = farenheitToCelsius(temp_in);
            printf("%.2f F = %.2f C ", temp_in, temp_out);
            printf("\n");
            printf("--- Done ---");
            break;
        default:
            printf("Please, enter a valid unit.\nRESTARTING PROGRAM\n\n");
            getchar();
            main();
    }
    return 0;
}
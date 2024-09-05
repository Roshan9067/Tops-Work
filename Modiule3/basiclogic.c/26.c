//26.Convert temperature Fahrenheit to Celsius .
#include <stdio.h>


int main() {
    float Celsius,Fa;

    printf("Enter  Fahrenheit:- ");
    scanf("%f", &Fa);

    Celsius = (5.0 / 9.0) * (Fa - 32);

    printf("Celsius:- %.2f", Celsius);

    return 0;

    
}
//28.Convert years into days and months 

#include <stdio.h>

int main() {
    float days, months, years;

    printf("Enter the years:-  ");
    scanf("%f", &years);

    months = years * 12;
    days = years * 365.25;

    printf("year into months:- %.2f\n", months);
    printf("years into days:- %.2f", days);

    
}
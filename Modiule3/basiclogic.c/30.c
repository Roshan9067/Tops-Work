//30. WAP to convert years into days and days into years 

#include <stdio.h>

int main() {

    float years, days;

    printf("Enter the years: ");
    scanf("%f", &years);

    days = years * 365.25;

    printf("years into days is: %.2f\n", days);

 printf("Enter the days:  ");
    scanf("%f", &days);

    years = days / 365.25;

    printf("days into years is: %.2f", years);


}
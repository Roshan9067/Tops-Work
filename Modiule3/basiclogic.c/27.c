//27.Convert days into months .

#include <stdio.h>

int main() {
    float days, months;

    printf("Enter Number Of Days:- ");
    scanf("%f", &days);

    months = days / 30.44;

    printf(" days into months:- %.2f", months);

    return 0;
}
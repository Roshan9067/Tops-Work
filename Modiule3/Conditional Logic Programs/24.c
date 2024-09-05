/* 24.Accept the input month number and print number of days in that 
month. */

#include <stdio.h>
int main() {
    int Month_number;

    printf("Enter the month number between 1 to 12: ");
    scanf("%d", &Month_number);

    switch (Month_number) {

        case 1:
        printf(" jaunuary has a Total 31 days");
        break;

        case 2:
        printf("Fabruary has a Total 28 days in leap year and 29 days remain years");
        break;

        case 3:
        printf("March has a Total 31 days");
        break;

        case 4:
        printf("April has a Total 30 days");
        break;

        case 5:
        printf("May has a Total 31 days");
        break;

        case 6:
        printf("june has a Total 30 days");
        break;

        case 7:
        printf("July has a Total 31 days");
        break;

        case 8:
        printf("August has a Total 31 days");
        break;

        case 9:
        printf("September has a Total 30 days");
        break;

        case 10:
        printf("October has a Total 31 days");
        break;

        case 11:
        printf("November has a Total 30 days");
        break;

        case 12:
        printf("December has a Total 31 days");
        break;

        default:
        printf("Enter valid month number Enter number between 1 to 12");
        break;
    }

}
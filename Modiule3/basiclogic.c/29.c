//29.Convert minutes into seconds and hours.

#include <stdio.h>

int main() {

    float min,sec;

    printf("Enter the minutes:-  ");
    scanf("%f", &min);

    sec = min * 60;

    printf("minutes into seconds is:-  %.2f", sec);



}
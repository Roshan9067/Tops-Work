//3. WAP to check if the given year is a leap year or not. 

#include <stdio.h>

int main() {
    int leap;

    printf("enter the Year: ");
    scanf("%d", &leap);

    if (leap % 4 == 0 && (leap % 100 != 0 || leap % 400 == 0)){
        printf("The year is leapyear", leap);

    }else{
        printf("The year is not leapyear");
    }
}
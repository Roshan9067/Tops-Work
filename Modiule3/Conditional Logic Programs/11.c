// 11. WAP to find number is even or odd using ternary operator 

#include <stdio.h>
int main () {
    int num;

    printf("Enter any Number: ");
    scanf("%d", num);

    (num % 2 == 0)?printf("The number is even", num):printf("The number is odd", num);
}
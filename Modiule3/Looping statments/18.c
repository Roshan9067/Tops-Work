/*  18. Write a C Program to Print the Multiplication Table of N 
i. E.g. 5 * 1 = 5 
ii. 5 * 2 = 10 
1. . 
2. . 
iii. 5 * 10 = 50   */


#include <stdio.h>
int main () {
    int num , a = 1;

    printf("Enter number to print multipliction Table: ");
    scanf("%d", &num);

    while (a <= 10) {
        printf("%d * %d = %d \n", num , a, num * a);
        a++;
    }
}
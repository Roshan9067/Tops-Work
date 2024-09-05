/*  10.Write a program you have to make a summation of first and last Digit. (E.g., 
1234 Ans: -5) */

#include <stdio.h>
int main() {
    int lastdigit, firstdigit, num, sum;

    printf("Enter the number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        num = -num;
    }


    lastdigit = num % 10;
    firstdigit = num;


    while(firstdigit >= 10) {
        firstdigit /= 10;
    }

    sum = firstdigit + lastdigit;
    printf("The sum of first and last digit is: %d", sum);


} 
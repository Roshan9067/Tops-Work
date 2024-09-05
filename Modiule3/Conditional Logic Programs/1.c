/* 1. Write a C program to accept two integers and check whether they are equal 
or not */

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first number 1:-");
    scanf("%d", &num1);

    printf("Enter first number 2:-");
    scanf("%d", &num2);

    if (num1==num2) {
        printf("num1 is equal to num2 ", num1,num2);
    }else{
        printf("num1 is not equal to num2 ", num1,num2);

    }







}
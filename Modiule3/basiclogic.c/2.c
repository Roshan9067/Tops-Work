/*2. Write a program to make Simple calculator (to make addition, subtraction, 
     multiplication, division and modulo)*/


#include <stdio.h>

int main() {
    int num1, num2;

    
    printf("Enter numbers 1 : ");
    scanf("%d", &num1);

    printf("Enter numbers 2 : ");
    scanf("%d", &num2);
    
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    printf("Division: %d\n", num1 / num2);
    printf("Modulo: %d\n", num1 % num2);

    return 0;
}

     
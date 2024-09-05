//12. WAP to find maximum number among 3 numbers using ternary operator
#include <stdio.h>
int main() {
    int num1, num2, num3;

    printf("enter number 1: ");
    scanf("%d", &num1);

    printf("enter number 2: ");
    scanf("%d", &num2);

    printf("enter number 3: ");
    scanf("%d", &num3);

    (num1 > num2)?(num1 > num3) 
         ?printf("number 1 is Maximum")
         :printf("number 3 is maximum")
    :(num2 > num3)
         ?printf("number 2 is maximum")
         :printf("number 3 is maximum");


}
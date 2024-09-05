//14.WAP to find the largest of three numbers.

#include <stdio.h>
int main() {
    int num1, num2, num3;

    printf("enter number 1: ");
    scanf("%d", &num1);

    printf("enter number 2: ");
    scanf("%d", &num2);

    printf("enter number 3: ");
    scanf("%d", &num3);


    if (num1 > num2) {
        if(num1 > num3) {
            printf("num 1 is largest");
        }else{
            printf("number 3 is largest");
        }
    }else{
        if (num2 > num3) {
            printf("number 2 is greater");
        }else{
            printf("number 3 is greater");
        }
    }





}
//32. Accept 2 numbers and find out its sum check it size

#include <stdio.h>

int main() {

    int num1, num2, sum;

    printf("Enter the num1: ");
    scanf("%d", &num1);

    printf("Enter the num2: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum is : %d\n", sum);

    printf("The size of the sum is in bytes is:  %d", sizeof(sum));



}
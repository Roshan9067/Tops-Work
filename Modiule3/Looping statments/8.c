/* 8. Write a program to find out the max from given number (E.g., No: -1562 
Max number is 6) */

#include <stdio.h>
int main() {
    int max = 0, num, remainder;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num > 0) {
        remainder = num % 10;
        if(remainder > max){
            max = remainder;
        }
        num = num / 10;
    }

    printf("The maximum number is : %d", max);

    
}
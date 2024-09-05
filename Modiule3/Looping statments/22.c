// 23. C Program to Reverse a Number Using FOR Loop.

#include <stdio.h>
int main() {
    int num, reverse = 0;

    
        printf("Enter the number: ");
        scanf("%d", &num);

        for(;num != 0; num /= 10){
        reverse = reverse * 10 + num % 10;
       }
       printf("The reversed number is: %d", reverse);
       
}
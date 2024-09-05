/* 7. WAP to print number in reverse order e.g.: number = 64728
 ---> reverse = 82746 */


#include <stdio.h>
int main() {
    int num, reversed = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

     while(num > 0) {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("This is your reversed number: %d", reversed);

                  
}

    

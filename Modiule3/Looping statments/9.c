// 9. Write a program make a summation of given number (E.g., 1523 Ans: -11)

/* 8. Write a program to find out the max from given number (E.g., No: -1562 
Max number is 6) */

#include <stdio.h>
int main() {
    int sum = 0, num, remaider;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num < 0) {

        num = -num;
    }
     while (num > 0) {
        sum += num % 10; 
        num = num / 10;   
    }

    printf("The sum numbers is : %d", sum);



    
}
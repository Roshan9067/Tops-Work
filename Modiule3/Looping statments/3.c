/* 3. WAP to take 10 no. Input from user find out below values 
a. How many Even numbers are there 
b. How many odd numbers are there 
c. Sum of even numbers 
d. Sum of odd numbers */

#include <stdio.h>

int main() {
    int num[10];
    int  odd=0, even=0, sum, a, sumeven = 0, sumodd = 0;

     for(a = 0; a < 10; a++) {
     printf("enter the number %d: ", a + 1);
     scanf("%d", &num[a]);
        if(num[a] % 2 == 0){
            even++;
            sumeven += num[a]; 
        }  
        else{
            odd++;
            sumodd += num[a];
        }
    }
    printf("\nThis is even: %d", even);
    printf("\nThis is odd: %d", odd); 
    printf("\nsum of even number is :%d", sumeven);
    printf("\nsum of odd number is :%d", sumodd);

    

}
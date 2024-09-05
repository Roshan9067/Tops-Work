/*21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
and without using 3rd variable */

#include <stdio.h>
int main() {
    int num1,num2,num3;

    printf("enter two number\n ");
    printf("Enter first number: ");
    scanf("%d", &num1);

     printf("Enter second number: ");
     scanf("%d", &num2);
     num3=num1;
     num1=num2;
     num2=num3;

     printf("swap numbers:%d, %d\n", num1, num2);


     printf("swap number without 3rd variable: ");

     num1=num1+num2;
     num2=num1-num2;
     num1=num1-num2;

     printf("%d, %d", num1, num2);


    

    

     return 0;


}
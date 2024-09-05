/* 4. WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement */

#include <stdio.h>
int main() {
    float num1, num2;
    char oprator;
    

    printf("Enter num1: ");
    scanf("%f", &num1);

    printf("Enter num2: ");
    scanf("%f", &num2); 

    printf("Enter oprator (+, -, *, /, %%): ");
    scanf("%s", &oprator);

    if (oprator == '+') {
        //printf("%d+%d=%d",num1,num2,num1+num2);
        printf("The sum of %.2f + %.2f is: %.2f", num1, num2,num1+num2);

    }else if (oprator == '-') {
        printf("The sub of %.2f - %.2f is: %.2f", num1, num2, num1 - num2);

    }else if (oprator == '*') {
        printf("The multi of %.2f * %.2f is: %.2f", num1, num2, num1 * num2);

    }else if (oprator == '/') {
        if (num2 != 0){
        printf("The division of %.2f * %.2f is: %.2f", num1, num2, num1 / num2);
    }else{
        printf("Enter valid number division with 0 is not allowed");
    }

    }else if (oprator == '%'){
        int num_1 = num1;
         int num_2 = num2;
        printf("The modulo of %d and %d is: %d", num_1, num_2, num_1 % num_2);
    }
    }




    















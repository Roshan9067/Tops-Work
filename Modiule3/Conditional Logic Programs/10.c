//10. WAP to check whether a number is negative, positive or zero.

#include <stdio.h>
int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("The number is a Zero");
    }else if (num > 0) {
        printf("The number is positive");
    }else if(num <= -1 ){
        printf("The number is negavtive");
    }else{
        printf("invalid number");
    }

}

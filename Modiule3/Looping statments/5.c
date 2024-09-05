// 5. WAP to print factorial of given number.

#include <stdio.h>
int main() {
    int a, num ;
    int factorial = 1;

    printf("Enter the number which you want factorial: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Negetive numbers factorial is not aloud:");
    }else{
        for(a = 1; a <= num; a++){
            factorial *= a;
            printf("The factorial of %d is : %d\n",num, factorial);
        }
    }


}
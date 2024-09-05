// 13.calculate the Factorial of a Given Number using while loop 

#include <stdio.h>

int main() {
    int num, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0){
    printf("Negetive number is not define");
    }else{
        int i = num;

        while(i > 0) {
            factorial *= i;
            i--;
        }
        printf("The factorial of %d is %d\n", num, factorial);
    }
    }
    


    

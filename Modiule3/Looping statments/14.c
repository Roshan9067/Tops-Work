//14.Accept 5 numbers from user and find those numbers factorials.

#include <stdio.h>

int main() {
    int num;
    int factorial = 1;
    int a;

    printf("\n\n");

    for (a = 0;a < 5; a++ ) {
        printf("Enter a number: ");
        scanf("%d", &num);
    }

    if(num < 0){
        printf("Negetive number is not define");
    }else{
        int i = num;

        while(i > 0) {
            factorial *= i;
            i--;
        }
    }

        printf("\n\n");
     for (a = 0;a < 5; a++) {
        printf("factorial of %d is %d\n", num, factorial);
     }

}
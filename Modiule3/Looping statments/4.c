// 4. WAP to print table up to given numbers.

#include <stdio.h>
int main() {
    int number, a , b;

    printf("\nEnrter the number which you want multiplication Table: ");
    scanf("%d", &number);

    for(a = 1; a <= number; a++) {
        printf("The multiplication Table of %d is given below:\n", a);
    

    for(b = 1; b <= 10; b++){
        printf("%d * %d = %d\n", a, b, a * b);
    }

    }

}
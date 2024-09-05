// 6. WAP to print Fibonacci series up to given numbers.

#include <stdio.h>

int main() {
    int num, a, first =0, second = 1, next;

    printf("enter the number of terms: ");
    scanf("%d", &num);

    printf("fibonacci series is: ");

    for (a = 0; a < num; a++) {
        if (a <= 1) {
            next = a;

        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }



}

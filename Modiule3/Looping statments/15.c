//15.Calculate sum of 10 numbers using of while loop


#include <stdio.h>
int main() {
    int num, sum = 0;
    int a = 0;

    printf("\n\n\n");

    while(a < 10) {
        printf("Enter number %d: ", a +1);
        scanf("%d", &num);

        sum += num;
        a++;
    }

    printf("The sum of 10 numer is: %d\n", sum);

}
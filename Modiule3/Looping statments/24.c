// 25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) 


#include <stdio.h>
int main() {
    int num, sum = 0;

    printf("enter the number: ");
    scanf("%d", &num);

    for(int a = 1; a <= num; a++){
        sum += a * a;
    }
    printf("The sum of series is %d\n", sum);
}
/* 17. Calculate 5 numbers from user and calculate number of even and odd using 
of while loop */

#include <stdio.h>
int main() {
    int num, odd = 0, even = 0, a = 0;

    while(a < 5) {
        printf("enter number %d: ", a + 1);
        scanf("%d", &num);

        if(num % 2 == 0) {
            even++;
        }else{
            odd++;
        }

        a++;
    }

    printf("The odd numbers are : %d\n", odd);
    printf("The even number are : %d\n", even);

} 
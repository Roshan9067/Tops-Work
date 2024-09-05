// 26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include <stdio.h>
int main () {
    int num , totalsum = 0;
    
    printf("enter the number: ");
    scanf("%d", &num);

    for(int a = 1; a <= num; a++){
        int sum = 0;
        for(int b = 1; b <= a; b++){
            sum += b;
        }
        totalsum += sum; 
    }
    printf("The sum of series is %d\n", totalsum);

}
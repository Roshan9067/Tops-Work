//5. Check Number Is Positive or Negative .

#include <stdio.h>
int main() {
    int m,n ;

    printf("Enter the intiger: ");
    scanf("%d", &m);

    n = 0;

    if(m > n) {
        printf("The intiger is positive");
    }else if(m < n) {
        printf("The intiger is negatve");
    }else if(m == n){
        printf("The intiger is neutral");
    }

}

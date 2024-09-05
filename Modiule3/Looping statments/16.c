//16. Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>
int main() {

    int sum = 0, num, a = 1;

    printf("enter a positive number: ");
    scanf("%d", &num);

    if(num < 1) {
        printf("It is invalid number plese enert any natural numer.");

    } else{
        while (a <= num) {
            sum += a;
            a++;
           
        }

        printf("Ther sum of natural number is %d is %d", num, sum);
    }
}
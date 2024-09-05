//18. Write a C program to calculate profit and loss on a transaction.

#include <stdio.h>
int main() {
    float profit, loss, s_p, c_p;

    printf("Enter the cost price: ");
    scanf("%f", &c_p);

    printf("Enter the selling price: ");
    scanf("%f", &s_p);

    profit = s_p - c_p;
    loss = c_p - s_p;

    
    if (s_p > c_p){
        printf("The profit is: %.2f", profit);
    }else{
        printf("The loss is : %.2f", loss);
    }
}
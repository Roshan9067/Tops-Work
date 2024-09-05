//25.Accept 5 expense from user and find average of expense

#include <stdio.h>

int main() {
    float exp_1, exp_2, exp_3, exp_4, exp_5, Average;
    
    printf("Enter expense 1:-\n ");
    scanf("%f", &exp_1);

    printf("Enter expense 2:-\n ");
    scanf("%f", &exp_2);

    printf("Enter expense 3:- \n");
    scanf("%f", &exp_3);

    printf("Enter expense 4:-\n ");
    scanf("%f", &exp_4);

    printf("Enter expense 5:-\n ");
    scanf("%f", &exp_5);

    Average = (exp_1 + exp_2 + exp_3 + exp_4 + exp_5) / 5;

    printf("Average of the total expenxe:- %.2f", Average);
}
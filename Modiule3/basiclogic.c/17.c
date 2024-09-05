//17. Calculate person’s insurance premium based on salary.


#include <stdio.h>
int main() {
    float salary, premium;
    float rate = 0.05; 

    printf("Enter your salary: ");
    scanf("%f", &salary);

    premium = salary * rate;

    printf("Your insurance premium is: %.2f\n", premium);

    return 0;
}

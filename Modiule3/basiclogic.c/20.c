/*20. Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary. */

#include <stdio.h>

int main() {
    float monthly_salary, insurance_premium, loan_installment;

    printf("Enter your monthly salary: ");
    scanf("%f", &monthly_salary);

    insurance_premium = (monthly_salary * 10) / 100;

    loan_installment = (monthly_salary * 10) / 100;

    printf("insurance_premium is :%.2f\n", insurance_premium);
    printf("loan_installment is :%.2f", loan_installment);

    return 0;


}


    








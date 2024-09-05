//24.Accept 5 employees name and salary and count average and total salary.
#include <stdio.h>

int main() {
    float E_salary1, E_salary2, E_salary3, E_salary4, E_salary5, Average;
    char  E_name1, E_name2, E_name3, E_name4, E_name5;
    
    printf("Enter 1:- employee name:\n ");
    scanf("%s", &E_name1);

    printf("Enter 1:- employee salary\n");
    scanf("%f", &E_salary1);

    printf("Enter 2:- employee name:\n ");
    scanf("%s", &E_name2);

    printf("Enter 2:- employee salary\n");
    scanf("%f", &E_salary2);

    printf("Enter 3:- employee name:\n ");
    scanf("%s", &E_name3);

    printf("Enter 3:- employee salary\n");
    scanf("%f", &E_salary3);

    printf("Enter 4:- employee name:\n ");
    scanf("%s", &E_name4);

    printf("Enter 4:- employee salary\n");
    scanf("%f", &E_salary4);

    printf("Enter 5:- employee name:\n ");
    scanf("%s", &E_name5);

    printf("Enter 5:- employee salary\n");
    scanf("%f", &E_salary5); 

    Average =(E_salary1+E_salary2+E_salary3+E_salary4+E_salary5) / 5;

    printf("average and total salary is:-%.2f", Average );








}

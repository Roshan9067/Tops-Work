/* 21. Write a C program to input basic salary of an employee and calculateits 
Gross salary according to following: 
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95%  */

#include <stdio.h>
int main() {
    int basic, hra, da, gross;

    printf("Enter your basic salary: ");
    scanf("%d", &basic);

    gross = basic + hra + da;

    if(basic <= 10000){
       hra = (basic * 20) /100;
       da = (basic * 80) / 100;
       gross = basic + hra + da;
             printf("The Total gross salary is : %d", gross);

    }else if(basic <= 20000){
             hra = (basic * 25) /100;
             da = (basic * 90) / 100;
             gross = basic + hra + da;
                 printf("The Total gross salary is : %d", gross);

    }else if(basic > 20000){
             hra = (basic * 30) /100;
             da = (basic * 95) / 100;
             gross = basic + hra + da;
                 printf("The Total gross salary is : %d", gross);
    }


}


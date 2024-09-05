/* 19. Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow : 
Unit Charge/unit 
upto 350 @1.20 
350 and above but less than 600 @1.50 
600 and above but less than 800 @1.80 
800 and above @2.00 
If bill exceeds Rs. 800 then a surcharge of 18% will be charged and 
the minimum bill should be of Rs. 256/- */

#include <stdio.h>
int main() {
    float unit, id, total, charge_per_unit, total_1, surcharge;
    char name;

    printf("Enter the customer ID : ");
    scanf("%f", &id);
   
    printf("Enter the customer Name : ");
    scanf("%s", &name);

    printf("Enter the unit Used : ");
    scanf("%f", &unit);

    if(unit > 0 && unit <=350){
        charge_per_unit = 1.20;
        total = charge_per_unit * unit;
        printf("The Electrycity bill of this month is: %.2f", total);

    }else if (unit > 350 && unit <= 600){
        charge_per_unit = 1.50;
        total = charge_per_unit * unit;
        printf("The Electrycity bill of this month is: %.2f", total);

     }else if (unit > 600 && unit <= 800){
        charge_per_unit = 1.80;
        total = charge_per_unit * unit;
        printf("The Electrycity bill of this month is: %.2f", total);

     }else if (unit >= 800){
        charge_per_unit = 2.00;
        total = charge_per_unit * unit ;
        surcharge =( total * 18 )/ 100;
        total_1 = total + surcharge;
        printf("The Electrycity bill of this month is: %.2f", total_1);

     }

}
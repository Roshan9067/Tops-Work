/* 25. Write a C program to input electricity unit charges and calculate total 
electricity bill according to the given condition: 
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit 
An additional surcharge of 20% is added to the bill
*/

#include <stdio.h>
int main() {

    float sur_caharge, totalbill, bill,  unit;
    

    printf("Enter the Unit Used: ");
    scanf("%f", &unit);

     sur_caharge = (bill * 20) / 100;
     totalbill = bill + sur_caharge;

    if (unit <= 50){
        bill = unit * 0.50;
    }else if(unit <= 150){
        bill = (50 * 0.50) + ((unit - 50) * 0.75);
    }else if(unit <= 250){
        bill = (50 * 0.50) + (100 * 0.75) + ((unit - 150) * 1.20);
    }else if(unit > 250){
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
    }

     sur_caharge = bill * 0.20;
     totalbill = bill + sur_caharge;
     printf("This month electricity bill is: %.2f", totalbill);
}
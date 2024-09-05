/* 22. Calculate compound interest (Compound Interest formula: 
a. Formula to calculate compound interest annually is given by: 
Amount= P(1 + R/100)t 
b. Compound Interest = Amount – P */

#include <stdio.h>
#include <math.h>


int main() {
	float Amount, Principal, rate, time,CI;
	
	printf("Enter the amount: ");
	scanf("%f", &Principal);


    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter number of years: ");
    scanf("%f", &time);

    Amount = Principal * pow(1 + rate/100,time);
    CI = Amount - Principal;

    printf("Total amount is: %f\n", Amount);
    printf("Compound interest is :%f", CI);

 return 0;

}

   

   



    

   









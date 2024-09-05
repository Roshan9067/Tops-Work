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

   

   



    

   









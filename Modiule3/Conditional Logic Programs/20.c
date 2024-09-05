/* 20. Write a program in C to read any Month Number in integer and display the 
number of days for this month. */

#include <stdio.h>
int main() {
    int month;

    printf("Enter the month betwwen 1 to 12: ");
    scanf("%d", &month);

    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ) {
        printf(" This month has a total 31 day.");
    }else if(month == 2){
        printf("This month has a Total 28 days in leap year or 29 day without leap year.");
    }else if(month == 4 || month == 6 || month == 9 || month == 11){
        printf("This month has a Total 30days.");
    }else{
        printf("invalid month");
    }
    
    
    
    
    
    
}
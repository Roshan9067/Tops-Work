/* 16. Write a C program to read temperature in centigrade and display a suitable 
message according to the temperature state below: 
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot 
Temp >=40 then Its Very Hot. */

#include <stdio.h>
int main() {
    float Temp;

    printf("Enter the temprature in centigrade: ");
    scanf("%f",&Temp);

    if (Temp < 0){
        printf("This is freezing weather ");
    }else if (Temp < 10){
        printf("This is very cold weather");
    }else if (Temp < 20){
        printf("This is cold weather");
    }else if (Temp < 30){
        printf("This is Normal weather");
    }else if (Temp < 40){
        printf("This is Hot weather");
    }else{
        printf("This is Very hot weather");
    }
            

}
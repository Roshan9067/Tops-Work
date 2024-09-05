/* 8. WAP to accept the height of a person in centimeters and categorize the 
person according to their height. */

#include <stdio.h>
int main() {
    float height;

    printf("Enter the height: ");
    scanf("%f", &height);

    if (height <= 0) {
        printf("The height is below average");
    }else if(height <= 145) {
        printf("You are short");
    }else if(height >=145 && height <= 160) {
        printf("Your height is average");
    }else if(height >= 160 && height <= 190) {
        printf("You are tall");
    }else{
        printf("you are very tall");
    }



}
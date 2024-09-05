/* 17. Write a C program to check whether a triangle can be formed with the given 
values for the angles.*/

#include <stdio.h>
int main() {
    int angle1, angle2, angle3, triangle;

    printf("Enter the value angle 1: ");
    scanf("%d", &angle1);

    printf("Enter the value angle 2: ");
    scanf("%d", &angle2);

    printf("Enter the value angle 3: ");
    scanf("%d", &angle3);

    triangle =  angle1 +  angle2 +  angle3;

    if(triangle == 180){
        printf("This angle is form a triangle", triangle);
    }else{
        printf("This angle is not form a triangle");
    }




}
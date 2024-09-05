//Find circumference of Triangle formula : triangle = a + b + c .


#include <stdio.h>
int main() {
    float side1, side2, side3, circumference;

    printf("Enter the length of the first side of the triangle: ");
    scanf("%f", &side1);

    printf("Enter the length of the second side of the triangle: ");
    scanf("%f", &side2);

    printf("Enter the length of the third side of the triangle: ");
    scanf("%f", &side3);

    
    circumference = side1 + side2 + side3;

    printf("The circumference of the triangle is: %.2f\n", circumference);

    return 0;
}

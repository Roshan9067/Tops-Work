//5. Find Area of Cube formula : a = 6a2

#include <stdio.h>
int main() {
    float sideLength, surfaceArea;

    printf("Enter the length of the side of the cube: ");
    scanf("%f", &sideLength);

    surfaceArea = 6 * sideLength * sideLength;
    printf("The surface area of the cube is: %.2f\n", surfaceArea);

    return 0;
}

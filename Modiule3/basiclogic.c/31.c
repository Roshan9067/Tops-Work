//31. Convert kilometers into meters.

#include <stdio.h>

int main() {
    float km, m;

    printf("Enter the kilometers: ");
    scanf("%f", &km);

    m = km * 1000;

    printf("Convert kilometers into meters:-%.2f", m);
}
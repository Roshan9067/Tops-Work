/*
5. Write a program in C to compare two strings without using string library 
functions.
*/

#include <stdio.h>

int main() {

    char str1[50], str2[50];
    
    printf("Enter String 1: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter String 2: ");
    fgets(str2, sizeof(str2), stdin);

    int i = 0;
    while (str1[i] == str2[i] && str1[i] != '\n') i++;

    int result = str1[i] - str2[i];

    if (result == 0)
        printf("The strings are equal.\n");
    else
        printf("String 1 is %s than String 2.\n", result > 0 ? "greater" : "less");

    return 0;
}

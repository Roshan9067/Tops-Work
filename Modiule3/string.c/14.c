// 14.Write a program in C to combine two strings manually 

#include <stdio.h>
int main() {
    char str1[100], str2[50];  
    int i = 0, j = 0;

    printf("Enter First String: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter Second String: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str1[i] != '\n') {
        i++;
    }

    while (str2[j] != '\0' && str2[j] != '\n') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    
    str1[i] = '\0';
    printf("Combined String: %s\n", str1);

}

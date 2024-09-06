// 10. Write a program in C to extract a substring from a given string 

#include <stdio.h>
#include <string.h>

int main() {
    char str[50], substr[50];
    int start_idx, end_idx, j = 0;

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter Start  Index: ");
    scanf("%d", &start_idx);

    printf("Enter End Index: ");
    scanf("%d", &end_idx);

    if (start_idx < 0 || end_idx >= strlen(str) - 1)
        printf("Invalid index\n");
    else {
        for (int i = start_idx; i <= end_idx; i++)
            substr[j++] = str[i];
        substr[j] = '\0'; 
        printf("Substring: %s\n", substr);
    }

    return 0;
}

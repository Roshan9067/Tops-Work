// 3. Write a program in C to print individual characters of a string in reverse order 


#include<stdio.h>
#include <string.h>
int main(){
    char str[50];
    printf("Enter String:");
    fgets(str,sizeof(str),stdin);

    int len = strlen(str);

    printf("In Reverse:");
    for(int a = len-2; a >= 0; a--){
        printf("%c ",str[a]);
    }
}
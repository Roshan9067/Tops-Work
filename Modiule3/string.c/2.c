// 2. Write a program in C to separate individual characters from a string.

#include <stdio.h>
#include <string.h>
int main(){
    char string[50];
    printf("Enter String : ");
    fgets(string,sizeof(string),stdin);

    int len = strlen(string);

    for(int a = 0; a < len-1 ; a++){
        printf("char %d: %c \n", a+1, string[a]);
    }
}
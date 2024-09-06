// 9.Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>
#include <string.h>
int main(){

    char str[100];

    printf("Enter String:");
    fgets(str,sizeof(str),stdin);

    int len = strlen(str);
    int Charters = 0;
   
    
    for(int i = 0 ; str[i] != '\0' ;i++){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
            Charters++;
        }
        
    }
        printf("character : %d \n ", Charters);
}
/*
13. WAP to accept 5 numbers from user and check entered number is even or odd 
using of array.
*/


#include <stdio.h>
int main(){
    int num[5];
    for(int a = 0 ; a < 5 ; a++){
        printf("Enter Number %d : ",a+1);
        scanf("%d",&num[a]);
    }
    for(int a = 0; a < 5 ; a++){
        if(num[a]%2 == 0){
            printf("%d:- %d - Even\n",a + 1, num[a]);
        }
        else{
            printf("%d:- %d - Odd\n",a + 1, num[a]);
        }
    }
}
/*
11. WAP to accept 5 numbers from user and display in reverse order using for 
loop and array
*/



#include <stdio.h>
int main(){
    int arr[5];
    int a;
    int b = 0;
    for( a = 0 ; a<5 ; a++){
        printf("Enter Number %d : ", a+1);
        scanf("%d",&arr[a]);
    }
    int reverse[5];
    for( a = 4 ; a >= 0 ; a--){
            reverse[b] = arr[a];
            b++;
        }
    printf("In Reverse:");
    for(a = 0; a < 5; a++){
        printf("%d ",reverse[a]);
    }
}
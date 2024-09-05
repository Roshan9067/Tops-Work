//1. Write a program to find out the max number from given array using function.

// Write a program to find out the max number from given array using function

#include <stdio.h>
int max(int array[],int siz){
    int max = 0;
    for(int a = 0;a < siz; a++){
        if(array[a] > max){
            max = array[a];
        }
    }
    return max;
}
int main(){
    int size;
    printf("Enter the size of Array :");
    scanf("%d",&size);
    int arr[size];
    for(int a = 0 ;a < size; a++){
        printf("Enter the Element %d : ",a+1);
        scanf("%d",&arr[a]);
    }
    printf("The Array Element:");
    for(int a = 0 ;a < size; a++){
        printf("%d ",arr[a]);
    }       
    printf("\nMax number is %d ",max(arr,size));
}


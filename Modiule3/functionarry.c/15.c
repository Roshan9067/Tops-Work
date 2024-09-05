// 15. Store 5 numbers in array and sort it in ascending order 


#include <stdio.h>
int main(){
    int num[5];
    for(int z = 0; z < 5 ; z++){
        printf("Enter Number %d : ", z+1);
        scanf("%d",&num[z]);
    }
    for(int z = 0; z < 4; z++){
        for(int x =0 ; x < 5 ; x++){
            if(num[z] > num[z+1]){
                int temp = num[z];
                num[z] = num[z+1];
                num[z+1] = temp;
            }
        }
    }
    printf("Sorted Array:");
    for(int z = 0 ; z < 5 ; z++){
        printf("%d ",&num[z]);
    }
}
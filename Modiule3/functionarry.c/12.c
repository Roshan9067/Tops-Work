// 12. WAP to accept 5 students name and store it in array 

#include <stdio.h>
int main(){
    char std_name[100];
    for(int a = 0; a<5; a++){
        printf("Enter Name %d:",a+1);
        scanf("%s",&std_name[a]);
    }
}
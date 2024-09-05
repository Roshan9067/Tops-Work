/* 22. Accept 3 numbers from user using while loop and check each numbers 
palindrome */

#include <stdio.h>
int main() {
    int num, realnum, reversed, n = 3;
   
   while(n > 0){
 printf("Enter the number: ");
 
    scanf("%d", &num);
      realnum = num;
      reversed=0;
        while(num > 0) {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("Reverse = %d",reversed);
    if(reversed == realnum){
        printf("\nThe %d is palindrome", realnum);
    }else{
        printf("\nThe %d is not a palindrome",realnum);
    }
    printf("\n");
    
    n--;
    
    }
}

    

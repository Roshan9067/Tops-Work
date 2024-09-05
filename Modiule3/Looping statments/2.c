//2. WAP to accept 5 numbers from user and display all numbers

#include <stdio.h>

int main() {
    int num[5];
    int a;

   for(a = 0; a < 5; a++) {
    printf("enter number %d: ", a + 1);
    scanf("%d", &num[a]);
   }


    printf("\nYour Enterd numbers are \n");
   for (a = 0; a < 5; a++) {
    printf("\n%d", num[a]);
   }

    
}

/* 9. C Program to Check Uppercase or Lowercase or Digit or Special 
Character 
*/
#include <stdio.h>

int main() {
    char ch;
    

    printf("Enter any number, alphabets and special characters: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("The Alphabet is uppercase letter", ch);
    }else if (ch >= 'a' && ch <= 'z') {
         printf("The Alphabet is lowercase letter", ch);
    }else if (ch >= '0' && ch <= '9') {
         printf("This is a digit", ch);
    }else{
         printf("This is a special character", ch);
    }


}

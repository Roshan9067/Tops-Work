// 6. Find the Character Is Vowel or Not .

#include <stdio.h>

int main() {
    char ch;

    printf("Enter the alphabet: ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("An alphabet is vowel");
     }else{
        printf("An alphabet is consonent");
     }
}

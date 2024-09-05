// 4. Write a program in C to count the total number of words in a string. 

#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    printf("Enter the string to count words: ");
    fgets(string, sizeof(string), stdin); 

    int len = strlen(string);
    int in_word = 0;
    int word = 0;
    int i;

    for(i = 0; i < len; i++){
        if (string[i] == ' ' || string[i] == '\n') {
            in_word = 0;
        } else if (!in_word) { 
            in_word = 1;
            word++;
        }
    }
    
    printf("Total number of words: %d\n", word);
    
}

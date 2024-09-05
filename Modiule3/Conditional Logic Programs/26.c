/* 26. WAP to show 
i. Monday to Sunday using switch case 
ii. Vowel or Consonant using switch case */


//i. Monday to Sunday using switch case .

#include <stdio.h>
int main() {
    int weeknumber;

    printf("Enter the number between 1 to 7: ");
    scanf("%d", &weeknumber);
    
    switch (weeknumber){
    case 1:
    printf("Monday");
    break;

     case 2:
    printf("Tuesday");
    break;

     case 3:
    printf("Wednesday");
    break;

     case 4:
    printf("Thursday");
    break;

     case 5:
    printf("Friday");
    break;

     case 6:
    printf("Saturday");
    break;

     case 7:
    printf("Sunday");
    break;

    default :
    printf("Invalid Day number Enter number between 1 to 7");
    break;


    }

} 

/*-----------------------------------------------------------------------------------------------------------------*/

//ii. Vowel or Consonant using switch case 

#include <stdio.h>
int main() {
    char letter;

    printf("Enter any alphanbet letter: ");
    scanf("%c", &letter);

    switch (letter) {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
    printf("The letter is Vowel\n");
    break;
    
    default:
    printf("The letter is consonent\n");
        break;
    }


}
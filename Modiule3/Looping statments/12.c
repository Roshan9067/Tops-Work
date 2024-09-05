// 12. Program of Armstrong Number in C Using For Loop & While Loop.

#include <stdio.h>

int main() {
    int num, digit, a = 0, sum = 0, temp;

    
    printf("Enter any number: ");
    scanf("%d", &num);

    temp = num;


    for (a = 0; temp > 0; a++) {
        temp /= 10;
    }

    temp = num;

    for (; temp > 0; temp /= 10) {
        digit = temp % 10;
        
    
        int power = 1;
        for (int i = 0; i < a; i++) {
            power *= digit;
        }
        
        sum += power;
    }

    
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

   
}

//__________________________________________________________________________________________________


// Using while loop.

#include <stdio.h>

int main() {
    int num, n, result = 0;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    
    n = num;
    while (n > 0) {
        count++;
        n /= 10;
    }

    
    n = num;
    while (n > 0) {
        int digit = n / 10;
        int power = 1;

    
        for (int i = 0; i < count; i++) {
            power *= n - (digit * 10);  
        }
        result += power;
        n = digit;  
    }


    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}


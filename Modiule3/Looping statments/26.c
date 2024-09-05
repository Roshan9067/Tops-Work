//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n


#include <stdio.h>

int main() {
    int num;
    float sum = 0.0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        
        if (i % 2 == 0) {
            sum -= (float)i / (i + 1);
            }else{  
            sum += (float)i / (i + 1);
            }  
        
    }

    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}

       
    





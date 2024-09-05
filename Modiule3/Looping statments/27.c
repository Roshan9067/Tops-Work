// 28. 1 2 3 6 9 18 27 54...

#include <stdio.h>

int main() {
    int num;
    int even = 2; 
    int odd = 1; 

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Series: ");

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            printf("%d ", even);
            even *= 3;
        } else {
            printf("%d ", odd);
            odd *= 3;
        }
    }

    printf("\n");

}

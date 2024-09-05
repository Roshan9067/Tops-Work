// 11. Accept 5 names from user at run time.

#include <stdio.h>
int main() {
    char name[5][20];
    int a;


    for(a = 0; a < 5; a++){
    printf("Enter the name: ");
    scanf("%s", &name[a]);
    }

    printf("\n\nNames you entered are\n");
    for(a = 0; a < 5; a++){
        printf("%d:  %s\n",a + 1, name[a]);
    }

    

    
}

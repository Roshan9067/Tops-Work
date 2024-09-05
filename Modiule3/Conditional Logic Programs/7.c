//7. Accept marks from user and check pass or fail .

#include <stdio.h>
int main() {
    int marks;
     

    printf("Enter Total marks: ");
    scanf("%d", &marks);

    if (marks > 100 || marks < 0){
        printf("invalid marks **");
    }else if (marks >= 33){
        printf("The student is passed");
    }else{
        printf("The student is failed");
    }
    


}
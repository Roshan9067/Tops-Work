/* a. information -print and display empno, empname, address 
andage */

#include <stdio.h>
#include <string.h>
struct emp{
    int empno;
    char empname[20];
    char empadd[20];
    int empage;
};

union em{
    int empno;
    char empname[20];
    char empadd[20];
    int empage;
};

int main() {
    struct emp a;
    union em b;
    
    
        printf("Enter employee number:");
        scanf("%d",&a.empno);
        b.empno=a.empno;

        printf("Enter employee name:");
        scanf("%s",&a.empname);
        int len = strlen(a.empname);
        for(int i = 0;i < len - 1; i++){
             b.empname[i]=a.empname[i]; 
        }
        
        printf("Enter employee Address:");
        scanf("%s",&a.empadd);
        len = strlen(a.empadd);
        for(int i = 0; i < len -1; i++){
             b.empadd[i]=a.empadd[i];
        }
        

        printf("Enter employee age:");
        scanf("%d",&a.empage);   
        b.empage=a.empage; 

    printf("\n Employee details:\n");

    printf("\nemployee %d",a);
    printf("\nemployee number : %d", a.empno);
    printf("\nemployee name : %s", a.empname);
    printf("\nemployee address : %s", a.empadd);
    printf("\nemployee age : %d", a.empage);
    printf("\n\n\n\n");

    printf("\n Employee details:\n");

    printf("\nemployee %d",a);
    printf("\nemployee number : %d", b.empno);
    printf("\nemployee name : %s", b.empname);
    printf("\nemployee address : %s", b.empadd);
    printf("\nemployee age : %d", b.empage);


}


//8. WAP to reverse a string and check that the string is palindrome or not.



#include <string.h>
int main(){
    char str[50];
    printf("Enter String: ");
    scanf("%s",str);
    int len = strlen(str);
    // printf("%d\n",len);
    char rev[50];
    int j = 0;
    for(int i = len-1 ; i >= 0;i--){
        rev[j]=str[i];
        j++;
    }
     rev[j] = '\0';
    int rev_len = strlen(rev);
    printf("Reverse : %s\n",rev);
    
    int result = strcmp(str, rev);
    // printf("%d",result);
    if(result == 0){
         printf("Palindrom");
    }
    else{
        printf("Not Palindrom");
    }
}



/*b. Write a program of structure for five employee that 
provides the following information -print and display 
empno, empname, address andage */

/*
#include <stdio.h>
struct emp{
    int empno;
    char empname[20];
    char empadd[20];
    int empage;
};

int main() {
    struct emp a[5];
    int i;
    
    for(i=0; i<5;i++){
        printf("Enter employee number:");
        scanf("%d",&a[i].empno);

         printf("Enter employee name:");
        scanf("%s",&a[i].empname); 

        printf("Enter employee Address:");
        scanf("%s",&a[i].empadd);

        printf("Enter employee age:");
        scanf("%d",&a[i].empage);    
    }

    printf("\n Employee details:\n");
    for(i=0; i<5;i++){
    printf("\n\nemployee %d",i + 1);
    printf("\nemployee number : %d", a[i].empno);
    printf("\nemployee name : %s", a[i].empname);
    printf("\nemployee address : %s", a[i].empadd);
    printf("\nemployee age : %d", a[i].empage);
    }

}

*/


/* a. information -print and display empno, empname, address 
andage */ 


/*
#include <stdio.h>
struct emp{
    int empno;
    char empname[20];
    char empadd[20];
    int empage;
};

int main() {
    struct emp a;
    
    
    
        printf("Enter employee number:");
        scanf("%d",&a.empno);

         printf("Enter employee name:");
        scanf("%s",&a.empname); 

        printf("Enter employee Address:");
        scanf("%s",&a.empadd);

        printf("Enter employee age:");
        scanf("%d",&a.empage);    
    

    printf("\n Employee details:\n");

    printf("\nemployee %d",a);
    printf("\nemployee number : %d", a.empno);
    printf("\nemployee name : %s", a.empname);
    printf("\nemployee address : %s", a.empadd);
    printf("\nemployee age : %d", a.empage);


}

*/

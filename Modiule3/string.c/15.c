// 15. Write a program in C to find the largest and smallest words in a string.

#include<stdio.h>
#include<string.h>
int  main(){

    char str[100],word[10][20];
    int i,j=0,k=0,m=0,n=0,max,min;

    printf("Enter sentence:");
    gets(str);

    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            word[k][j]='\0';
            k++;
            j=0;
        }
        else{
            word[k][j]=str[i];
            j++;
        }
    }
    word[k][j]='\0';
    max=strlen(word[0]);
    min=strlen(word[0]);
    for(i=0;i<=k;i++)
    {
        if(max<strlen(word[i]))
        {
            m=i;
        }
        if(min>strlen(word[i]))
        {
            n=i;
        }
    }

    printf("\nLargest word : %s \nsmallest word : %s",word[m],word[n]);
}
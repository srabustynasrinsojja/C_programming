#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char a[MAX_SIZE],b[MAX_SIZE];
    int i,j,len=0;
    printf("Enter a string:");
    gets(a);
    for(i=0;a[i]!='\0';i++){
       len++;
    }

    for(j=0,i=len-1;i>=0;i--,j++){
        b[j]=a[i];
    }
    b[j]='\0';

    printf("reversed of  %s  is: %s",a,b);
    return 0;
}


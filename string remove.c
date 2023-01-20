#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char a[MAX_SIZE];
    int i,j;
    printf("Enter a string:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(!(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z' || a[i]=='\0' || a[i]==' '))
        for(j=i;a[j]!='\0';j++){
            a[j]=a[j+1];
        }
        a[j]='\0';


    }
    printf(" %s ",a);
    return 0;

}


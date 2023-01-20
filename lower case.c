#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char a[MAX_SIZE];
    int i;
    printf("Enter a string:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            a[i]=a[i]+32;
    }
    printf("lower case  is %s ",a);
    return 0;

}



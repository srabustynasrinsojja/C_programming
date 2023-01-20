#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char a[MAX_SIZE],b[MAX_SIZE];
    int i;
    printf("Enter a string:");
    gets(a);
    printf("Enter onother string:");
    gets(b);

    for(i=0;a[i]!='\0';i++);
   printf("\nSize of %s  is %d\n",a,i);
     for(i=0;b[i]!='\0';i++);
   printf("Size of %s  is %d",b,i);
    return 0;

}

#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char a[MAX_SIZE],u;
    int i,count=0;
    printf("Enter a string:");
    gets(a);
    printf("Enter a character:");
    scanf("%c",&u);
    for(i=0;a[i]!='\0';i++)
    {
      if(a[i]==u)
        count++;
    }
    printf(" %d",count);
    return 0;

}

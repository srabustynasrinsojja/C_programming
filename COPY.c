#include<stdio.h>
#define MAX_SIZE 100
int main()
{
char a[MAX_SIZE],b[MAX_SIZE],c[MAX_SIZE];
int i,j;
 printf("Enter 1st string:");
 gets(a);
 printf("Enter 2nd string:");
 gets(b);
  for(i=0,j=0;a[i]!='\0';i++,j++)
   {
    c[j]=a[i];
   }
    for(i=0;b[i]!='\0';i++,j++)
   {
    c[j]=b[i];
   }
   c[j]='\0';
   printf("%s",c);
   return 0;
}


#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    char a[MAX_SIZE],b[MAX_SIZE];
    int i,ck;
    printf("Enter a string: ");
    gets(a);
    printf("Enter another string: ");
    gets(b);
    ck=1;
    i=0;
    while(a[i]!='\0' || b[i]!='\0'){
            if(a[i]!=b[i]){
                ck=0;
                break;
            }
            i++;
    }
   if(ck==1)
    printf("Equal\n");
   else
    printf("Not Equal\n");

    return 0;
}

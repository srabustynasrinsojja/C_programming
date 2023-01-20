#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[30]="Faria";
    char str2[30];
    int i=0,len=0,j,d;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';

    printf("Str1 =%s\n",str1);
    printf("Str2 =%s\n",str2);
    d=strcmp(str1,str2);
    if(d==0)
        printf("strings are palinedrome");
        else
        printf("strings are not palinedrome");
    return 0;
}

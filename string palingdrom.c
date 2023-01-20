#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int len=0,i,j;
    printf("Enter any string: ");
    gets(str);

    while(str[i] != '\0')
    {i++;
    len++;
    //i= 0;
   // j = len-1;
    }
    for(j=0,i=len-1;str[i]!='\0';i--,j++)
    {
        str[j]= str[i];
    }
    str[j]='\0';
    for(j=0,i=0;str[i]!='\0';i++,j++)
    {
        if(str[i] != str[j])
        printf("String is not Palindrome.");
            break;
        }

        printf("String is Palindrome.");


    return 0;
}

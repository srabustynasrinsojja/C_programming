
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char text1[MAX_SIZE];
    char text2[MAX_SIZE];
    int i;
    printf("Enter 1st string:");
    gets(text1);
    for(i=0; text1[i]!= '\0';i++)
    {
       text2[i] = text1[i];
    }
    text2[i]='\0';
    printf("String no1:%s\n",text1);
    printf("String no2:%s\n",text2);
    return 0;
}

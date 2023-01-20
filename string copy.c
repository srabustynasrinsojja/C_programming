#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char a[MAX_SIZE],b[MAX_SIZE];
    printf("Enter 1st  string:");
    gets(a);
    printf("Enter 2nd  string:");
    gets(b);
    printf("Your entered strings are:\n %s\n %s  ",a,b);
    return 0;

}


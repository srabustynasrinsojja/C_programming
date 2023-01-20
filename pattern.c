#include<stdio.h>
int main()
{
    int row,col,n;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
       for(col=row;col<n;col++)
       {
           printf(" ");
       }
        for(col=1;col<=row;col++)
        {
          // if(col==row || col==1 || row==n)
            printf("*");
         //   else
          //  printf(" ");
        }
        for(col=1;col<=row-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}

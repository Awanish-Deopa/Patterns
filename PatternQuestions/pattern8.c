#include<stdio.h>
int main()
{
    int i,j,k;
    int n=5;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        k=n-i;
        for(j=0;j<n-i;j++)
            printf("%d",k--);
     printf("\n");
    }
}


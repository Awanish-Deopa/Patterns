#include<stdio.h>
int main()
{
    int i,j,k;
    int n=5;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
            printf(" ");
        k=i+1;
        for(j=0;j<=i;j++)
            printf("%d",k--);
     printf("\n");
    }
}

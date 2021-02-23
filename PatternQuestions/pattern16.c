#include<stdio.h>
int main()
{
    int i,j,k;
    int n=3;
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=1;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
        for(k=i-1;k>=1;k--)
            printf("%d",k);

     printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
            printf(" ");
        for(k=1;k<=(n-i);k++)
            printf("%d",k);
        for(k=n-i-1;k>=1;k--)
            printf("%d",k);
     printf("\n");
    }
}



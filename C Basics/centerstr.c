#include<stdio.h>
int main()
{
    int i,j,k,n=6;

    // printf("Enter a number:");
    // scanf("%d",&n);

    for(i=5;i<=n;i--)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=n+2;j<=i;j++)
            {
                printf("*");
            }
        printf("\n");
    }
}
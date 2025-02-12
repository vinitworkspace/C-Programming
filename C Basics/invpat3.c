#include<stdio.h>
int main()
{
    int i,j,k,n;

    printf("Enter A Number");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        printf("#");
        for(j=2;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
    int i,k,n;

    printf("Enter A Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
         printf("*  ");
        for(k=2;k<=n;k++)
        {
            if(i==n||i==1)
            {
            printf("* ");
            }
            else
            {
                printf("  ");
            }
        
        // printf("*  ");
        // for(j=1;j<=n-1;j++)
        // {
        //     printf("  ");
        // }
        // }
        }
        printf("*\n");
    }
}
#include<stdio.h>
int main()
{
    int sum=0,n,i;

    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n)
    {
        printf("Perfect Number!!");
    }
    else
    {
        printf("Not a Perfect Number!!");
    }
}
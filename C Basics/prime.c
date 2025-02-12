#include<stdio.h>
#include <math.h>
int main()
{
    int n,i,cnt=0;

    printf("Enter A Number:");
    scanf("%d",&n);

    for(i=2;i<=n/i;i++)
    {
        if(n%i==0)
            cnt++;
    }
    if(cnt==0) 
    {
        printf("Prime Number !!");
    }
    else
    {
        printf("Not a prime number !!");
    }
}
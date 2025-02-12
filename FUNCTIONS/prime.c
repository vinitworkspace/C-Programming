#include<stdio.h>
int prime(int n)
{
    if(n%1==0 && n%n==0)
    {
        printf("PRIME NUMBER");
    }
    else
    {
        printf("NON PRIME ");
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    prime(n);
}

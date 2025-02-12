#include<stdio.h>

int main()
{
    int temp,rev=0,n;

    printf("Enter a number:");
    scanf("%d",&n);

    temp=n;
    while(n>0)
    {
    int rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    }
    if(temp==rev)
    {
        printf("IS A PALINDROME NUMBER ");
    }
    else
    {
        printf("Not a palindrome number");
    }
}
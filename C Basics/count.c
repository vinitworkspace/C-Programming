#include<stdio.h>
int main()
{
    int cnt=0,n;
    printf("Enter a Number:");
    scanf("%d",&n);

    while(n>0)
    {
        cnt++;
        n=n/10;
    }
    printf("Count of Digit is:%d",cnt);
}
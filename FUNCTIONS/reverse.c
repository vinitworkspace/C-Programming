#include<stdio.h>
int rev(int n)
{
    if(n>0)
    {
    int reverse=n%10;
    n=n/10;
    printf("%d",reverse);
    rev(n);
    }
    
}
int main()
{
    int n;

    printf("Enter A Number:");
    scanf("%d",&n);//546
    rev(n);
}
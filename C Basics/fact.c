// what is time complexity?
// what is space complexity?

#include<stdio.h>
int main()
{
    int fact=1,n,i;
    printf("Enter A Number:");
    scanf("%d",&n);

    i=2;
    while(i<=n)
    {
        fact*=i;
        i++;
    }

    printf("Factorial is:%d",fact);

}
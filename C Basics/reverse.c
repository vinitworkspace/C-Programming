#include<Stdio.h>
int main()
{
    long rev=0,n;

    printf("Enter A Number:");
    scanf("%d",&n);

    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("The Reverse Number is:%d",rev);
}
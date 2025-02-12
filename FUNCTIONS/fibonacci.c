#include<stdio.h>
int fibonacci(int n)
{
    double a=0;
    double b=1;
    double next;
    for(int i=0;i<n;i++)
    {
        printf("%lf\n",a);
        next=a+b;
        a=b;
        b=next;
    }
}

   
int main()
{
    int n;
    printf("Enter A Number: ");
    scanf("%d",&n);
    fibonacci(n);
}

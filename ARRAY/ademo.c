#include<stdio.h>
int main()
{
    int a[100],i,n=6;

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n/2;i++)
    {
        int temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
}
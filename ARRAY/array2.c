#include<stdio.h>
int main()
{
    int a[100],i,n=5,sum=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        sum=sum+a[i];
    }
       printf("Sum of Array is:%d",sum);
    // for(i=0;i<n;i++)
    // {
     
    // }
    return 0;
}
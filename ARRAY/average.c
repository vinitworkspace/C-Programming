#include<stdio.h>
int main()
{
    int a[100],i,n,avg=0,sum=0;

    printf("Enter The Number Of Elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        sum=sum+a[i];
        avg=sum/n;
    }
    printf("The Average Of First Ten Number:%d",avg);
}
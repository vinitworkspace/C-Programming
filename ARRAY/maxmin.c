#include<stdio.h>
int main()
{
    int a[100],i,max,min,n;

    printf("Enter The Number of Elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        max=a[0];
        min=a[0];
    }

    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
        else if(min>a[i])
            min=a[i];
    }
    printf("Maximum number:%d \n Minimum Number:%d",max,min);

}
#include<stdio.h>
int main()
{
    int i,n=5,a[100];

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]%2==!0)
        {
            printf("\n%d",a[i]);
        }
    }
    return 0;
}
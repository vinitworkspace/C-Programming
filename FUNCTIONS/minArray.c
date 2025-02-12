#include<stdio.h>
#include"array.h"
int main()
{
    int a[100],n,i,min;

    printf("Enter A Number:");
    scanf("%d",&n);

    accept(a,n);

    min=a[0];

    for(i=0;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
    }

    printf("MIN Is:%d",min);

    return 0;
}

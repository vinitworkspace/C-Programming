#include<stdio.h>
int main()
{
    int max,i,n=5,a[100];


    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    max=a[0];

    for(i=0;i<n;i++)
        if(max<a[i])
        {
            max=a[i];
        }
        printf("\nMAX VALUE IS:%d",max);
        
    
    return 0;
}
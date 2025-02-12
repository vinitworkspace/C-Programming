#include<stdio.h>
int main()
{
    int min,i,n=5,a[100];


    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    min=a[0];

    for(i=0;i<n;i++)
        if(min>a[i])
        {
            min=a[i];
        }
        printf("\nMIN VALUE IS:%d",min);
        
    
    return 0;
}
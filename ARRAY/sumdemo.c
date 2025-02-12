#include<stdio.h>
int  main()
{
    int a[100],n,i,sum=0;


    printf("Enter the total number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        sum=sum+a[i];
    }
    printf("THE SUM OF ELEMENTS ARE :%d",sum);
}
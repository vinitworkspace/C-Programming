#include<stdio.h>
int main()
{
    int a[100],key,i,n,mid,low,high,j;


    printf("Enter a number: ");
    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                //swapping 
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    // for(i=0;i<n;i++)
    // {
    //     scanf("%d",&a[i]);
    // }
    printf("Enter the key to search: ");
    scanf("%d",&key);

    high=n-1;
    low=0;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("KEY FOUND !!");
            return 0;
        }
        else if(a[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    printf("NOT FOUND !!");
    return 0;
}
}
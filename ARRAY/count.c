#include<stdio.h>
int main()
{
    int a[100],i,n,cnt1=0,cnt2=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cnt1++;
        }
        else if(a[i]%2==!0)
        {
            cnt2++;
        }
        
    }
    printf("The Count of Even Digits:%d \n The Count Of Odd Digits:%d",cnt1,cnt2);
}
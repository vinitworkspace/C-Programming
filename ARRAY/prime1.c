#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],prime[100],i,j,n,pn=0;

    printf("Enter A Number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    for(i=0;i<n;i++)
    {
        int data=a[i];
        int flag=1;
        for(j=2;j<=sqrt(data);j++)
        {
            if(data%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            prime[pn]=data;
            pn++;
        }
    }
    if(pn>0)
    {
        for(i=0;i<pn;i++)
        printf("\n%d",prime[i]);
    }
    else
    printf("No Prime Number Present in array!!");

}
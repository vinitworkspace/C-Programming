#include<stdio.h>
int main()
{
    int a[100],i,j,n,key,pos;

    printf("Enter a number :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter A Position:");
    scanf("%d",&pos);
    

    if(pos >=0 && pos<=n)
    {
        printf("Enter A Value to insert : ");
        scanf("%d",&key);

        for(i=n;i>pos;i--)
            a[i]=a[i-1];
        a[pos-1]=key;
        n++;

        printf("\nAFTER INSERTION:");
        for(i=0;i<n;i++)
            printf("\n%d",a[i]);
    }
    else
    {
        printf("POSITION INVALID !!");
    }
    return 0;

    
}
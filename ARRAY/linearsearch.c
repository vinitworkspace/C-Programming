#include<stdio.h>
int main()
{
    int a[100],key,n,i;

    printf("Enter a number: ");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a number for search:");
    scanf("%d",&key);

    int flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }     
    }
    // if(flag==1)
    if(flag)
    {
        printf("FOUND !!");
    }
    else
    {
        printf("KEY NOT FOUND!!!");
    }
    return 0;
}
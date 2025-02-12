#include<stdio.h>
int main()
{
    int a[100],i,n,key,cnt=0;

    printf("Enter A Number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Accept A Number For Occurrence:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        cnt++;
    }
    if(cnt==0)
    {
    printf("%d NOT FOUND !!!",key);
    }
    else
    {
    printf("Occurrence of %d is %d",key,cnt);
    }
    return 0;
}
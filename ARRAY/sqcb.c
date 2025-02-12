#include<stdio.h>
int main()
{
    int n,a[100],square[100],cube[100],i;


    printf("Enter A Number:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        square[i]=a[i]*a[i];
        cube[i]=a[i]*a[i]*a[i];
    }
    printf("Sqaure root of array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",square[i]);
    }
    printf("Cube root of array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",cube[i]);
    }
}
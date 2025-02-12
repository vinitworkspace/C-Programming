#include<stdio.h>
int main()
{
    int n,a[100],i;
    printf("Enter A Number :");
    scanf("%d",&n);

    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } printf("ARRAY IS\n");
    for(i=0;i<n;i++){
    printf("%d\n",a[i]);
    }
    return 0;
}
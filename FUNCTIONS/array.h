#include<stdio.h>
void accept(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void display(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
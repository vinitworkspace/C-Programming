#include<stdio.h>
#include"array.h"

int main()
{
    int a[100],n;
    int i;
    printf("Enter A Number: ");
    scanf("%d",&n);

    accept(a,n);
    printf("Given Array is:\n");
    display(a,n);

}
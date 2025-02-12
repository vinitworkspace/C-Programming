#include<stdio.h>

#define max 50
int main()
{
    int a[max],b[max],c[max],i,n1,n2,cn,j;

    printf("Enter The Number Of Elements In First Array:");
    scanf("%d",&n1);

    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);

    printf("Enter The Number Of Elements In Second Array:");
    scanf("%d",&n2);

    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1-1-i;j++)
        {

        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
    }
     for(i=0;i<n2;i++)
    {
        for(j=0;j<n2-1-i;j++){

        if(b[j]>b[j+1])
        {
            int temp=b[j];
            b[j]=b[j+1];
            b[j+1]=temp;
        }
        }
    }
    i=0;
    j=0;

    while(i<n1 && j<n2)
    {
        if(a[i]>b[j])
        {

         c[cn]=b[j];
         cn++;
         j++;
        }
    else if (b[j]>a[i])
    {
        c[cn]=a[i];
        cn++;
        i++;
    }
    else
    {
        c[cn]=a[i];
        i++;
        cn++;

        c[cn]=b[j];
        j++;
        cn++;
    }

    
    }
    while(i<n1)
    {
        c[cn]=a[i];
        cn++;
        i++;
    }

    while(j<n2)
    {
        c[cn]=b[j];
        cn++;
        j++;
    }

    printf("after sorting: ");
    for(i=0;i<cn;i++)
    printf("\n%d",c[i]);
}
  

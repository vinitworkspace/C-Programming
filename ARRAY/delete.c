#include<stdio.h>
int main()
{
    int a[100],i,j,n,key;


    printf("Enter A Number:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter A Number to delete: ");
    scanf("%d",&key);

    int flag=0;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            for(j=i;j<n-1;j++)
            a[j]=a[j+1];
        
        n--;
        flag=1;
        break;
    }
    }

    if(flag)
    printf("%d Deleted Succesfully",key);
    else
    printf("%d NOT FOUND",key);

    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
}

// IF A NUMBER WHICH IS THE KEY ACCEPTED BY USER SHOULD BE DELETED IN THE ARRAY IF EXIST 
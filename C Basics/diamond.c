#include<Stdio.h>
int  main()
{
    int i,j,k,n,st;
    n=5;
    st=1;
    for(i=0;i<=n;i++)
    {
        for(k=0;k<n-i;k++)

        printf(" ");

        for(j=0;j<st;j++)
        {
            printf("*");
        }
        printf("\n");
        st=st+2;
    }
    st=(n*2)-1;
    
    for(i=n-1;i>=1;i--)
    {
        for(k=0;k<n-i;k++)

        printf(" ");

        for(j=0;j<st;j++)
        {
            printf("*");
        }
        printf("\n");
        st=st-2;
        
    }
}
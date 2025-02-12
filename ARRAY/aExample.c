#include<Stdio.h>
int main()
{
    int a[100],n,i;

    printf("Enter The Number Of Elements: ");
    scanf("%d",&n);


    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
    printf("\n%d ",a[i]);
    if(a[i]==41)  
    break;
    }
    return 0;
}

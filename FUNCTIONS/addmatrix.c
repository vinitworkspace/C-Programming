#include<stdio.h>
int main()
{
    int a[100][100],row,col,i,j;
    int sum;
    printf("Enter Number of ROW: ");
    scanf("%d",&row);

    printf("Enter Number Of Column: ");
    scanf("%d",&col);


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)

        scanf("%d",&a[i][j]);
    }
    

   for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)

        printf("%5d",a[i][j]);
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<col;j++)
        // printf("%5d",a[i][j]);
        sum+=a[j][i];
        
        printf("%5d",sum);
    }

}    
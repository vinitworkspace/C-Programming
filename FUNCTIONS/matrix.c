#include<stdio.h>
int main()
{
    int a[100][100],row,col,i,j;

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
    
}
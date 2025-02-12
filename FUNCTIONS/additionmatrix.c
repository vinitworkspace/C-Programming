#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],add[100][100],row1,row2,col1,col2,i,j;

    printf("Enter Number of ROWS in MATRIX 1: \n");
    scanf("%d",&row1);
    printf("Enter Number of COLUMNS in MATRIX 1: \n");
    scanf("%d",&col1);
    printf("Enter Number Of ROWS IN MATRIX 2: \n");
    scanf("%d",&row2);
    printf("Enter Number Of COLUMNS IN MATRIX 2: \n");
    scanf("%d",&col2);
    printf("ENTER ELEMENTS IN MATRIX 1:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        
        scanf("%d",&a[i][j]);
    }
    printf("MATRIX 1:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)

        printf("%5d",a[i][j]);
        printf("\n");
    }
    
     printf("ENTER ELEMENTS IN MATRIX 2:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        
        scanf("%d",&b[i][j]);
    }
    printf("MATRIX 2:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)

        printf("%5d",b[i][j]);
        printf("\n");
    }

    if(row1==row2 && col1==col2)
    {
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)

            add[i][j]=a[i][j]+b[i][j];
        }
    }
    else
    printf("ADDITION NOT POSSIBLE");

    printf("ADDITION MATRIX :\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        printf("%5d",add[i][j]);
        printf("\n");
    }
    
}
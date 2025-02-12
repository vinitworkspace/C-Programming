#include<stdio.h>
int main()
{
    int i,j,n=6,temp;
    // char alpha='A';
    for(i=n;i>=1;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",65+j);     
        }
        printf("\n");

}
}
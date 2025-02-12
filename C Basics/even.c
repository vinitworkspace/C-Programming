#include<stdio.h>
int main()
{
    int number;

    printf("Enter A Number:");
    scanf("%d",&number);

    if(number & 1)
        printf("ODD NUMBER !!");
    else
        printf("EVEN NUMBER !!");
    return 0;    

}
#include<stdio.h>
int main()
{
    int number;
    printf("Enter A Number:");
    scanf("%d",&number);

    if(number>0)
        printf("Positive Number !!");
    else
        printf("Negative Number !!");
}
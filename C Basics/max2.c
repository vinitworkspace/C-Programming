#include<stdio.h>
int main()
{
    int num1,num2,num3;

    printf("Enter Number 1:");
    scanf("%d",&num1);

    printf("Enter Number 2:");
    scanf("%d",&num2);
    
    printf("Enter Number 3:");
    scanf("%d",&num3);

    if(num1>num2 & num1>num3)
    {
        printf("Number 1 is the largest.");
    } 
    else if(num2>num1 & num2>num3)
    {
        printf("Number 2 is the largest.");
    }
    else
        printf("Number 3 is the largest.");   
    

    
}
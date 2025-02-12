/* Functjon 

void = null */

#include<stdio.h>

void add(int a,int b)
{
    printf("%d\n",a+b);
}
void sub(int a,int b)
{
    printf("%d\n",a-b);
}
int main()
{
int a,b;
    printf("Enter Number 1 :");
    scanf("%d",&a);

    printf("Enter Number 2 :");
    scanf("%d",&b);

    printf("Additon of Two Numbers:\n");

    add(a,b);
    printf("Substraction of Two Numbers:\n");
    sub(a,b);   
}
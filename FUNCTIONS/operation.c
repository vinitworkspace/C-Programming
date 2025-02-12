#include<stdio.h>
int add(int a,int b)
{
    return (a+b);
}
int subst(int a,int b)
{
    return (a-b);
}
int multiply(int a,int b)
{
    return(a*b);
}
int division(int a,int b)
{
    return(a/b);
}
int main()
{
    int a,b,n;
    printf("OPERATIONS TO PERFORM :\n");
    printf(" 1.Add\n 2.Substract\n 3.Multiply\n 4.Division\n");

     printf("Please Enter Your Choice !!\n");
    scanf("%d",&n);

    printf("Enter Number 1: ");
    scanf("%d",&a);

    printf("Enter Number 2: ");
    scanf("%d",&b); 
    
    // if(n==1)
    // {
    //     add(a,b);
    //     printf("%d",add(a,b));
    // }
    // else if(n==2)
    // {
    //     subst(a,b);
    //     printf("%d",subst(a,b));
        
    // }
    // else if(n==3)
    // {
    //     multiply(a,b);
    //     printf("%d",multiply(a,b));
    // }
    // else if(n==4)
    // {
    //     division(a,b);
    //     printf("%d",division(a,b));
    // }


    switch(n)
    {
        case 1:
        printf("ADDITION IS :");
        printf("%d",add(a,b));
        break;

        case 2:
        printf("SUBSTRACTION IS :");
        printf("%d",subst(a,b));
        break;

        case 3:
        printf("MULTIPLICATION IS :");
        printf("%d",multiply(a,b));
        break;

        case 4:
        printf("DIVISION IS :");
        printf("%d",division(a,b));
        break;

        default:
        printf("INVALID CHOICE !!!");
        break;
    }
}
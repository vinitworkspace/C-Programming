#include<stdio.h>
int main()
{
    int n,n1;
    printf("Enter A Number: ");
    scanf("%d",&n);
    printf("Covert Into:\n");
    printf(" 1.Metres\n 2.Centimetres\n 3.Inches\n");
    scanf("%d",&n1);

    switch(n1)
    {
        case 1:
        {
            int metres=0;
            metres=n*1000;
            printf("%d",metres);
            break;
        }
        case 2:
        {
            int centimetres=0;
            centimetres=n*100000;
            printf("%d",centimetres);
            break;
        }
        case 3:
        {
            float inches=0;
            inches=n*1000*39.3701;
            printf("%f",inches);
            break;
        }
        default:
        {
            printf("INVALID CHOICE!!");
            break;
        }
        

    }
    
}
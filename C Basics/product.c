#include<stdio.h>
int main()
{
    int pid,qty;
    char pname[200];
    float price,cgst,sgst,totalprice;

    printf("Enter Product ID:");
    scanf("%d",&pid);

    printf("Enter Product Name:");
    scanf("%s",&pname);

    printf("Enter Price Of Product:");
    scanf("%f",&price);

    printf("Enter Quantity:");
    scanf("%d",&qty);

    cgst=price*0.06;
    sgst=price*0.06;
    
    totalprice=(price+cgst+sgst)*qty;
    printf("\n\t\t\t-----------------------------------------------------");
    printf("\n\t\t\t\tProduct ID: \t\t%d",pid);
    printf("\n\t\t\t\tProduct Name: \t\t%s",pname);
    printf("\n\t\t\t\tPrice Of Product:\t%.2f",price);
    printf("\n\t\t\t\tQuantity: \t\t%d",qty);
    printf("\n\t\t\t\tPrice: \t\t\t%.2f",price);
    printf("\n\t\t\t\tCGST(6%%): \t\t%.2f",cgst);
    printf("\n\t\t\t\tSGST(6%%): \t\t%.2f",sgst);
    printf("\n\t\t\t\tTotal Price: \t\t%.2f",totalprice);    
    printf("\n\t\t\t-----------------------------------------------------");

}
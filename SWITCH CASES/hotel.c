#include <stdio.h>

int main()
{
    int n, n1, n2, n3;
    int total=0;
    int bill=0;
    printf("Menu :\n");
    printf(" 1. Starter\n 2. Veg\n 3. Non-Veg\n \n");
    printf("Choose What You Want :");
    scanf("%d", &n);
    printf("\n");

    switch (n)
    {
    case 1:
        printf("1. STARTER 1:\t$150\n");
        printf("2. STARTER 2:\t$200\n");
        printf("3. STARTER 3:\t$250\n");
        printf("\n");
        printf("Choose What You Want:");
        scanf("%d", &n1);

        switch (n1)
        {
        case 1:
            printf("STARTER 1:\t$150\n");
            total+=150;
            break;

        case 2:
            printf("STARTER 2:\t$200\n");
            total+=200;
            break;

        case 3:
            printf("STARTER 3:\t$250\n");
            total+=250;
            break;

        default:
            printf("Invalid choice, please choose a valid menu item\n");
            break;
        }
       

        printf(" 1. Veg\n 2. Non-Veg\n 3.Bill\n");
        printf("Choose What You Want :");
        scanf("%d", &n2);
        printf("\n");

    case 2:
        printf("1. PANEER MASALA:\t$350\n");
        printf("2. PANEER KOFTA:\t$400\n");
        printf("3. PANEER ANGARA:\t$500\n");

        printf("Choose Your Favourite One:");
        scanf("%d", &n2);

        switch (n2)
        {
        case 1:
            printf("PANEER MASALA:\t$350\n");
            total+=350;
            break;

        case 2:
            printf("PANEER KOFTA:\t$400\n");
            total+=400;
            break;

        case 3:
            printf("PANEER ANGARA:\t$500\n");
            total+=500;
            break;

        default:
            printf("Invalid choice, please choose a valid menu item\n");
            break;
        }
        printf("1. Non-Veg\n 4.Bill\n");
        printf("Choose What You Want :");
        scanf("%d", &n3);
        printf("\n");

    case 3:
        printf("1.PANEER CHICKEN MASALA:\t$500\n");
        printf("2.PANEER CHICKEN KOFTA:\t$600\n");
        printf("3.PANEER CHICKEN ANGARA:\t$700\n");

        switch(n3)
        {
           case 1:
            printf("PANEER CHICKEN MASALA:\t$500\n");
            total+=500;
            break;

        case 2:
            printf("PANEER CHICKEN KOFTA:\t$600\n");
            total+=600;
            break;

        case 3:
            printf("PANEER CHICKEN ANGARA:\t$700\n");
            total+=700;
            break;
        
        case 4:
        {
            printf("TOTAL:%d",total);
        }
 
        }
    default:
        printf("Invalid choice, please choose a valid menu item\n");
        break;
    }
    return 0;
}

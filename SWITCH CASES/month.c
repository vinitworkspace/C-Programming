#include<stdio.h>
int main()
{
    // printf("MONTHS IN A YEAR:\n");
    // printf(" 1.January\n 2.February\n 3.March\n 4.April\n 5.May\n 6.June\n 7.July\n 8.August\n 9.September\n 10.October\n 11.November\n 12.December\n");
    int n;
    printf("Choose A Month to print:");
    scanf("%d",&n);

    switch(n)
    {
        case 1:printf("JANUARY");break;
        case 2:printf("FEBRUARY");break;
        case 3:printf("MARCH");break;
        case 4:printf("APRIL");break;
        case 5:printf("MAY");break;
        case 6:printf("JUNE");break;
        case 7:printf("JULY");break;
        case 8:printf("AUGUST");break;
        case 9:printf("SEPTEMBER");break;
        case 10:printf("OCTOBER");break;
        case 11:printf("NOVEMBER");break;
        case 12:printf("DECEMBER");break;

        default:printf("INVALID CHOICE");break;
    }
}
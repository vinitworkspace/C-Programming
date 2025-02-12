#include<stdio.h>
int main()
{
    float amt,roi,duration;
    float emi;

    printf("Enter A Amount:");
    scanf("%f",&amt);

    printf("Enter Rate Of Interest: (%%)");
    scanf("%f",&roi);

    printf("Enter Duration (IN YEARS):");
    scanf("%f",&duration);

    roi=roi * duration;
    amt += (amt+roi)/100;

    emi=amt/(duration*12);

    printf("\nEMI is:%.2f",emi);

    return 0;


}
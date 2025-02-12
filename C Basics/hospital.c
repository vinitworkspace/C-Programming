/* Patient details
patient id 
patient name 
patient disease 
patient icu bill medicines doctor charge xray blood sample charge */

#include<stdio.h>
int main()
{
    int pid;
    char pname[200],pdisease[200];
    float bedcharge,icu,medicines,doctorcharge,xray,bill,totalbill;

    printf("Enter Patient ID:");
    scanf("%d",&pid);

    printf("Enter Patient Name:");
    scanf("%s",&pname);

    printf("Enter Disease:");
    scanf("%s",&pdisease);

    xray=totalbill*0.002;
    icu=totalbill*0.07;
    bedcharge=totalbill*0.06;
    doctorcharge=totalbill*0.10;

    printf("Enter Patient ID: %d",pid);
    printf("Enter Patient Name: %s",pname);
    printf("Enter Patient Disease: %s",pdisease);
}
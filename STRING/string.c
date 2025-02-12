/* NOTES
// String is a character array.
// CHARACTER = SYMBOL,NUMBER,ALPHABETS.
String Includes:
Comparison
Concat
Length
Reverse 

 */



#include<stdio.h>
#include<string.h>
int main()
{
    int roll_no;
    char fname[100],Address[100],Class[100],lname[100];
    float marks1,marks2,marks3;
    char mobile_number[100];

    printf("Enter Your Roll Number: ");
    scanf("%d",&roll_no);
    getchar();
    printf("Enter Your First Name: ");
    // scanf("%s",fname);
    gets(fname);

    printf("Enter Your Address: ");
    // scanf("%s",Address);
    gets(Address);

    printf("Enter Your Class: ");
    // scanf("%s",Class);
    gets(Class);

    printf("Enter Your Marks1: ");
    scanf("%f",&marks1);

    printf("Enter Your Marks2: ");
    scanf("%f",&marks2);

    printf("Enter Your Marks3: ");
    scanf("%f",&marks3);
    getchar();

    printf("Enter Your Mobile Number: ");
    // scanf("%s",mobile_number);
    gets(mobile_number);

    float total=0;
    total=(marks1+marks2+marks3);
    float percentage=total/3;

    printf("\n");
    printf("Roll Number: %d \n",roll_no);
    printf("First Name: %s \n",fname);
    printf("Address: %s\n",Address);
    printf("Class: %s\n",Class);
    printf("Percentage: %f\n",percentage);
    printf("Mobile Number : %s\n",mobile_number);
    


    
}



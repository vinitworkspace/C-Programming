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
    int roll_no[100][100],n,i;
    char name[100][100],Address[100][100],Class[100][100];
    float marks[100][100];
    char mobile_number[100][100];

    printf("Enter A Number: ");
    scanf("%d",&n);
    printf("ENTER STUDENT DETAILS: ");
    printf("\n");
    for(i=0;i<n;i++)
    {
    printf("Enter Your Roll Number: ");
    scanf("%d",&roll_no[i]);
    getchar();
    printf("Enter Your First Name: ");
    // scanf("%s",fname);
    gets(name[i]);

    printf("Enter Your Address: ");
    // scanf("%s",Address);
    gets(Address[i]);

    printf("Enter Your Class: ");
    // scanf("%s",Class);
    gets(Class[i]);

    printf("Enter Your Marks1: ");
    scanf("%f",&marks[i]);

    getchar();

    printf("Enter Your Mobile Number: ");
    // scanf("%s",mobile_number);
    gets(mobile_number[i]);
    
    }
    for(i=0;i<n;i++)
    {
        
    printf("\n");
    printf("Roll Number: %d \n",roll_no[i]);
    printf("First Name: %s \n",name[i]);
    printf("Address: %s\n",Address[i]);
    printf("Class: %s\n",Class[i]);
    printf("Percentage: %f\n",marks[i]);
    printf("Mobile Number : %s\n",mobile_number[i]);
    
    }
}



#include<stdio.h>
int main()
{
    int rollno;
    char sname[100];
    int sub1,sub2,sub3,total;
    float perct;
    printf("Enter your roll number : ");
    scanf("%d",&rollno);
    printf("Enter Your Name :");
    scanf("%s",&sname);
    printf("Enter Your Subject Marks :");
    scanf("%d%d%d",&sub1,&sub2,&sub3);

    total=sub1+sub2+sub3;
    perct=total/3;

    printf("\n\t-----------------------------------------------------");
    printf("\n\t| Roll Number : %d |",rollno);
    printf("\n\t| Student Name : %s|",sname);
    printf("\n\t| Mathematics: %d  |",sub1);
    printf("\n\t| English: %d      |",sub2);
    printf("\n\t| Scince: %d       |",sub3);
    printf("\n\t| Total Marks: %d  |",total);
    printf("\n\t| Percentage: %f   |",perct);
    printf("\n\t-----------------------------------------------------");
}
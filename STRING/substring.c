
#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];
    int i;
    int start;
    int length;

    printf("Enter A Name: ");
    scanf("%s",name);

    printf("Enter A Start Point: ");
    scanf("%d",&start);
    start=start-1;
    printf("Enter A Length: ");
    scanf("%d",&length);

    for(i=start;i<strlen(name)&&i<start+length;i++)
    {
        printf("%c",name[i]);
    }
}
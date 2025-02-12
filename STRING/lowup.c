#include <stdio.h>
#include<string.h>
void lowtoup(char str[20])
{
    int i;
    char word;
    for (i = 0; i <str[i]!='\0'; i++)
    {
        word = str[i] - 32;
        printf("%c\n",word);
    }
}
void uptolow(char str[20])
{
    int i;
    char word;
    for(i=0;i<str[i]!='\0';i++)
    {
        word=str[i]+32;
        printf("%c\n",word);
    }
}
int main()
{
    char str[20];

    printf("ENTER A STRING:");
    scanf("%s", &str);
    // lowtoup(str);
    uptolow(str);
}
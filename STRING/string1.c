#include <stdio.h>
#include<string.h>
void uptolow(char str[20])
{
    int i;
    char word;
    for(i=0;i<str[i]!='\0';i++)
    {
        if(str[i]<=97)
        {
            printf("%c",str[i]);
        }
        else
        {
            word=str[i]-32;
            printf("%c",word);
        }
    }
}
int main()
{
    char str[20];

    printf("ENTER A STRING:");
    scanf("%s", &str);
    uptolow(str);
}
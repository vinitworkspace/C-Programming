#include<stdio.h>
#include<string.h>
int main()
{
    char word[20];
    int i;
    
    printf("Enter A Word: ");
    scanf("%s",word);
    int length=strlen(word);
    int start=0;
    int end=length-1;

    printf("%d\n",length);

    int flag=0;

    for(i=0;i<length/2;i++)
    {
        
        if(word[start]!=word[end])
        {
            flag=1;
            break;
        }
        start++;
        end--;
    }
    if(flag==1)
    {
        printf("NOT PALINDROME");
    }
    else
    {
        printf("PALINDROME");
    }
}
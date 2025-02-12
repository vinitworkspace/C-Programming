#include<stdio.h>
#include<string.h>

void one(char word1[20],char word2[20])
{
   int i;
   int length=strlen(word2);

   for(i=0;i<length;i++)
   {
    word1[i]=word2[i];
   }
   word1[i]='\0';

   printf("%s\n",word1);
   printf("%s",word2);
   
}
int main()
{
    char word1[20];
    char word2[20];

    printf("Enter Word 1: ");
    scanf("%s",&word1);

    printf("Enter Word 2: ");
    scanf("%s",&word2);

    one(word1,word2);
}
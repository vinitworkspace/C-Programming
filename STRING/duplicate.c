#include <stdio.h>
#include <string.h>
void duplicate(char word[]) // aabbcc abbcc abcc abc 
{
    int i, j, k;
    int length = strlen(word);
    for (i = 0; i < length; i++) // 
    {
        for (j = i + 1; j < length;)
        {
            if (word[i] == word[j]) // a==a b b c c 
            {
                for (k = j; k < length; k++)
                {
                    word[k] = word[k + 1];
                }
                word[k] = '\0';
                length--;
            }
            else
            {
                j++;
            }
        }
    }
}
int main()
{
    char word[20];

    printf("Enter A Word: ");
    scanf("%s", word);
    printf("BEFORE REMOVING DUPLICATES: \n");
    printf("%s\n", word);

    duplicate(word);
    printf("AFTER REMOVING DUPLICATES: \n");
    printf("%s", word);
}
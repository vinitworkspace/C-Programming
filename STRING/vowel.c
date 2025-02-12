#include <stdio.h>
#include <string.h>

int main()
{
    char word[20];
    int i;
    int cnt = 0;
    int cnt1 = 0;
    printf("Enter A Word: \n");
    scanf("%s", word); // vinit

    for (i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            cnt++;
        }
        else
        {
            cnt1++;
        }
    }
    printf("The Number Of Vowels And Consonant Are %d And %d", cnt, cnt1);
}
#include <stdio.h>
int main()
{
    int n;
    int cnt=0;
    printf("Enter a Number Range : ");
    scanf("%d", &n);

        for (int j = 2; j <= n / 2; j++)
        {
            if (n % j == 0)
            {
                cnt++;
            }
        }
        if (cnt > 0)
            printf("NON PRIME NO");
            else
            printf("PRIME NO");
    }

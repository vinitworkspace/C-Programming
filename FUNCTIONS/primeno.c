#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter a Number Range : ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        int cnt = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }
        if (cnt == 0)
            printf("%d\n", i);
    }
}
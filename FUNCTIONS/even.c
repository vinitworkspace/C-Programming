#include <stdio.h>

int even(int n,int num)
{
    if (num <= n)
    {
        if (num % 2 == 0)
        {
            printf("%d\n", num);
        }
    }
    num++;
    even(n,num);
}
int main()
{
    int n;
    int num=1;
    printf("Enter A Number:");
    scanf("%d", &n); // 5
    even(n,num);
    return 0;
}
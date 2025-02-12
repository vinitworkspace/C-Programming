#include <stdio.h>
int main()
{
    int n;
    int n1, n2;
    int i;
    int sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &n); // 5
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i; // sum=sum+i;
        }
    }
    printf("%d", sum);
}
#include <stdio.h>
int evenodd(int n)
{
    if (n % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
}
int main()
{
    int n;
    printf("Enter A Number: ");
    scanf("%d", &n);
    evenodd(n);
}
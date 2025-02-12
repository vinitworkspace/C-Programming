#include <stdio.h>
int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    return a*factorial(a-1);
}
int main()
{
    int a;
    printf("ENTER A NUMBER:");
    scanf("%d", &a);
    int fact = factorial(a);
    printf("%d", fact);
    return 0;
}
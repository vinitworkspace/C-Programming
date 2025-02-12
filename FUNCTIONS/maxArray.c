#include <stdio.h>
#include "array.h"
int main()
{
    int a[100], n, i, max;

    printf("Enter A Number:");
    scanf("%d", &n);

    accept(a, n);

    max = a[0];

    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }

    printf("MAX Is:%d", max);

    return 0;
}

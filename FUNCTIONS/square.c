#include <stdio.h>
int square(int num)
{

    printf("%d", num *num);
}

int main()
{
    int num;
    printf("Enter A Number:");
    scanf("%d", &num);
    square(num);
}
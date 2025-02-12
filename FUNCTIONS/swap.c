#include <stdio.h>
int swap(int n1, int n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
    printf("AFTER SWAPPING:\n");
    printf("NUMBER 1:%d\n", n1);
    printf("NUMBER 2:%d\n", n2);
}
int main()
{
    int n1, n2;
    printf("Enter Number 1:");
    scanf("%d", &n1);
    printf("Enter Number 2:");
    scanf("%d", &n2);
    swap(n1, n2);
}
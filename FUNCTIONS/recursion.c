#include<stdio.h>

int demo(int a)
{
    if(a>0)
    {
    printf("%d\n",a);
    --a;
    }
    demo(a);
}
int main()
{
    int a=10;
    demo(a);
}
#include<stdio.h>
int main()
{
    int a=0;
    demo:
    ++a;
    if(a<=10)
    {
        printf("%d\n",a);
        goto demo;
    }
    
    return 0;
}
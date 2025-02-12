#include<stdio.h>
#include<string.h>
void reverse(char a[])
{
    // int i;
    // int len=strlen(a);
    // for(i=0;i<strlen(a)/2;i++)
    // {
    //     char temp=a[i];
    //     a[i]=a[len-i-1];
    //     a[len-i-1]=temp;
    // }

    int start=0,end=strlen(a)-1;
    while(start<end)
    {
        char temp=a[start];
        a[start++]=a[end];
        a[end--]=temp;
    }

}

int main()
{
    char a[]="Hello";

    printf("Original String: %s\n",a);
    reverse(a);
    printf("Reversed String: %s",a);

}
#include <stdio.h>
#include<math.h>
int main()
{
    float rem=0, temp, result = 0, cnt = 0;
    int num;
    printf("Enter a Number:");
    scanf("%d", &num);

    temp = num;
    while (num > 0)
    {
        cnt++;
        num = num / 10;
    }
    num = temp;
    while (num > 0)
    {
        rem = num % 10;
        result = result + pow(rem,cnt);
        // result = result + (rem*rem*rem);

        num = num / 10;
    }
    if (result == temp)
    {
        printf("Is An Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }
}
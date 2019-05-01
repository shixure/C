/*
求100～999之间的回文素数之和。
（回文素数是一个素数，且从左向右和从右向左读是相同的，如：101、131、181是回文素数）
*/
#include <stdio.h>
int isprime(int num)
{
    int i;
    for(i=2;i<=num/2;i++)
        if(num%i==0) break;
    return i>num/2;
}
int isplaindrome(int num)
{
    return num/100==num%10;
}
int main()
{
    int i,sum=0;
    for(i=100;i<=999;i++)
        if(isprime(i)&&isplaindrome(i))
        {
            printf("%d ",i);
            sum+=i;
        }
    printf("=%d\n",sum);
    getchar();
}
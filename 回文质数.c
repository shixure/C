/*
��100��999֮��Ļ�������֮�͡�
������������һ���������Ҵ������Һʹ������������ͬ�ģ��磺101��131��181�ǻ���������
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
#include <stdio.h>
int main()
{
	char P,Q,c;
	printf("请输入P的真值："); 
	scanf("%c",&P);
	scanf("%c",&c);
	printf("请输入Q的真值：");
	scanf("%c",&Q);

	if(P=='T')
		printf("非P的真值为F\n");
	if(P=='F')
		printf("非P的真值为T\n");
	if(P=='T' && Q=='T')
	{
		printf("P∧Q的真值为T\nP∨Q的真值为T\nP▽Q的真值为F\nP→Q的真值为T\nP?Q的真值为T"); 
	}
	if(P=='T' && Q=='F')
	{
		printf("P∧Q的真值为F\nP∨Q的真值为T\nP▽Q的真值为T\nP→Q的真值为F\nP?Q的真值为F"); 
	}
	if(P=='F' && Q=='T')
	{
		printf("P∧Q的真值为F\nP∨Q的真值为T\nP▽Q的真值为T\nP→Q的真值为T\nP?Q的真值为F"); 
	}
	if(P=='F' && Q=='F')
	{
		printf("P∧Q的真值为F\nP∨Q的真值为F\nP▽Q的真值为F\nP→Q的真值为T\nP?Q的真值为T"); 
	}
	else
	{
		printf("输入信息有误"); 
	}
} 

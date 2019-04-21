/*Input
仅一组数据，第一行包含一个整数n（1<=n<=100），表示来的人数，之后n行依次是编号1~n的身高（均为整数）
Output
一行数据，请你将身高从矮到高的顺序输出他们编号（若身高相同时，优输出编号小的），每两个编号中间用空格隔开（末尾没有空格）
Sample Input
3
180 179 180
Sample Output
2 1 3*/
#include <stdio.h>
#define maxsize 100
typedef struct node
{
	int data[maxsize];
	int length;
} seqlist;
int main()
{
	int n, i, j, x;
	seqlist a, b;
	scanf("%d", &n);
	a.length = n;
	b.length = n;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a.data[i]);
	}
	for (i = 0; i < n; i++)
	{
		x = 1;
		for (j = 0; j < n; j++)
		{
			if (a.data[i] > a.data[j])
			{
				x++;
			}
		}
		b.data[i] = x;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (a.data[i] == a.data[j])
			{
				b.data[i]++;
			}
		}
	}
	for (i = 0; i < n - 1; i++)
		printf("%d ", b.data[i]);
	printf("%d", b.data[n - 1]);
}

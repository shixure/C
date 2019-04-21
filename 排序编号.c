/*Input
��һ�����ݣ���һ�а���һ������n��1<=n<=100������ʾ����������֮��n�������Ǳ��1~n����ߣ���Ϊ������
Output
һ�����ݣ����㽫��ߴӰ����ߵ�˳��������Ǳ�ţ��������ͬʱ����������С�ģ���ÿ��������м��ÿո������ĩβû�пո�
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

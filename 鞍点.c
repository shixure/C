/*����һ��n*m����A������A�İ�����һ��λ�ã�i��j�����ڸ�λ���ϵ�Ԫ���ǵ�i���ϵ����������j���ϵ���С����
һ������AҲ����û�а��㡣*/
/*����������
4 4
1 7 4 1 
4 8 3 6 
1 6 1 2 
0 7 8 9
���������
2 1*/
#include <stdio.h>
int main()
{
    int a[100][100] = {0};
    int n, m;
    int row = 0, col = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int max, min;
    for (int i = 0; i < n; i++)
    {
        max = a[i][0];
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                col = j;
            }
        }
        min = a[0][col];
        for (int k = 0; k < m; k++)
        {
            if (a[k][col] < min)
            {
                min = a[k][col];
                row = k;
            }
        }
        if (max == min)
        {
            printf("%d %d", row, col);
            break;
        }
    }
    if (max != min)
    {
        printf("no");
    }
    return 0;
}
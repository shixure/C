/*给定一个n*m矩阵A。矩阵A的鞍点是一个位置（i，j），在该位置上的元素是第i行上的最大数，第j列上的最小数。
一个矩阵A也可能没有鞍点。*/
/*输入样例：
4 4
1 7 4 1 
4 8 3 6 
1 6 1 2 
0 7 8 9
输出样例：
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
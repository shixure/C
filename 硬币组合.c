/*将一笔零钱（精确到分）换算成 1 分、2 分和 5 分的硬币组合。
输入金额，输出共有多少种换法*/
#include <stdio.h>
int main()
{
    int n;       //用于用户输入的分钱数
    int x, y, z; //x是1分，y是2分，z是5分(硬币个数)
    int num = 0; //用于保存有多少种方法
    printf("请输入金额(分)：");
    scanf("%d", &n);
    for (x = 1; x <= n; x++) //每种硬币个数不能为0，所以从1开始
        for (y = 1; y <= n / 2; y++)
            for (z = 1; z <= n / 5; z++)
            {
                if (x + 2 * y + 5 * z == n)
                {
                    printf("1分%d个，2分%d个，5分%d个\n", x, y, z);
                    num++;
                }
            }
    printf("一共有%d种方法\n", num);
}
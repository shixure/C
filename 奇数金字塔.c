/*
打印出以下图案：
      1
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7
*/

#include <stdio.h>
int main()
{
    for (int j = 1; j < 8;j=j+2)
    {
        for (int n = 0; n < 7-j;n++)
        {
            printf(" ");
        }
            for (int i = 1; i <= j; i++)
            {
                printf("%d ", i);
            }
        printf("\n");
    }
}
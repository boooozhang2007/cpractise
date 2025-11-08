/*
1051 找矩阵中的鞍点
Description
由键盘输入一个3＊4（3行4列）的数字矩阵，其中任意两个数字均不相同。
要求输出该数字矩阵中的鞍点（即在矩阵行中最大，列中最小的数）。
若没有鞍点，输出“NO”字样。


输入样例
87  90  110  98
70  97  210  65
99  45  120  30

输出样例
110
*/
#include<stdio.h>
int main()
{
    int a[3][4];
    int i, j, k;
    int min, max, rowa, rowb, col;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        max=a[i][0];
        col = 0;
        for(j = 0; j < 4; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
                rowa = i;
                col = j;
            }
        }
        min=a[0][col];
        for(k=0;k<3;k++)
        {
            if(a[k][col]<min)
            {
                min=a[k][col];
                rowb=k;
            }
        }
        if(max == min)
        {
            printf("%d", max);
            return 0;
        }
    }
    printf("NO");
    return 0;
}
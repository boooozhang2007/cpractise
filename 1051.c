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
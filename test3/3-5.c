/*
描述
下面程序，实现由键盘输入一个正整数(不大于100000000)，输出其对应的二进制数（原码表示）。
请填空：

#include "stdio.h"

_______________________

main()
{
    int n;
    scanf("%d", &n);
    binary(n);
}
输入样例
12
输出样例
1100
*/
#include<stdio.h>
#include<string.h>

void binary(int num)
{
    char a[1000];
    int i,b;
    for(i=0;num!=0;i++)
    {
        a[i]=num%2+'0';
        num = num/2;
    }
    a[i++] = '\0';
    for(i=0,b=strlen(a)-1;i<b;i++,b--)
    {
        int tmp;
        tmp = a[i];
        a[i] = a[b];
        a[b] = tmp;
    }
    printf("%s",a);
}

int main()
{
    int n;
    scanf("%d", &n);
    binary(n);
}
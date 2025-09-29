#include<stdio.h>
int main()
{
	//使用不同变量
	int i,j;
	i=j=10;
	printf("使用不同变量:\n");
	printf("++i=%d\nj++=%d\n",++i,j++);
	//使用相同变量
	int m,n;
	m=10;
	n=m++;
	printf("先m++返回旧值:%d\n再++m返回新值:%d\n",n,++m);
	//先对m+1并返回旧值10（此时m新值为11）
	//再对m新值11+1并返回新值12
	printf("23/3=%d\n23.0/3=%lf",23/3,23.0/3);
	//分别整数和实数除运算
	char c = 'A';      // 小整数类型，ASCII值为65
	short s = 10;
	int result = c / s;  //65/10=6
	printf("\n\"A\"/10=%d", result);  // 输出：6
	return 0;
}

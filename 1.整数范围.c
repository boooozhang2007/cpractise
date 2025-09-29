// 从简单的程序开始
#include <stdio.h>
#define Pi 3.14 //定义常量
int main() {
	//关于是否带符号的int
	int i1 = 4294967295;
	unsigned i2 = 4294967295;
	int m = 2147483647;
	printf("有符号：i1 = %d;i2 = %d\n",i1,i2);
	printf("无符号：i1 = %u;i2 = %u\n",i1,i2);
	printf("有符号整数：%d\n加一后：%d\n",m,m+1);
	//计算圆周长
	double r;
	printf("请输入半径：");
	scanf("%lf",&r);
    printf("the result is %f\n",2*Pi*r);
    return 0;
    
}

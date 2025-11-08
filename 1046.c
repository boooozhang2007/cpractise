/*
1046 计算高精度加法
Description
由键盘输入两个位数很长的整数（一行一个，最多不超过80位），试计算并输出这两个数的和。


输入样例
1234567890123456789353534532453453453434534
987654321098765324534534534534532


输出样例
1234567891111111110452299856987987987969066


提示
注意，一个普通的变量不能保存十多位长的整数
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char na[81],nb[81],result[82];
    int la,lb,da,db,di,carry=0,k;

    scanf("%s",na);  //使用scanf而不用gets读取
    scanf("%s",nb);  //不添加&，否则会把地址给scanf函数

    la = strlen(na) -1; //末尾有\0结束符，占1格
    lb = strlen(nb) -1;

    for(k=0;la>=0 || lb>=0;k++,la--,lb--)
    {
        da = (la>=0)?na[la] - '0':0; //缺位则为0，与高位对齐相加
        db = (lb>=0)?nb[lb] - '0':0;
        di = da + db + carry;//当前位数字
        if(di>9){
            carry = 1;
            di -= 10;
        }
        else{
            carry = 0;
        }
        result[k] = di + '0';
    }

    if (carry) //如果有进位则继续进位
    {
        result[k++] = '1';
    }
    result[k]='\0'; //这个结束符不参与翻转

    for (la = 0,lb = k-1;la<lb;la++, lb--) //k-1是为了使结束符留在原位置
    {
        char tmp;
        tmp = result[la];
        result[la] = result[lb];
        result[lb] = tmp;
    }
    printf("%s",result);
}
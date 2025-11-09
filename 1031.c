/*
Description
写一个函数实现：输入一行字符，以空格分割单词，回车结束输入，输出单词的个数

输入样例
There are many students and many trees!

输出样例
7
*/

#include<stdio.h>
int main()
{   int num=0,word=0;
    char c;
    while((c=getchar())!='\n')
    {
       if(!(c>='a'&&c<='z'||c>='A'&&c<='Z'))word=0;
       else if(word==0)
       {   word=1;
           num++;
       }
    }
    printf("%d",num);
}

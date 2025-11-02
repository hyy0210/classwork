#include<stdio.h>
int main()
{//int c1,c2;输出结果显示错误
    char c1,c2;
    c1=97;c2=98;//结果为a,b  c1=321,c2=400时结果为A，？
    printf("%c,%c\n",c1,c2);
    return 0;
}
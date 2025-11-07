#include <stdio.h>

int main() {
    int num, hundreds, tens, units, sum;
    printf("请输入一个三位的正整数：");
    scanf("%d", &num);
    if (num < 100 || num > 999) 
    {
        printf("输入错误！请输入有效的三位数。\n");
        return 0;
    }
    hundreds = num / 100;          
    tens = (num / 10) % 10;        
    units = num % 10;              
    sum = hundreds * hundreds * hundreds + tens * tens * tens + units * units * units;
    if (sum == num)
    {
        printf("%d 是水仙花数！\n", num);
    } 
    else
    {
        printf("%d 不是水仙花数。\n", num);
    }

    return 0;
}
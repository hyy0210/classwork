#include <stdio.h>

int main() 
{
    float profit, commission = 0.0;
    const float base_salary = 500.0; 
    printf("请输入该月工程利润（元）：");
    scanf("%f", &profit);
    if (profit < 0) {
        printf("输入错误！利润不能为负数。\n");
        return 0;
    }
    if (profit <= 1000) 
    {
        commission = 0; 
    } 
    else if (profit <= 2000) 
    {
        commission = (profit - 1000) * 0.1; 
    } 
    else if (profit <= 5000) 
    {
        commission = 1000 * 0.1 + (profit - 2000) * 0.15;
    } 
    else if (profit <= 10000) 
    {
        commission = 1000 * 0.1 + 3000 * 0.15 + (profit - 5000) * 0.2;
    } 
    else 
    {
        commission = 1000 * 0.1 + 3000 * 0.15 + 5000 * 0.2 + (profit - 10000) * 0.25;
    }
    float total_salary = base_salary + commission;
    printf("该月工资总额：%.2f 元\n", total_salary);

    return 0;
}
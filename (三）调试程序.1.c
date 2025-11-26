#include<stdio.h>

// 定义func函数：计算a² + b²，返回float类型
float func(float a, float b) {
    float c;
    c = a*a + b*b;
    return c;
}

int main() {
    float x, y, result;  // 用float存结果，避免类型不匹配
    // 提示输入格式，避免用户输入错误
    printf("请输入两个浮点数（用逗号分隔，例如1.2,3.4）：");
    scanf("%f,%f", &x, &y);
    
    result = func(x, y);  // 调用func计算
    printf("计算结果：%.2f\n", result);  // 保留2位小数输出
    
    return 0;
}
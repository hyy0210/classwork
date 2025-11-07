#include <stdio.h>

int main() 
{
    float score;
    printf("请输入学生的成绩(0 - 100 分制）：");
    scanf("%f", &score);
    if (score < 0 || score > 100) 
    {
        printf("出错啦！成绩应在 0 到 100 之间。\n");
    } else {
        if (score >= 90) 
        {
            printf("等级:A\n");
        } 
        else if (score >= 80) 
        {
            printf("等级:B\n");
        } 
        else if (score >= 70) 
        {
            printf("等级:C\n");
        } 
        else if (score >= 60) 
        {
            printf("等级:D\n");
        } 
        else 
        {
            printf("等级:E\n");
        }
    }

    return 0;
}
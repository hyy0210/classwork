#include<stdio.h>
#define PI 3.1415926535
int main()
{
    float c, s;
    int r;
    scanf("%d", &r);
    c = 2 * PI * r;
    s = PI * r * r;
    printf("周长：%f\n", c);
    printf("面积：%f\n", s);
    return 0;
}
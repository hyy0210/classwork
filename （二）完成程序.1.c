#include<stdio.h>
double max(double a,double b);
int main()
{
    double x,y;
    scanf("%lf%lf",&x,&y);
    return 0;
}
double max(double a,double b)
{
    return (a>b?a:b);
}
#include <stdio.h>
 int main()
{
   int a=5;
   int b=7;
   int c=1;
   int max;
if(a>=b && b>=c)
{max=a;}
else if(b>=a && b>=c)
{
   max=b;
}
else
{max=c;}

printf("最大数是：%d\n",max);
return 0;
}
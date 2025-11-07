#include<stdio.h>
void main()
{
    int i,j,k;
    int m,n,p;
    i=8;
    j=10;
    k=12;
    /*自增在操作数之前*/
    m=++i;
    printf("i=%d\n",i);
    printf("m=%d\n",m);
    /*自减在操作数之后*/
n=j--;
printf("j=%d\n",j);
printf("n=%d\n",n);
/*自增自减混合运算*/
p=(++m)*(n++)+(--k);
printf("k=%d\n",k);
printf("p=%d\n",p);
return 0;
//i=m=j=9;n=10,p=111,k=11
}
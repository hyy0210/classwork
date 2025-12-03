#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6};
    int *p,i;
    p=a;
    *(p+4)+=3;
    printf("n1=%d,n3=%d\n",*p,*(p+3));
    return 0;
}//n1=1 n3=4
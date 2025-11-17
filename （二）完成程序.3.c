#include<stdio.h>
int main()
{
    int i,j,k,n=0;
    for(i=0;i<=20;i++)
    for (j=0;j<=50;j++)
    for(k=0;k<=20;k++)
    {    if(i+2*j+5*k==100)
        {

            printf("%d:%3d %3d %3d",n,j,k);
            if(n%3==0)
            printf("\n");
        }
    }
    return 0;
}
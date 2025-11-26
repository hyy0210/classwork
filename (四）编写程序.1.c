#include<stdio.h>
int shuzi(int n);

int main()
{
printf("shuziyou:\n");
for(int i=10;i<=99;i++)
{
    if(shuzi(i))
    {
        printf("%d\n",i);
    }
}
printf("\n");
return 0;

}
int shuzi(int n)
{
 int tens=n/10;
 int units=n%10;
 return (n%3==0)&&(tens==5||units==5);   
}

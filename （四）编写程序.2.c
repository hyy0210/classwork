#include<stdio.h>
int main()
{
    int num,temp,digit,count=0;
    int digits[5];
    printf("请输入一个不多于五位的正整数：");
    scanf("%d",&num);
    while(temp!=0)
    {
    digits[count]=temp%10;
    temp/=10;
    count++;
}
switch(count)
{
    case 1:
    printf("它是1位数\n");
    break;
    case 2:
    printf("它是2位数\n");
    break;
    case 3:
    printf("它是3位数\n");
    break;
    case 4:
    printf("它是4位数\n");
    break;
    case 5:
    printf("它是5位数\n");
    break;
    default:
    printf("输入不符合要求\n");
    return 0;
}
temp=num ;
printf("各位数字分别是");
while(temp!=0)
{
    digit=temp%10;
    temp/=10;
    printf("%d",digit);
}
printf("\n");
printf("逆序打印各位数字：");
for(int i=0;i<count;i++)
{
    printf("%d",digits[i]);
}
printf("\n");
return 0;
}
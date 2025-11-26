int mystrlen(char str[])
{
    int i;
    for (i=0;   str[i]   !='\0';i++);
    return ( i );
}
int main()
{
    char str[]="hello";
    int length=mystrlen(str);
    printf("%d\n",length);//字符串的长度是：5
    return 0;
}
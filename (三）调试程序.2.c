int strcmp0(char s[], char t[])
{ 
    int  i = 0, j = 0;
    while (s[i] && t[i] && s[i] == t[i]) { i++; }
    return  s[i]-t[i];
}
int main()
{ 
    int  x;
    char s1[50], s2[50];
    scanf("%s%s", s1, s2);
    x = strcmp0(s1, s2);
    printf("%d\n", x);
    return 0;
}
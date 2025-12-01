#include <stdio.h>
#include <string.h>
#include <ctype.h>
void count_repeated_chars(char str[]) 
{
    int count[256] = {0};  
    int len = strlen(str);
    for (int i = 0; i < len; i++) 
    { 
        count[(unsigned char)str[i]]++;
    }
    
    printf("重复字符及次数：\n");
    for (int i = 0; i < 256; i++)
    {
        if (count[i] >= 2) 
        {
            printf("字符 '%c'：出现 %d 次\n", i, count[i]);
        }
    }
}
int main() 
{
    char input[100];
    printf("输入字符串：");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  
    count_repeated_chars(input);
    return 0;
}
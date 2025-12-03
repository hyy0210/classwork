#include <stdio.h>

int main() {
    int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; 
    int key, *p;
    int pos = -1; 
    printf("请输入要查找的数：");
    scanf("%d", &key);
    p = arr; 
    for (int i = 0; i < 15; i++, p++) {
        if (*p == key) {
            pos = i + 1; 
            break;
        }
    }
    if (pos != -1) {
        printf("找到，位置是：%d\n", pos);
    } else {
        printf("No Found\n");
    }
    return 0;
}
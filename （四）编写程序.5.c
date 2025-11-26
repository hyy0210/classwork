#include <stdio.h>

// 返回n从右数第k位数字
int digit(int n, int k) {
    // 先把n处理为正数（题目说n是正整数）
    for (int i = 1; i < k; i++) {
        n /= 10; // 去掉右边k-1位
    }
    return n % 10; // 取当前右边第一位
}

int main() {
    printf("digit(829,1)=%d\n", digit(829, 1)); // 输出9
    printf("digit(829,3)=%d\n", digit(829, 3)); // 输出8
    return 0;
}
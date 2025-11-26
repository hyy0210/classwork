#include <stdio.h>

// 判断x、y是否在[0, n-1]区间内
int check(int x, int y, int n) {
    return (x >= 0 && x <= n-1 && y >= 0 && y <= n-1) ? 1 : 0;
}

int main() {
    int x = 2, y = 3, n = 5;
    int result = check(x, y, n);
    
    if (result) {
        printf("x和y都在0到%d的区间内\n", n-1);
    } else {
        printf("x或y不在0到%d的区间内\n", n-1);
    }
    return 0;
}
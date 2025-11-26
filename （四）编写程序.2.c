#include <stdio.h>
#include <math.h>

// 判断素数：是素数返回1，否则返回0
int isPrime(int num) {
    if (num <= 1) return 0; // 1及以下不是素数
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d是素数\n", num);
    } else {
        printf("%d不是素数\n", num);
    }
    return 0;
}
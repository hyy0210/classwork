#include <stdio.h>

// 判断一个数是否为素数
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// 验证哥德巴赫猜想
void goldbachConjecture(int evenNum) {
    int found = 0;
    for (int i = 2; i <= evenNum / 2; i++) {
        if (isPrime(i) && isPrime(evenNum - i)) {
            printf("%d = %d + %d\n", evenNum, i, evenNum - i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("未找到两个素数之和等于 %d\n", evenNum);
    }
}

int main() {
    int evenNum;
    printf("请输入一个充分大的偶数：");
    scanf("%d", &evenNum);

    if (evenNum % 2 != 0) {
        printf("输入的不是偶数！\n");
        return 1;
    }

    goldbachConjecture(evenNum);

    return 0;
}
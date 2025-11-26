#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("请输入两个正整数：");
    scanf("%d %d", &num1, &num2);

    int greatestCommonDivisor = gcd(num1, num2);
    int leastCommonMultiple = lcm(num1, num2);

    printf("%d 和 %d 的最大公约数是：%d\n", num1, num2, greatestCommonDivisor);
    printf("%d 和 %d 的最小公倍数是：%d\n", num1, num2, leastCommonMultiple);

    return 0;
}
#include <stdio.h>
int main() {
    // 定义性别和体重变量，gender 用字符类型存储（'m' 表示男性，'f' 表示女性）
    char gender;
    int weight;

    // 提示并输入性别
    printf("请输入性别(m 表示男性,f 表示女性):");
    scanf("%c", &gender);

    // 提示并输入体重
    printf("请输入体重（公斤）：");
    scanf("%d", &weight);

    // 根据性别和体重判断输血量并输出
    if (gender == 'm') {
        if (weight > 120) {
            printf("男生体重超过 120 公斤，输血量为 200 毫升\n");
        } else {
            printf("男生体重低于或等于 120 公斤，输血量为 180 毫升\n");
        }
    } else if (gender == 'f') {
        if (weight > 100) {
            printf("女生体重超过 100 公斤，输血量为 150 毫升\n");
        } else {
            printf("女生体重低于或等于 100 公斤，输血量为 120 毫升\n");
        }
    } else {
        // 处理性别输入错误的情况
        printf("性别输入错误，请输入 m 或 f\n");
    }

    return 0;
}
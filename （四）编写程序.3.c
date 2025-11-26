#include <stdio.h>

int main() {
    int days = 30;
    double strangerToRich = 100000.0 * days; 
    double richToStranger = 0.0;
    double money = 0.01; 

    for (int i = 1; i <= days; i++) {
        richToStranger += money;
        money *= 2; 
    }

    printf("陌生人给百万富翁 %.2f 元\n", strangerToRich);
    printf("百万富翁给陌生人 %.2f 元\n", richToStranger);

    return 0;
}
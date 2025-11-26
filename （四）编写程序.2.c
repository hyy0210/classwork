#include <stdio.h>

int main() {
    int day = 10;
    int chocolate = 1; 
    for (int i = day - 1; i >= 1; i--) {
        chocolate = (chocolate + 1) * 2;
    }

    printf("小明妈妈总共买了 %d 块巧克力\n", chocolate);

    return 0;
}
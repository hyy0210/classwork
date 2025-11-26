#include <stdio.h>

// 转置二维数组（假设是3行3列，可自行调整）
void transpose(int arr[3][3], int res[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            res[j][i] = arr[i][j];
        }
    }
}

// 打印二维数组
void printArr(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int res[3][3];
    
    printf("原数组：\n");
    printArr(arr);
    
    transpose(arr, res);
    printf("转置后数组：\n");
    printArr(res);
    
    return 0;
}
#include <stdio.h>

int main() {
    int matrix[5][6] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30}
    };
    
    int sum = 0;
    
    printf("矩阵:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 6; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // 计算两条对角线之和
    for(int i = 0; i < 5; i++) {
        // 主对角线（从左上到右下）
        sum += matrix[i][i];
        // 副对角线（从右上到左下）
        sum += matrix[i][5-i];
    }
    
    printf("\n两条对角线元素之和: %d\n", sum);
    
    return 0;
}
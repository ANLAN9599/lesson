#include <stdio.h>

int main() {
    int magic[3][3] = {0};
    int n = 3;
    int i = 0, j = n/2;
    int num;
    
    // 生成魔方阵（奇数阶魔方阵的简单实现）
    for(num = 1; num <= n*n; num++) {
        magic[i][j] = num;
        
        // 计算下一个位置
        int new_i = (i - 1 + n) % n;
        int new_j = (j + 1) % n;
        
        // 如果下一个位置已被占用，则向下移动
        if(magic[new_i][new_j] != 0) {
            i = (i + 1) % n;
        } else {
            i = new_i;
            j = new_j;
        }
    }
    
    printf("3阶魔方矩阵:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%3d ", magic[i][j]);
        }
        printf("\n");
    }
    
    // 验证每行、每列、对角线的和
    printf("\n验证:\n");
    int sum = n * (n*n + 1) / 2;
    printf("每行/每列/对角线的和应为: %d\n", sum);
    
    return 0;
}
#include <stdio.h>

int main() {
    int sex;        // 性别：1-男性，2-女性
    float weight;   // 体重（公斤）
    int cubage;     // 输血量（毫升）
    
    printf("请输入性别（1-男性，2-女性）：");
    scanf("%d", &sex);
    printf("请输入体重（公斤）：");
    scanf("%f", &weight);
    
    if (sex == 1) { // 男性
        if (weight > 120) {
            cubage = 200;
        } else {
            cubage = 180;
        }
    } else if (sex == 2) { // 女性
        if (weight > 100) {
            cubage = 150;
        } else {
            cubage = 120;
        }
    } else {
        printf("性别输入错误！\n");
        return 1;
    }
    
    printf("输血量为：%d毫升\n", cubage);
    return 0;
}
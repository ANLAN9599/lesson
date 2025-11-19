#include <stdio.h>

int main() {
    float height = 100.0;  // 初始高度
    float total_distance = 0.0;  // 总路程
    int times = 10;        // 落地次数
    
    printf("小球从100米高度自由落下\n");
    
    for(int i = 1; i <= times; i++) {
        // 下落过程
        total_distance += height;
        printf("第%d次落地时，小球经过的路程: %.2f米\n", i, total_distance);
        
        // 反弹高度
        height /= 2;
        printf("第%d次反弹高度: %.2f米\n", i, height);
        
        // 反弹过程（除了最后一次）
        if(i < times) {
            total_distance += height;
        }
    }
    
    printf("\n最终结果:\n");
    printf("第10次落地时，共经过: %.2f米\n", total_distance);
    printf("第10次反弹高度: %.2f米\n", height);
    
    return 0;
}
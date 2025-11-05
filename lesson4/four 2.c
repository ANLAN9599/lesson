#include <stdio.h>

int main() {
    int day, total = 1;  // 第10天剩1块
    
    // 从第10天倒推到第1天
    for (day = 9; day >= 1; day--) {
        total = (total + 1) * 2;
    }
    
    printf("小明妈妈总共买了 %d 块巧克力\n", total);
    
    // 验证过程
    printf("\n验证过程:\n");
    int current = total;
    for (day = 1; day <= 10; day++) {
        printf("第%d天: 原有%d块, 吃了%d块, 剩余%d块\n", 
               day, current, current/2 + 1, current - (current/2 + 1));
        current = current - (current/2 + 1);
    }
    
    return 0;
}
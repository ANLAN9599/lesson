#include <stdio.h>

int main() {
    int days = 30;
    long stranger_give = 0;    // 陌生人给的钱（分）
    long millionaire_give = 0; // 百万富翁给的钱（分）
    long daily_give = 1;       // 第一天给1分钱
    
    for (int day = 1; day <= days; day++) {
        stranger_give += 10000000;  // 10万元 = 10000000分
        millionaire_give += daily_give;
        daily_give *= 2;            // 每天翻倍
    }
    
    printf("陌生人给百万富翁: %.2f 元\n", stranger_give / 100.0);
    printf("百万富翁给陌生人: %.2f 元\n", millionaire_give / 100.0);
    printf("百万富翁%s\n", (stranger_give > millionaire_give) ? "赚了" : "亏了");
    
    return 0;
}
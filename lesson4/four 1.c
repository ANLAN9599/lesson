#include <stdio.h>

int main() {
    int a, b, m, n, temp;
    
    printf("请输入两个正整数: ");
    scanf("%d%d", &a, &b);
    
    m = a;
    n = b;
    
    // 计算最大公约数（辗转相除法）
    while (n != 0) {
        temp = m % n;
        m = n;
        n = temp;
    }
    
    // 最小公倍数 = 两数乘积 / 最大公约数
    int lcm = a * b / m;
    
    printf("%d和%d的最大公约数是: %d\n", a, b, m);
    printf("%d和%d的最小公倍数是: %d\n", a, b, lcm);
    
    return 0;
}
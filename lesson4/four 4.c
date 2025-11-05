#include <stdio.h>
#include <math.h>

// 判断是否为素数
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int even;
    
    printf("请输入一个充分大的偶数: ");
    scanf("%d", &even);
    
    if (even % 2 != 0 || even < 4) {
        printf("输入错误！请输入大于等于4的偶数\n");
        return 1;
    }
    
    int found = 0;
    for (int i = 2; i <= even / 2; i++) {
        if (isPrime(i) && isPrime(even - i)) {
            printf("%d = %d + %d\n", even, i, even - i);
            found = 1;
            break;  // 找到一个分解即可
        }
    }
    
    if (!found) {
        printf("%d 不能表示为两个素数之和\n", even);
    }
    
    return 0;
}
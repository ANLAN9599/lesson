#include <stdio.h>

int isPrime(int n) {
    if(n <= 1) return 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("请输入一个整数: ");
    scanf("%d", &num);
    
    if(isPrime(num))
        printf("%d是素数\n", num);
    else
        printf("%d不是素数\n", num);
    
    return 0;
}
#include <stdio.h>
int main() {
    int n, count = 0, digits[5];
    printf("输入数字:");
    scanf("%d", &n);
    
    int t = n;
    while(t > 0) {
        digits[count++] = t % 10;
        t /= 10;
    }
    
    printf("%d位数\n", count);
    printf("各位:");
    for(int i = count-1; i >= 0; i--) printf("%d ", digits[i]);
    printf("\n逆序:");
    for(int i = 0; i < count; i++) printf("%d", digits[i]);
    return 0;
}
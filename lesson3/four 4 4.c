#include <stdio.h>
int main() {
    int n, a, b, c;
    printf("输入三位数:");
    scanf("%d", &n);
    
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    
    if(a*a*a + b*b*b + c*c*c == n) 
        printf("是水仙花数\n");
    else 
        printf("不是水仙花数\n");
    return 0;
}
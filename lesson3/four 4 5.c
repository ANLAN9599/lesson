#include <stdio.h>
int main() {
    float p, total;
    printf("输入利润:");
    scanf("%f", &p);
    
    if(p <= 1000) 
        total = 500;
    else if(p <= 2000) 
        total = 500 + (p - 1000) * 0.1;
    else if(p <= 5000) 
        total = 500 + 100 + (p - 2000) * 0.15;
    else if(p <= 10000) 
        total = 500 + 100 + 450 + (p - 5000) * 0.2;
    else 
        total = 500 + 100 + 450 + 1000 + (p - 10000) * 0.25;
    
    printf("工资总额:%.2f\n", total);
    return 0;
}
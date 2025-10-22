#include <stdio.h>
#define PI 3.1415926

int main()
{
    float radius = 5.0;
    float circumference, area;
    
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    
    printf("半径 = 5.000\n");
    printf("周长 = %.3f\n", circumference);
    printf("面积 = %.3f\n", area);
    
    return 0;
}
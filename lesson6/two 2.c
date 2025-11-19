#include<stdio.h>
double fun(double x,int y)
{ int i;
double z;
for(i=1,z=x;i<y;i++)z=z*x;
return z;
}
int main()
{
    double base,result;
    int exponent;
    printf("请输入底数和指数:");
    scanf("%lf%d",&base,&exponent);
    result =fun(base,exponent);
    printf("%.2f的%d次方=%.2f\n",base,exponent,result);
    return 0;
}
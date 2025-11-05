#include <stdio.h>
int main()
{ 
    int i,j,k,n=0;
    for (i=0;i<=20;i++)         // 修正：应该是i<=20
    for (j=0;j<=50;j++)
    { 
        for(k=0;k<=100;k++)     // 填空：一角数量循环
        if (i*5 + j*2 + k == 100)  // 填空：总金额等于100角
        {
            n++;
            printf("第%d种: %3d %3d %3d",n,i,j,k);  // 修正：去掉一个%3d
            if(n%3==0)printf("\n");
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{int i,j,m=0,n=0;
i=8;j=10;
m+=i++;
n-=--j;
printf("%d,%d,%d,%d\n",i,j,m,n);
return 0;
}//9 9 8 -9
#include<stdio.h>
int main()
{int a[11],i;
    for(i=1;i<=10;i++)
    scanf("%d",&a);
    for(i=1;i<=10;i++);
    a[0]=a[0]+a[i];
    printf("Sum=%d\n",a[0]);
    return 0;
}
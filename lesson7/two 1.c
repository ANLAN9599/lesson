#include <stdio.h>
 int main()
{
    int a[6] = {2,4,6,8,10,12};
    int s, i, *p;  // 这里原题写的是 "i * p"，应该是笔误，应改为 i, *p
    s = 0;
    p = a;
    for (i = 0; i < 6; i++)
    s += *p;  // 取 p 指向的值加到 s
    p++;      // 指针后移// 求各元素的和
    printf("s=%d\n", s);
    return 0;
}//s=12
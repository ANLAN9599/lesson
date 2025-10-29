#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    if (x > 9)
        y = -1;
    else if (x > 3)  // 且 x <= 9 因为上一个 if 没满足
        y = x * (x + 2);
    else if (x > -1) // 且 x <= 3
        y = 2 * x;
    else
        y = x - 1;
    printf("%d\n", y);
    return 0;
}

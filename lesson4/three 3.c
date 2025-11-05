#include <stdio.h>
int main()
{
    int i=1;
    while(i <= 100)
    {
        printf("%4d",i);
        if (i%10 == 0) printf("\n");  
        i++;
    }
    return 0;
}
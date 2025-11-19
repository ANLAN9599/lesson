#include<stdio.h>
int digit(int n,int k)
{
    for(int i=1;i<k;i++)
    {
     n/=10;
    }
    return n% 10;}
    int main()
    {
        printf("%d\n",digit(829,1));
        printf("%d\n",digit(829,3));
        return 0;
    }
//9
//8
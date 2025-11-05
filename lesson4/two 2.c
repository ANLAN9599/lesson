#include <stdio.h>
int main()
{
    int a,s,n,count;
    a=2,s=0,n=1,count=1;
    while(count<=7)
    {
        s=s+a;          
        a=a*2;          
        count++;        
    }
    printf("s=%d\n",s);
    return 0;
}//s=254
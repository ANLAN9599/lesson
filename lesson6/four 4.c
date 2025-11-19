#include<stdio.h>
int check(int x,int y,int n)
{
    if(x>=0&&x<=n-1&&y>=0&&y<=n-1)
    return 1;
    else
     return 0;
}
int main(){
    printf("%d\n",check(2,3,5));
    printf("%d\n",check(5,3,5));
    return 0;
    }//1
     //0
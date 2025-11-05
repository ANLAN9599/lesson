#include<stdio.h>
void main()
{ int x,i;
 for(i=1;i<=100;i++)
{ x=i;
if(++x%2==0)
if(++x%3==0)
if(++x%7==0)
 printf("%d,",x);
}
}//28 70
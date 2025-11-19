#include<stdio.h>
int mystrlen(char str[])
{ int i;
for(i=0;str[i]!='\0';i++);
return i;}
int main()
{ 
    char str[100];
    int length;
    printf("请输入一个字符串：");
    scanf("%s",str);
    length =mystrlen(str);
    printf("字符串\"%s\"的长度是：%d\n",str,length);
    return 0;
}
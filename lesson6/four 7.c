#include<stdio.h>
int*find_middle(int a[],int n)
{
    return&a[n/2];
}
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,2,3,4};
    printf("中间元素；%d\n",*find_middle(arr1,5));
    printf("中间元素；%d\n",*find_middle(arr2,4));
    return 0;
}
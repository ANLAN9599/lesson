#include <stdio.h>
int main()
{
    int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
    int *p1 = arr1;
    int **pp1 = &p1;
    
    printf("一维数组: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", *(*pp1 + i));
    printf("\n");
    int arr2[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int *p2 = &arr2[0][0];
    int **pp2 = &p2;
    
    printf("二维数组:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%2d ", *(*(pp2) + i * 4 + j));
        printf("\n");
    }
    return 0;
}
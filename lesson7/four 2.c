#include <stdio.h>
#include <stdbool.h>
bool search(int a[], int n, int key)
{
    int *p;
    for (p = a; p < a + n; p++)
        if (*p == key)
            return true;
    return false;
}
int main()
{
    int arr[] = {5, 3, 7, 9, 2};
    int k;
    printf("Enter key: ");
    scanf("%d", &k);
    if (search(arr, 5, k))
        printf("Found\n");
    else
        printf("Not found\n");
    return 0;
}
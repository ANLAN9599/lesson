#include <stdio.h>
int main()
{
    int arr[15] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int key, *p = arr, found = 0, pos = 0;
    printf("Enter a number to search: ");
    scanf("%d", &key);
    for (; p < arr + 15; p++, pos++)
    {
        if (*p == key)
        {
            printf("Found at position: %d\n", pos);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("No Found\n");
    return 0;
}
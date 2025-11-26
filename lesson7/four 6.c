#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int (*cmp)(const char *, const char *) = strcmp;
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    
    if (cmp(str1, str2) == 0)
        printf("两行字符串一致\n");
    else
        printf("两行字符串不一致\n");
    
    return 0;
}
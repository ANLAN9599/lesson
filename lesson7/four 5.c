#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    
    char *end = str;
    while (*end) end++;
    end--; 
    
    printf("Reversed: ");
    while (end >= str)
    {
        putchar(*end);
        end--;
    }
    printf("\n");
    return 0;
}
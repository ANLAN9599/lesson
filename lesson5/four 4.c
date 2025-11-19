#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int len = strlen(str);
    for(int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}

int main() {
    char str[100];
    
    printf("请输入字符串: ");
    scanf("%s", str);
    
    printf("原字符串: %s\n", str);
    reverseString(str);
    printf("逆转后: %s\n", str);
    
    return 0;
}
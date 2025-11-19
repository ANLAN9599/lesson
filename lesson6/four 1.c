#include <stdio.h>

void findNumbers() {
    int i;
    for(i = 10; i < 100; i++) {
        if(i % 3 == 0 && (i / 10 == 5 || i % 10 == 5)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    findNumbers();
    return 0;
}
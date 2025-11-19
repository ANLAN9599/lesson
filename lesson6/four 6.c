#include <stdio.h>
#define N 3

void transpose(int arr[N][N]) {
    int i, j, temp;
    for(i = 0; i < N; i++) {
        for(j = i + 1; j < N; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

int main() {
    int arr[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
    transpose(arr);
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
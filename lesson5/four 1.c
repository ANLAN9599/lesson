#include <stdio.h>

// 冒泡排序（从大到小）
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-1-i; j++) {
            if(arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// 选择排序（从大到小）
void selectionSort(int arr[], int n) {
    int i, j, max_idx, temp;
    for(i = 0; i < n-1; i++) {
        max_idx = i;
        for(j = i+1; j < n; j++) {
            if(arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
}

int main() {
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    
    printf("原数组: ");
    for(int i = 0; i < n; i++) printf("%d ", arr1[i]);
    
    bubbleSort(arr1, n);
    printf("\n冒泡排序后: ");
    for(int i = 0; i < n; i++) printf("%d ", arr1[i]);
    
    selectionSort(arr2, n);
    printf("\n选择排序后: ");
    for(int i = 0; i < n; i++) printf("%d ", arr2[i]);
    
    return 0;
}
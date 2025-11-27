#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    int temp;
    int swapped;   // 用來記錄是否有交換

    for (i = 0; i < n - 1; i++) {

        swapped = 0;    // 每一趟排序前先標記為 "沒有交換過"

        // (a) 每趟比較次數遞減：n-1-i
        for (j = 0; j < n - 1 - i; j++) {

            if (arr[j] > arr[j + 1]) {
                // 交換
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;   // 發生交換
            }
        }

        // (b) 如果這一趟完全沒有交換，表示已經排序好了 → 提早停止
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int arr[] = { 9, 1, 8, 2, 7, 3, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, n);

    printf("\n\nSorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    system("pause");
    return 0;
}
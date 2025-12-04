#include <stdio.h>

int recursiveMaximum(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }

    // 遞迴：比較陣列前面部分的最大值和當前元素
    int maxInRest = recursiveMaximum(arr, size - 1);

    // 返回兩者中的最大值
    if (arr[size - 1] > maxInRest) {
        return arr[size - 1];
    }
    else {
        return maxInRest;
    }
}

int main() {
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The maximum value in the array is: %d\n", recursiveMaximum(arr, size));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int recursiveBinarySearch(const int b[], int low, int high, int key);

int main(void)
{
    const int SIZE = 15;
    int a[15] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28 };
    int key;
    int index;

    printf("Array:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%2d ", a[i]);
    }
    printf("\nEnter key to search: ");
    scanf("%d", &key);

    index = recursiveBinarySearch(a, 0, SIZE - 1, key);

    if (index != -1)
        printf("Found %d at index %d\n", key, index);
    else
        printf("%d not found\n", key);

    system("pause");
    return 0;
}

int recursiveBinarySearch(const int b[], int low, int high, int key)
{
    if (low > high)
        return -1;

    int middle = (low + high) / 2;

    if (key == b[middle])
        return middle;
    else if (key < b[middle])
        return recursiveBinarySearch(b, low, middle - 1, key);
    else
        return recursiveBinarySearch(b, middle + 1, high, key);
}
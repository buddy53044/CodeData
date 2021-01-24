#include <stdio.h>
#include <stdlib.h>
#define size 10
int binarySearch(int *list, int key, int left, int right);

int main()
{
    int list[size] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    int key = 6;
    int subscript = binarySearch(list, key, 0, size - 1);
    printf("%d", subscript);

    system("pause");
    return 0;
}

int binarySearch(int *list, int key, int left, int right)
{
    int mid = (left + right) / 2;
    if (left < right)
    {
        if (key == list[mid])
            return mid;
        else if (key > list[mid])
            return binarySearch(list, key, mid + 1, right);
        else if (key < list[mid])
            return binarySearch(list, key, left, mid - 1);
    }
    else
    {
        return -1;
    }
}
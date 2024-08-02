#include <stdio.h>
int binarySearch(int arr[], int left, int right, int searchItem) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == searchItem)
            return mid;
        if (arr[mid] < searchItem)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int searchItem = 40;
    
    int result = binarySearch(arr, 0, n - 1, searchItem);
    
    if (result == -1)
        printf("Not Found\n");
    else
        printf("Found at index %d\n", result);
    
    return 0;
}

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 5, 3, 2};  
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    int duplicates = 0;
    int visited[size];
    for (i = 0; i < size; i++) {
        visited[i] = 0;
    }
    for (i = 0; i < size; i++) {
        if (visited[i] == 1) {
            continue;
        }
        int count = 1;
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; 
            }
        }
        if (count > 1) {
            duplicates++;
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d",visited[i]);
    }
    printf("Total number of duplicate elements in the array: %d\n", duplicates);
    return 0;
}

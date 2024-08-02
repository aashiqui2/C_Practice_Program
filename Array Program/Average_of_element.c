#include <stdio.h>
double average(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum / n;
}

int main()
{
    
    int arr[] = {1, 2, 3, 4, 5};

    
    int n = sizeof(arr) / sizeof(arr[0]);

    int avg = average(arr, n);

    printf("Average = %d ", avg);
    return 0;
}

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 3, 5, 6, 3, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int a[9] = {0};
    for (int i = 0; i < len; i++)
    {
        int count = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                a[i] = count;
            }
        }
    }
    int a1[9] = {0};
    for (int i = 0; i < 9; i++)
    {
        if (a[i] > 0 && a1[arr[i]] == 0)
        {
            printf("%d ", arr[i]);
            a1[arr[i]] = 1;
        }
    }
    return 0;
}
